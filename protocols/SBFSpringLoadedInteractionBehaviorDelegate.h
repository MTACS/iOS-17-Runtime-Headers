
@protocol SBFSpringLoadedInteractionBehaviorDelegate <NSObject>

@required

- (UIView *)targetItemForSpringLoadingInteractionInView:(UIView *)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 forDropSession:(id <UIDropSession>)arg3;

@optional

- (void)springLoadedInteractionDidFinish;

@end
