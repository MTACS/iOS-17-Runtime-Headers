
@protocol _UINavigationBarTransitionContextParticipant <NSObject>

@required

- (void)ensureBackButtonTruncationOccursWithContext:(_UINavigationBarTransitionContext *)arg1;
- (void)finalizeStateFromTransition:(_UINavigationBarTransitionContext *)arg1;
- (void)prepareToRecordToState:(_UINavigationBarTransitionContext *)arg1;
- (void)recordFromStateForTransition:(_UINavigationBarTransitionContext *)arg1;
- (void)recordToStateForTransition:(_UINavigationBarTransitionContext *)arg1;

@end
