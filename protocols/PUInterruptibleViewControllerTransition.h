
@protocol PUInterruptibleViewControllerTransition <NSObject>

@required

- (bool)isTransitionPaused;
- (void)pauseTransition;
- (void)resumeTransition:(bool)arg1;
- (void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2;

@end
