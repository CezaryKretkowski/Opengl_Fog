.           gEwTwT  hEwT,    ..          gEwTwT  hEwT?    Bn _ m a x  ?. h p p   ??  ????a s s o c  ?i a t e d _   m i ASSOCI~1HPP  gEwTwT  ){vT-?  Bn _ m a x  ?. i n l   ??  ????a s s o c  ?i a t e d _   m i ASSOCI~1INL  gEwTwT  ){vT.?"  BIT     HPP !gEwTwT  ){vT0@  BIT     INL $gEwTwT  ){vT12	  B. h p p    ????????????  ????c l o s e  s t _ p o i   n t CLOSES~1HPP  'gEwTwT  ){vT2`  B. i n l    J????????????  ????c l o s e  Js t _ p o i   n t CLOSES~1INL  +gEwTwT  ){vT3?  Bg . h p p  ?  ??????????  ????c o l o r  ?_ e n c o d   i n COLOR_~1HPP  .gEwTwT  ){vT4?  Bg . i n l  6  ??????????  ????c o l o r  6_ e n c o d   i n COLOR_~1INL  1gEwTwT  ){vT5   Bp p   ???? ?????????????  ????c o l o r  ?_ s p a c e   . h COLOR_~2HPP  5gEwTwT  ){vT6?  Bn l   ???? ?????????????  ????c o l o r  ?_ s p a c e   . i COLOR_~2INL  <gEwTwT  ){vT7  BC o C g .  ;h p p   ????  ????c o l o r  ;_ s p a c e   _ Y COLOR_~3HPP  ?gEwTwT  ){vT8?  BC o C g .  wi n l   ????  ????c o l o r  w_ s p a c e   _ Y COLOR_~3INL  BgEwTwT  hEwT9                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  /// @ref gtx_associated_min_max
/// @file glm/gtx/associated_min_max.hpp
///
/// @see core (dependence)
/// @see gtx_extented_min_max (dependence)
///
/// @defgroup gtx_associated_min_max GLM_GTX_associated_min_max
/// @ingroup gtx
///
/// Include <glm/gtx/associated_min_max.hpp> to use the features of this extension.
///
/// @brief Min and max functions that return associated values not the compared onces.

#pragma once

// Dependency:
#include "../glm.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
#	ifndef GLM_ENABLE_EXPERIMENTAL
#		pragma message("GLM: GLM_GTX_associated_min_max is an experimental extension and may change in the future. Use #define GLM_ENABLE_EXPERIMENTAL before including it, if you really want to use it.")
#	else
#		pragma message("GLM: GLM_GTX_associated_min_max extension included")
#	endif
#endif

namespace glm
{
	/// @addtogroup gtx_associated_min_max
	/// @{

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U, qualifier Q>
	GLM_FUNC_DECL U associatedMin(T x, U a, T y, U b);

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<2, U, Q> associatedMin(
		vec<L, T, Q> const& x, vec<L, U, Q> const& a,
		vec<L, T, Q> const& y, vec<L, U, Q> const& b);

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		T x, const vec<L, U, Q>& a,
		T y, const vec<L, U, Q>& b);

	/// Minimum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		vec<L, T, Q> const& x, U a,
		vec<L, T, Q> const& y, U b);

	/// Minimum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U>
	GLM_FUNC_DECL U associatedMin(
		T x, U a,
		T y, U b,
		T z, U c);

	/// Minimum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		vec<L, T, Q> const& x, vec<L, U, Q> const& a,
		vec<L, T, Q> const& y, vec<L, U, Q> const& b,
		vec<L, T, Q> const& z, vec<L, U, Q> const& c);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U>
	GLM_FUNC_DECL U associatedMin(
		T x, U a,
		T y, U b,
		T z, U c,
		T w, U d);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		vec<L, T, Q> const& x, vec<L, U, Q> const& a,
		vec<L, T, Q> const& y, vec<L, U, Q> const& b,
		vec<L, T, Q> const& z, vec<L, U, Q> const& c,
		vec<L, T, Q> const& w, vec<L, U, Q> const& d);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		T x, vec<L, U, Q> const& a,
		T y, vec<L, U, Q> const& b,
		T z, vec<L, U, Q> const& c,
		T w, vec<L, U, Q> const& d);

	/// Minimum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMin(
		vec<L, T, Q> const& x, U a,
		vec<L, T, Q> const& y, U b,
		vec<L, T, Q> const& z, U c,
		vec<L, T, Q> const& w, U d);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U>
	GLM_FUNC_DECL U associatedMax(T x, U a, T y, U b);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<2, U, Q> associatedMax(
		vec<L, T, Q> const& x, vec<L, U, Q> const& a,
		vec<L, T, Q> const& y, vec<L, U, Q> const& b);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> associatedMax(
		T x, vec<L, U, Q> const& a,
		T y, vec<L, U, Q> const& b);

	/// Maximum comparison between 2 variables and returns 2 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, T, Q> const& x, U a,
		vec<L, T, Q> const& y, U b);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U>
	GLM_FUNC_DECL U associatedMax(
		T x, U a,
		T y, U b,
		T z, U c);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, T, Q> const& x, vec<L, U, Q> const& a,
		vec<L, T, Q> const& y, vec<L, U, Q> const& b,
		vec<L, T, Q> const& z, vec<L, U, Q> const& c);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, T, Q> associatedMax(
		T x, vec<L, U, Q> const& a,
		T y, vec<L, U, Q> const& b,
		T z, vec<L, U, Q> const& c);

	/// Maximum comparison between 3 variables and returns 3 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, T, Q> const& x, U a,
		vec<L, T, Q> const& y, U b,
		vec<L, T, Q> const& z, U c);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<typename T, typename U>
	GLM_FUNC_DECL U associatedMax(
		T x, U a,
		T y, U b,
		T z, U c,
		T w, U d);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, T, Q> const& x, vec<L, U, Q> const& a,
		vec<L, T, Q> const& y, vec<L, U, Q> const& b,
		vec<L, T, Q> const& z, vec<L, U, Q> const& c,
		vec<L, T, Q> const& w, vec<L, U, Q> const& d);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		T x, vec<L, U, Q> const& a,
		T y, vec<L, U, Q> const& b,
		T z, vec<L, U, Q> const& c,
		T w, vec<L, U, Q> const& d);

	/// Maximum comparison between 4 variables and returns 4 associated variable values
	/// @see gtx_associated_min_max
	template<length_t L, typename T, typename U, qualifier Q>
	GLM_FUNC_DECL vec<L, U, Q> associatedMax(
		vec<L, T, Q> const& x, U a,
		vec<L, T, Q> const& y, U b,
		vec<L, T, Q> const& z, U c,
		vec<L, T, Q> const& w, U d);

	/// @}
} //namespace glm

