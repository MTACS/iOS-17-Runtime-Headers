
@interface SiriSharedUIAnimationUtilities : NSObject

+ (id)_centeringAnimationForInitialScale:(double)arg1 width:(double)arg2;
+ (double)_springDurationForInsertAnimation;
+ (double)_springDurationForMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;
+ (double)animationBeginTimeForStyle:(long long)arg1;
+ (double)animationBeginTimeForStyle:(long long)arg1 presentationType:(long long)arg2;
+ (double)animationCoefficient;
+ (double)animationDurationForStyle:(long long)arg1;
+ (double)animationDurationForStyle:(long long)arg1 presentationType:(long long)arg2;
+ (id)animationForStyle:(long long)arg1 expectedWidthForStyle:(id)arg2;
+ (id)animationForStyle:(long long)arg1 expectedWidthForStyle:(id)arg2 presentationType:(long long)arg3;
+ (double)defaultAnimationDuration;
+ (id)defaultTimingFunction;
+ (void)perfomAnimationBlockWithAnimationBlock:(id /* block */)arg1 context:(id)arg2 completion:(id /* block */)arg3;

@end
