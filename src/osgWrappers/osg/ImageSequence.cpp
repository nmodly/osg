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
#include <osg/Image>
#include <osg/ImageSequence>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/StateAttribute>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osg::Image > >, osg::ImageSequence::Images)

TYPE_NAME_ALIAS(std::list< std::string >, osg::ImageSequence::FileNames)

BEGIN_OBJECT_REFLECTOR(osg::ImageSequence)
	I_DeclaringFile("osg/ImageSequence");
	I_BaseType(osg::ImageStream);
	I_Constructor0(____ImageSequence,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::ImageSequence &, ImageSequence, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ImageSequence__C5_ImageSequence_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __Object_P1__clone__C5_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_Object_P1,
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
	I_Method1(int, compare, IN, const osg::Image &, rhs,
	          Properties::VIRTUAL,
	          __int__compare__C5_Image_R1,
	          "Return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(void, setReferenceTime, IN, double, t,
	          Properties::VIRTUAL,
	          __void__setReferenceTime__double,
	          "",
	          "");
	I_Method0(double, getReferenceTime,
	          Properties::VIRTUAL,
	          __double__getReferenceTime,
	          "",
	          "");
	I_Method1(void, setTimeMultiplier, IN, double, tm,
	          Properties::VIRTUAL,
	          __void__setTimeMultiplier__double,
	          "",
	          "");
	I_Method0(double, getTimeMultiplier,
	          Properties::VIRTUAL,
	          __double__getTimeMultiplier,
	          "",
	          "");
	I_Method1(void, setDuration, IN, double, duration,
	          Properties::NON_VIRTUAL,
	          __void__setDuration__double,
	          "",
	          "");
	I_Method0(double, getDuration,
	          Properties::NON_VIRTUAL,
	          __double__getDuration,
	          "",
	          "");
	I_Method1(void, setPreLoadTime, IN, double, preLoadTime,
	          Properties::NON_VIRTUAL,
	          __void__setPreLoadTime__double,
	          "",
	          "");
	I_Method0(double, getPreLoadTime,
	          Properties::NON_VIRTUAL,
	          __double__getPreLoadTime,
	          "",
	          "");
	I_Method1(void, setPruneOldImages, IN, bool, prune,
	          Properties::NON_VIRTUAL,
	          __void__setPruneOldImages__bool,
	          "",
	          "");
	I_Method0(bool, getPruneOldImages,
	          Properties::NON_VIRTUAL,
	          __bool__getPruneOldImages,
	          "",
	          "");
	I_Method1(void, addImageFile, IN, const std::string &, fileName,
	          Properties::NON_VIRTUAL,
	          __void__addImageFile__C5_std_string_R1,
	          "",
	          "");
	I_Method0(osg::ImageSequence::FileNames &, getFileNames,
	          Properties::NON_VIRTUAL,
	          __FileNames_R1__getFileNames,
	          "",
	          "");
	I_Method0(const osg::ImageSequence::FileNames &, getFileNames,
	          Properties::NON_VIRTUAL,
	          __C5_FileNames_R1__getFileNames,
	          "",
	          "");
	I_Method1(void, addImage, IN, osg::Image *, image,
	          Properties::NON_VIRTUAL,
	          __void__addImage__osg_Image_P1,
	          "",
	          "");
	I_Method0(osg::ImageSequence::Images &, getImages,
	          Properties::NON_VIRTUAL,
	          __Images_R1__getImages,
	          "",
	          "");
	I_Method0(const osg::ImageSequence::Images &, getImages,
	          Properties::NON_VIRTUAL,
	          __C5_Images_R1__getImages,
	          "",
	          "");
	I_Method1(void, update, IN, osg::NodeVisitor *, nv,
	          Properties::VIRTUAL,
	          __void__update__NodeVisitor_P1,
	          "",
	          "");
	I_ProtectedMethod1(void, setImageToChild, IN, const osg::Image *, image,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__setImageToChild__C5_osg_Image_P1,
	                   "",
	                   "");
	I_ProtectedMethod0(void, computeTimePerImage,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__computeTimePerImage,
	                   "",
	                   "");
	I_SimpleProperty(double, Duration, 
	                 __double__getDuration, 
	                 __void__setDuration__double);
	I_SimpleProperty(osg::ImageSequence::FileNames &, FileNames, 
	                 __FileNames_R1__getFileNames, 
	                 0);
	I_SimpleProperty(osg::ImageSequence::Images &, Images, 
	                 __Images_R1__getImages, 
	                 0);
	I_SimpleProperty(double, PreLoadTime, 
	                 __double__getPreLoadTime, 
	                 __void__setPreLoadTime__double);
	I_SimpleProperty(bool, PruneOldImages, 
	                 __bool__getPruneOldImages, 
	                 __void__setPruneOldImages__bool);
	I_SimpleProperty(double, ReferenceTime, 
	                 __double__getReferenceTime, 
	                 __void__setReferenceTime__double);
	I_SimpleProperty(double, TimeMultiplier, 
	                 __double__getTimeMultiplier, 
	                 __void__setTimeMultiplier__double);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::ImageSequence::UpdateCallback)
	I_DeclaringFile("osg/ImageSequence");
	I_BaseType(osg::StateAttribute::Callback);
	I_Constructor0(____UpdateCallback,
	               "",
	               "");
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osg::Image >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osg::Image *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osg::Image > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osg::Image *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osg::Image *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osg::Image > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osg::Image *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_LIST_REFLECTOR(std::list< osg::ref_ptr< osg::Image > >)

STD_LIST_REFLECTOR(std::list< std::string >)
