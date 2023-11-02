
@interface SBAlertLayoutPresentationVerifier : NSObject <SBReachabilityObserver, SBUIActiveOrientationObserver> {
    SBSharedModalAlertItemPresenter * _alertPresenter;
    UIWindow * _alertWindow;
    NSTimer * _bugCaptureTimer;
    double  _firstLogEventTime;
    double  _lastAutoBugCaptureEventTime;
    bool  _pendingLayoutVerification;
    bool  _pendingScheduledLayoutVerification;
    UIScreen * _screen;
    NSMutableArray * _updateReasons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)dealloc;
- (void)handleReachabilityYOffsetDidChange;
- (id)initWithScreen:(id)arg1;
- (void)scheduleAlertLayoutVerificationForReason:(id)arg1;
- (void)scheduleDelayedAlertLayoutVerificationForReason:(id)arg1;
- (void)setAlertItemWindow:(id)arg1;
- (void)setAlertPresenter:(id)arg1;

@end
