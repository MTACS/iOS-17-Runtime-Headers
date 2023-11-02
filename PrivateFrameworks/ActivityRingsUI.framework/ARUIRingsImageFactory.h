
@interface ARUIRingsImageFactory : NSObject

+ (id)_renderRingsUsingRingsView:(id)arg1 withDiameter:(double)arg2 thickness:(double)arg3 interspacing:(double)arg4;
+ (id)renderRingGroup:(id)arg1 withRenderer:(id)arg2;
+ (id)renderRingGroupController:(id)arg1 withBackgroundColor:(id)arg2 andRenderer:(id)arg3;
+ (id)renderRingGroupController:(id)arg1 withRenderer:(id)arg2;
+ (id)renderRingsUsingRingsView:(id)arg1 forMovePercentage:(double)arg2 exercisePercentage:(double)arg3 standPercentage:(double)arg4 withDiameter:(double)arg5 thickness:(double)arg6 interspacing:(double)arg7;
+ (void)renderRingsUsingRingsView:(id)arg1 forMovePercentage:(double)arg2 exercisePercentage:(double)arg3 standPercentage:(double)arg4 withDiameter:(double)arg5 thickness:(double)arg6 interspacing:(double)arg7 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8;
+ (id)renderRingsWithBackgroundColor:(id)arg1 usingRingsView:(id)arg2 forMovePercentage:(double)arg3 exercisePercentage:(double)arg4 standPercentage:(double)arg5 withDiameter:(double)arg6 thickness:(double)arg7 interspacing:(double)arg8;
+ (id)renderSingleRingUsingRingsView:(id)arg1 forPercentage:(double)arg2 withDiameter:(double)arg3 thickness:(double)arg4 topColor:(id)arg5 bottomColor:(id)arg6;

@end
