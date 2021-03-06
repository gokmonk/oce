// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter_HeaderFile
#define _Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <math_Vector.hxx>
class Adaptor2d_Curve2d;
class Geom2dInt_Geom2dCurveTool;
class math_Matrix;



class Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter  : public math_FunctionSetWithDerivatives
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter(const Adaptor2d_Curve2d& curve1, const Adaptor2d_Curve2d& curve2);
  
  Standard_EXPORT   Standard_Integer NbVariables()  const;
  
  Standard_EXPORT   Standard_Integer NbEquations()  const;
  
  Standard_EXPORT   Standard_Boolean Value (const math_Vector& X, math_Vector& F) ;
  
  Standard_EXPORT   Standard_Boolean Derivatives (const math_Vector& X, math_Matrix& D) ;
  
  Standard_EXPORT   Standard_Boolean Values (const math_Vector& X, math_Vector& F, math_Matrix& D) ;




protected:





private:



  Standard_Address thecurve1;
  Standard_Address thecurve2;


};







#endif // _Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter_HeaderFile
