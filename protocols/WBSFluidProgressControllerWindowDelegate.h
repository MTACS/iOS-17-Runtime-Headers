
@protocol WBSFluidProgressControllerWindowDelegate <NSObject>

@required

- (<WBSFluidProgressStateSource> *)currentFluidProgressStateSource;
- (void)fluidProgressRocketAnimationDidComplete;

@end
