
@interface UIFloatSpringIntegrator : NSObject

+ (double)displacementFromValue:(double)arg1 toTarget:(double)arg2 function:(long long)arg3;
+ (struct { double x1; double x2; })integrateWithState:(struct { double x1; double x2; })arg1 springParameters:(struct { double x1; double x2; double x3; long long x4; })arg2 deltaTime:(double)arg3;

@end
