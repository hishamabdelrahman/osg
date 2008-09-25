// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Matrix>
#include <osg/Object>
#include <osgShadow/MinimalShadowMap>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(osgShadow::MinimalShadowMap, osgShadow::MinimalShadowMap::ThisClass)

TYPE_NAME_ALIAS(osgShadow::StandardShadowMap, osgShadow::MinimalShadowMap::BaseClass)

BEGIN_ENUM_REFLECTOR(osgShadow::MinimalShadowMap::ShadowReceivingCoarseBoundAccuracy)
	I_DeclaringFile("osgShadow/MinimalShadowMap");
	I_EnumLabel(osgShadow::MinimalShadowMap::EMPTY_BOX);
	I_EnumLabel(osgShadow::MinimalShadowMap::BOUNDING_SPHERE);
	I_EnumLabel(osgShadow::MinimalShadowMap::BOUNDING_BOX);
	I_EnumLabel(osgShadow::MinimalShadowMap::DEFAULT_ACCURACY);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgShadow::MinimalShadowMap)
	I_DeclaringFile("osgShadow/MinimalShadowMap");
	I_BaseType(osgShadow::StandardShadowMap);
	I_Constructor0(____MinimalShadowMap,
	               "Classic OSG constructor. ",
	               "");
	I_ConstructorWithDefaults2(IN, const osgShadow::MinimalShadowMap &, msm, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____MinimalShadowMap__C5_MinimalShadowMap_R1__C5_osg_CopyOp_R1,
	                           "Classic OSG cloning constructor. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Declaration of standard OSG object methods. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(void, setModellingSpaceToWorldTransform, IN, const osg::Matrix &, modellingSpaceToWorld,
	          Properties::NON_VIRTUAL,
	          __void__setModellingSpaceToWorldTransform__C5_osg_Matrix_R1,
	          "",
	          "");
	I_Method0(const osg::Matrix &, getModellingSpaceToWorldTransform,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Matrix_R1__getModellingSpaceToWorldTransform,
	          "",
	          "");
	I_Method0(float, getMaxFarPlane,
	          Properties::NON_VIRTUAL,
	          __float__getMaxFarPlane,
	          "",
	          "");
	I_Method1(void, setMaxFarPlane, IN, float, maxFarPlane,
	          Properties::NON_VIRTUAL,
	          __void__setMaxFarPlane__float,
	          "",
	          "");
	I_Method0(float, getMinLightMargin,
	          Properties::NON_VIRTUAL,
	          __float__getMinLightMargin,
	          "",
	          "");
	I_Method1(void, setMinLightMargin, IN, float, minLightMargin,
	          Properties::NON_VIRTUAL,
	          __void__setMinLightMargin__float,
	          "",
	          "");
	I_Method1(void, setShadowReceivingCoarseBoundAccuracy, IN, osgShadow::MinimalShadowMap::ShadowReceivingCoarseBoundAccuracy, accuracy,
	          Properties::NON_VIRTUAL,
	          __void__setShadowReceivingCoarseBoundAccuracy__ShadowReceivingCoarseBoundAccuracy,
	          "",
	          "");
	I_Method0(osgShadow::MinimalShadowMap::ShadowReceivingCoarseBoundAccuracy, getShadowReceivingCoarseBoundAccuracy,
	          Properties::NON_VIRTUAL,
	          __ShadowReceivingCoarseBoundAccuracy__getShadowReceivingCoarseBoundAccuracy,
	          "",
	          "");
	I_SimpleProperty(float, MaxFarPlane, 
	                 __float__getMaxFarPlane, 
	                 __void__setMaxFarPlane__float);
	I_SimpleProperty(float, MinLightMargin, 
	                 __float__getMinLightMargin, 
	                 __void__setMinLightMargin__float);
	I_SimpleProperty(const osg::Matrix &, ModellingSpaceToWorldTransform, 
	                 __C5_osg_Matrix_R1__getModellingSpaceToWorldTransform, 
	                 __void__setModellingSpaceToWorldTransform__C5_osg_Matrix_R1);
	I_SimpleProperty(osgShadow::MinimalShadowMap::ShadowReceivingCoarseBoundAccuracy, ShadowReceivingCoarseBoundAccuracy, 
	                 __ShadowReceivingCoarseBoundAccuracy__getShadowReceivingCoarseBoundAccuracy, 
	                 __void__setShadowReceivingCoarseBoundAccuracy__ShadowReceivingCoarseBoundAccuracy);
END_REFLECTOR
