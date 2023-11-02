
@protocol UIViewAnimationComposing <NSObject>

@required

- (<UIIntervalAnimating> *)composeAnimation:(id <UIIntervalAnimating>)arg1 withNewAnimationDescription:(id)arg2 interactive:(bool)arg3 currentValue:(id <UIVectorOperatable>)arg4 targetValue:(id <UIVectorOperatable>)arg5;
- (bool)isActive;

@end
