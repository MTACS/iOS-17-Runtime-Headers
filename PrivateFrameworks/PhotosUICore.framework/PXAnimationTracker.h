
@interface PXAnimationTracker : NSObject

+ (void)_scrollAnimationOccurred:(long long)arg1 isBegin:(bool)arg2;
+ (void)_transitionAnimationOccurred:(long long)arg1 fromOrigin:(long long)arg2 transitionObject:(id)arg3 isBegin:(bool)arg4;
+ (void)_transitionPreparationOccurred:(long long)arg1 fromOrigin:(long long)arg2 transitionObject:(id)arg3 isBegin:(bool)arg4;
+ (void)scrollAnimationDidBegin:(long long)arg1;
+ (void)scrollAnimationDidEnd:(long long)arg1;
+ (void)transitionAnimationDidBegin:(long long)arg1 fromOrigin:(long long)arg2 transitionObject:(id)arg3;
+ (void)transitionAnimationDidEnd:(long long)arg1 fromOrigin:(long long)arg2 transitionObject:(id)arg3;
+ (void)transitionPreparationDidBegin:(long long)arg1 fromOrigin:(long long)arg2 transitionObject:(id)arg3;

@end
