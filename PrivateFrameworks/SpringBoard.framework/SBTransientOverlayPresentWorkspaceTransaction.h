
@interface SBTransientOverlayPresentWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {
    SBUIAnimationController * _animation;
    <BSInvalidatable> * _displayLayoutTransitionAssertion;
    <BSInvalidatable> * _eventBufferingAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_begin;
- (bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_logForInterruptAttemptReason:(id)arg1;
- (void)_performStandardPresentationAnimated:(bool)arg1;
- (void)_willBegin;
- (void)_willInterruptWithReason:(id)arg1;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (bool)canInterruptForTransitionRequest:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1;

@end
