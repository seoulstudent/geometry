/**
 * @file geometry/point2d.hpp
 * @author seoulstudent (gingtom2@naver.com)
 * @brief Point class declaration with 2-dimension
 * @version 1.0.0
 * @date 2023-12-31 *
 * @copyright Copyright (c) 2023
 */

// Copyright (c) 2023 Programmers, All Rights Reserved.
// Authors : Seoulstudent

#ifndef SEOULSTUDENT_GEOMETRY_POINT_2D_HPP_
#define SEOULSTUDENT_GEOMETRY_POINT_2D_HPP_

namespace seoulstudent::geometry {

/**
 * @brief Point class with 2-dimension
 *
 */
class Point2D {
 public:
  /**
   * @brief Construct a new Point2D object
   */
  Point2D() = default;

  /**
   * @brief Construct a new Point2D object with x, y value
   * @param x Double type x coordinate value
   * @param y Double type y coordinate value
   */
  Point2D(double x, double y);

  /**
   * @brief Copy construct a new Point2D object with other Point2D object
   * @param other Point2D object
   */
  Point2D(const Point2D& other) = default;

  /**
   * @brief Move construct a new Point2D object with other Point2D object
   * @param other Point2D object
   */
  Point2D(Point2D&& other) noexcept = default;

  /**
   * @brief Destroy the Point2D object
   */
  virtual ~Point2D() = default;  // Must added virtual keyword

  /**
   * @brief Copy assignment operator
   * @param other Point2D object
   * @return Point2D& Reference of Point2D object
   */
  // Point2D new_one = old_one;
  // new_one.GetX();
  // old_one.GetX();
  auto operator=(const Point2D& other) -> Point2D& = default;

  /**
   * @brief Move assignment operator
   * @param other Point2D object
   * @return Point2D& Reference of Point2D object
   */
  // Point2D new_one = std::move(old_one);
  // new_one.GetX();
  // old_one.GetX(); xxxxxxxx
  auto operator=(Point2D&& other) -> Point2D& = default;

  /**
   * @brief Calculate distance between this point and target point
   * @param target Other Point2D object to calculate distance
   * @return double Euclidean distance between this point and target point
   */
  auto CalculateDistance(const Point2D& target) const -> double;

  /**
   * @brief Calculate distance between lhs point and rhs point
   * @param lhs Left hand side Point2D object
   * @param rhs Right hand side Point2D object
   * @return double Euclidean distance between lhs point and rhs point
   */
  [[nodiscard]] static auto CalculateDistance(const Point2D& lhs,
                                              const Point2D& rhs) -> double;
  /**
   * @brief Set x coordinate value
   * @param x Double type input x coordinate value
   */
  void SetX(double x);

  /**
   * @brief Set y coordinate value
   * @param y Double type input y coordinate value
   */
  void SetY(double y);

  /**
   * @brief Get x coordinate value of this point
   * @return double x coordinate value of this point
   */
  [[nodiscard]] auto GetX() const -> double;

  /**
   * @brief Get y coordinate value of this point
   * @return double y coordinate value of this point
   */
  [[nodiscard]] auto GetY() const -> double;

  /**
   * @brief Plus coordinate value of this point
   * @return double value of two points plus value
   */
  auto operator+(const Point2D& other) const -> Point2D;

  /**
   * @brief Minus coordinate value of this point
   * @return double value of two points minus value
   */
  auto operator-(const Point2D& other) const -> Point2D;

  /**
   * @brief Plus coordinate value of this point and save to this point
   * @return original point reference
   */
  auto operator+=(const Point2D& other) -> Point2D&;

  /**
   * @brief Minus coordinate value of this point and save to this point
   * @return original point reference
   */
  auto operator-=(const Point2D& other) -> Point2D&;

  /**
   * @brief Multiply coordinate value of this point
   * @return double value of two points plus value
   */
  auto operator*(double scalar) const -> Point2D;

  /**
   * @brief Divide coordinate value of this point
   * @return double value of two points plus value
   */
  auto operator/(double scalar) const -> Point2D;

  /**
   * @brief Compare whether the points are the same
   * @return if the points are same return True
   */
  auto operator==(const Point2D& other) const -> bool;

  /**
   * @brief Compare whether the points are different
   * @return if the points are different return True
   */
  auto operator!=(const Point2D& other) const -> bool;

 private:
  double x_{0.0};  ///< x coordinate
  double y_{0.0};  ///< y coordinate
};

}  // namespace seoulstudent::geometry

#endif
