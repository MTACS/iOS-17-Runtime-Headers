
@interface PKInkProperties : NSObject

+ (id)arrayForBezierControlPoints:(struct { double x1; double x2; double x3; double x4; })arg1;
+ (bool)bezierControlPoints:(struct { double x1; double x2; double x3; double x4; })arg1 isEqual:(struct { double x1; double x2; double x3; double x4; })arg2;
+ (id)blendModeNames;
+ (struct { double x1; double x2; double x3; double x4; })controlPointsForFunctionType:(unsigned long long)arg1;
+ (double)defaultValueForInput:(unsigned long long)arg1;
+ (id)functionNames;
+ (unsigned long long)functionTypeForBezierControlPoints:(struct { double x1; double x2; double x3; double x4; })arg1;
+ (unsigned long long)functionTypeForName:(id)arg1;
+ (id)inkPropertyNames;
+ (id)inkTypeNames;
+ (id)inputMaskNames;
+ (id)inputNames;
+ (struct { double x1; double x2; })rangeForInkProperty:(unsigned long long)arg1;
+ (struct { double x1; double x2; })rangeForInput:(unsigned long long)arg1;

@end