#include "associated_min_max.inl"
                                                                                                                                                                                                                                                                                                                                                                                    	  
                                               !  "  #  $  %  &  '  (  )  *  +  ,  -  .  /  0  1  2  3  4  5  6  7  8  9  :  ;  <  =  >  ?  @  A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z  [  \  ]  ^  _  `  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z  {  |  }  ~    ?  ????????????????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?                     	  
                    ??????                       !  "  #  $  %  &  '  (  )  *  +  ,  -  .  /  0  1  2  3  4  5  6  7  8  9  :  ;  <  =  >  ?  @  A  B  C  D  E  F  G  H  ???J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z  [  \  ]  ^  _  `  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z  {  |  }  ~    ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ????????????????????????????  ?  ??????????  ?  ???????  ?  ???????  ?  ?  ??????????????????????  ?  ?  ?  ????  ???????????????????  ?  ????  ?  ?  ?  ?  ????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?                     	  
  ???                                           !  "  #  $  %  &  '  (  )  *  +  ,  ???.  ???0  1  ???3  4  ???6  ???8  9  ???;  ???=  >  ?  @  ???B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  ???Y  Z  ???\  ]  ^  _  `  a  b  c  d  e  f  g  h  ???j  ???l  m  n  o  p  q  r  ???t  u  v  w  x  y  z  ???|  ???~    ?  ????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ??????????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ????  ??????????  ?  ?  ?  ????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ???????????????????  ?  ?  ???????  ?  ?  ?  ?  ?????????????  ?  ?  ?  ?  ?  ?  ????????????????  ?  ?  ?  ?  ????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?     ???????????????  ?????????
  ??????????????????    ??????                         !  "  #  ???????????????????????????????????????????????????5  6  7  8  9  :  ;  ???????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????i  j  ?????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????  ?  ????????????????????????????????????????????????????????????????????????????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ????  ?  ???????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?                     	  
                        ???                     ??????#  $  %  &  '  (  )  *  +  ,  -  .  /  0  1  2  3  4  5  6  7  8  9  :  ;  <  =  >  ?  @  A  B  C  D  E  F  G  H  I  J  K  L  M  ???O  P  Q  ??????T  U  V  W  X  Y  Z  [  \  ]  ^  _  `  a  b  c  d  e  f  g  h  i  j  k  l  ???n  o  p  q  r  s  t  u  v  w  x  y  z  {  |  }  ~    ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ????  ?  ?  ????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?                     ??????                                             !  "  #  ???%  &  '  (  )  *  +  ,  -  .  /  0  1  2  3  4  5  6  7  8  9  :  ;  <  =  >  ?  @  A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z  [  \  ]  ^  _  `  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  ???q  r  s  ???u  v  w  x  y  z  {  |  }  ~    ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ???????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?                     	  
                                               !  "  #  $  %  ???'  (  )  ???+  ,  -  .  /  0  1  2  3  4  5  6  7  8  9  :  ;  <  =  >  ?  @  A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z  [  \  ]  ^  _  `  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  ??????w  x  y  z  {  |  }  ~    ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ????  ?  ?  ????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?                     	  
                                               !  "  #  $  %  &  '  (  )  *  +  ??????.  /  0  1  2  3  4  5  6  7  8  9  :  ;  <  =  >  ?  @  A  B  C  D  E  F  G  ???I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z  [  \  ]  ^  _  `  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z  {  |  }  ~    ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ????  ?  ?  ????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ???????  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?       ???            	  
                                               !  "  #  $  %  &  '  (  )  *  +  ,  -  .  /  0  1  2  3  4  5  6  7  8  9  :  ;  <  =  >  ?  @  A  B  C  D  E  F  G  H  I  J  K  L  M  N  ???P  Q  R  ???T  U  V  W  X  Y  Z  [  \  ]  ^  _  `  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z  {  |  }  ~    ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ?  ??????????  ?  ?  ???????  ????  ?  ?  ?  ?  ??????????  ??????????????????????????????????  ????  ?????????????????????????  ?  ?  ???????????????????  ???????  ????  ???????????????????  ???????  ?  ?  ?  ????????????????  ???????  ???????  ???????  ???????  ?  ???????  ?  ???????  ?  ??????    ??????      ?????????  ??????  ???  ???  ???    ???    ???      ???     ???"  #  $  %  ???'  (  ???*  ?????????.  /  0  1  2  3  ???5  6  7  8  ???????  <  =  >  ???@  A  ???????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????{  ?????????????????????????????????????????????????????????????  ???????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????  ??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????  ????  ?  ??????????????????????????????????  ???????????????????  ?  ?     ???        ???    	  ????????????  ???????????????                ???         !  "  #  $  ?????????(  ??????????????????/  ?????????????????????????????????                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        ) +
			i.x + vec<4, T, Q>(i1.x, i2.x, i3.x, T(1)));

		// Gradients: 7x7x6 points over a cube, mapped onto a 4-cross polytope
		// 7*7*6 = 294, which is close to the ring size 17*17 = 289.
		vec<4, T, Q> ip = vec<4, T, Q>(T(1) / T(294), T(1) / T(49), T(1) / T(7), T(0));

		vec<4, T, Q> p0 = gtc::grad4(j0,   ip);
		vec<4, T, Q> p1 = gtc::grad4(j1.x, ip);
		vec<4, T, Q> p2 = gtc::grad4(j1.y, ip);
		vec<4, T, Q> p3 = gtc::grad4(j1.z, ip);
		vec<4, T, Q> p4 = gtc::grad4(j1.w, ip);

		// Normalise gradients
		vec<4, T, Q> norm = detail::taylorInvSqrt(vec<4, T, Q>(dot(p0, p0), dot(p1, p1), dot(p2, p2), dot(p3, p3)));
		p0 *= norm.x;
		p1 *= norm.y;
		p2 *= norm.z;
		p3 *= norm.w;
		p4 *= detail::taylorInvSqrt(dot(p4, p4));

		// Mix contributions from the five corners
		vec<3, T, Q> m0 = max(T(0.6) - vec<3, T, Q>(dot(x0, x0), dot(x1, x1), dot(x2, x2)), vec<3, T, Q>(0));
		vec<2, T, Q> m1 = max(T(0.6) - vec<2, T, Q>(dot(x3, x3), dot(x4, x4)             ), vec<2, T, Q>(0));
		m0 = m0 * m0;
		m1 = m1 * m1;
		return T(49) *
			(dot(m0 * m0, vec<3, T, Q>(dot(p0, x0), dot(p1, x1), dot(p2, x2))) +
			dot(m1 * m1, vec<2, T, Q>(dot(p3, x3), dot(p4, x4))));
	}
}//namespace glm
