
@interface JTAnimation : NSObject

+ (void)performAnimation:(id /* block */)arg1 curve:(long long)arg2 duration:(double)arg3 completion:(id /* block */)arg4 delay:(double)arg5 userInteractionEnabled:(bool)arg6;
+ (void)performAnimation:(id /* block */)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
+ (void)performAnimation:(id /* block */)arg1 timingParameters:(id)arg2 duration:(double)arg3 completion:(id /* block */)arg4 delay:(double)arg5;
+ (void)performAnimation:(id /* block */)arg1 timingParameters:(id)arg2 duration:(double)arg3 completion:(id /* block */)arg4 delay:(double)arg5 userInteractionEnabled:(bool)arg6;
+ (void)performWithAnimator:(id)arg1 animation:(id /* block */)arg2 duration:(double)arg3 completion:(id /* block */)arg4 delay:(double)arg5 userInteractionEnabled:(bool)arg6;

@end
