
@protocol UIVectorOperatable <NSObject, NSCopying>

@required

+ (<UIVectorOperatable> *)epsilonCompatibleWithVector:(id <UIVectorOperatable>)arg1;
+ (<UIVectorOperatable> *)zeroCompatibleWithVector:(id <UIVectorOperatable>)arg1;

- (<UIVectorOperatable> *)addVector:(id <UIVectorOperatable>)arg1;
- (<UIVectorOperatable> *)copy;
- (id)getValue;
- (void)integrateWithVelocity:(id <UIVectorOperatable>)arg1 target:(id <UIVectorOperatable>)arg2 intermediateTarget:(id <UIVectorOperatable>)arg3 intermediateTargetVelocity:(id <UIVectorOperatable>)arg4 parameters:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; long long x_1_1_4; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; long long x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; long long x_3_1_4; } x3; bool x4; bool x5; bool x6; })arg5 state:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })arg6 delta:(double)arg7;
- (<UIVectorOperatable> *)interpolateTo:(id <UIVectorOperatable>)arg1 progress:(double)arg2;
- (bool)isApproximatelyEqualTo:(id <UIVectorOperatable>)arg1 withinEpsilon:(id <UIVectorOperatable>)arg2;
- (bool)isCompatibleWith:(id <UIVectorOperatable>)arg1;
- (bool)isUndefined;
- (<UIVectorOperatable> *)multiplyByScalar:(double)arg1;
- (<UIVectorOperatable> *)multiplyByVector:(id <UIVectorOperatable>)arg1;
- (void)reinitWithVector:(id <UIVectorOperatable>)arg1;

@end
