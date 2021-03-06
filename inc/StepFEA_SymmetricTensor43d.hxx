// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_SymmetricTensor43d_HeaderFile
#define _StepFEA_SymmetricTensor43d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <StepData_SelectType.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepData_SelectMember.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
class Standard_Transient;
class StepData_SelectMember;
class TColStd_HArray1OfReal;


//! Representation of STEP SELECT type SymmetricTensor43d
class StepFEA_SymmetricTensor43d  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT StepFEA_SymmetricTensor43d();
  
  //! return 0
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! Recognizes a items of select member CurveElementFreedomMember
  //! 1 -> AnisotropicSymmetricTensor43d
  //! 2 -> FeaIsotropicSymmetricTensor43d
  //! 3 -> FeaIsoOrthotropicSymmetricTensor43d
  //! 4 -> FeaTransverseIsotropicSymmetricTensor43d
  //! 5 -> FeaColumnNormalisedOrthotropicSymmetricTensor43d
  //! 6 -> FeaColumnNormalisedMonoclinicSymmetricTensor43d
  //! 0 else
  Standard_EXPORT virtual   Standard_Integer CaseMem (const Handle(StepData_SelectMember)& ent)  const;
  
  Standard_EXPORT virtual   Handle(StepData_SelectMember) NewMember()  const;
  
  //! Returns Value as AnisotropicSymmetricTensor43d (or Null if another type)
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) AnisotropicSymmetricTensor43d()  const;
  
  Standard_EXPORT   void SetFeaIsotropicSymmetricTensor43d (const Handle(TColStd_HArray1OfReal)& val) ;
  
  //! Returns Value as FeaIsotropicSymmetricTensor43d (or Null if another type)
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) FeaIsotropicSymmetricTensor43d()  const;
  
  //! Returns Value as FeaIsoOrthotropicSymmetricTensor43d (or Null if another type)
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) FeaIsoOrthotropicSymmetricTensor43d()  const;
  
  //! Returns Value as FeaTransverseIsotropicSymmetricTensor43d (or Null if another type)
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) FeaTransverseIsotropicSymmetricTensor43d()  const;
  
  //! Returns Value as FeaColumnNormalisedOrthotropicSymmetricTensor43d (or Null if another type)
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) FeaColumnNormalisedOrthotropicSymmetricTensor43d()  const;
  
  //! Returns Value as FeaColumnNormalisedMonoclinicSymmetricTensor43d (or Null if another type)
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) FeaColumnNormalisedMonoclinicSymmetricTensor43d()  const;




protected:





private:





};







#endif // _StepFEA_SymmetricTensor43d_HeaderFile
