
@interface SBSpotlightTransientOverlayInteractiveGestureTransaction : SBMainWorkspaceTransaction <BSTransactionObserver> {
    bool  _gestureFinishedBeforeTransactionBegan;
    SBMainWorkspaceTransaction * _presentTransientOverlayTransaction;
    SBSpotlightSettings * _settings;
    SBSpotlightTransientOverlayViewController * _spotlightTransientOverlayViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBMainWorkspaceTransaction *presentTransientOverlayTransaction;
@property (nonatomic, retain) SBSpotlightSettings *settings;
@property (nonatomic, retain) SBSpotlightTransientOverlayViewController *spotlightTransientOverlayViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_begin;
- (void)_didComplete;
- (void)_dismissSpotlightTransientOverlayViewController;
- (void)_logForInterruptAttemptReason:(id)arg1;
- (void)_presentTransientOverlayViewController:(id)arg1;
- (bool)canInterruptForTransitionRequest:(id)arg1;
- (void)endPresentation:(bool)arg1;
- (id)initWithTransitionRequest:(id)arg1 spotlightTransientOverlayViewController:(id)arg2;
- (void)noteGestureFinishedBeforeTransactionBegan;
- (id)presentTransientOverlayTransaction;
- (void)setPresentTransientOverlayTransaction:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSpotlightTransientOverlayViewController:(id)arg1;
- (id)settings;
- (id)spotlightTransientOverlayViewController;
- (void)transactionDidComplete:(id)arg1;
- (void)updatePresentationWithProgress:(double)arg1 translation:(double)arg2;

@end
