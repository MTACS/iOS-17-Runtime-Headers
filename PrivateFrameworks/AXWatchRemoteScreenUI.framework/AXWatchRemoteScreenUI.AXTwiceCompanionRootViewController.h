
@interface AXWatchRemoteScreenUI.AXTwiceCompanionRootViewController : UIViewController <AXTwiceCompanionAirplayReceiverDelegate, AXTwiceRemoteScreenMessengerDelegateProtocolObjc, AXWatchRemoteScreenUI.AXTwiceCompanionRendererViewDelegate> {
    void $__lazy_storage_$_airplayReceiver;
    void $__lazy_storage_$_distanceHIDThreshold;
    void $__lazy_storage_$_eventProcessor;
    void $__lazy_storage_$_inactiveTimer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentState;
    void eventSerialQueue;
    void gizmoErrorRetryLimit;
    void hidEventReason;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  inactiveDate;
    void inactiveTimeInterval;
    void intervalHIDThreshold;
    void lastHIDEvent;
    void mainVC;
    void remoteMessenger;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  viewDidAppearDate;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)airplayDidStartStreamingWithMirroringLayer:(id)arg1;
- (void)airplayDidStopStreaming;
- (void)axActionPerformWithAction:(int)arg1 value:(id)arg2 bridgeElement:(id)arg3;
- (void)axElementActivate:(struct CGPoint { double x1; double x2; })arg1;
- (void)crownButtonLongPressed;
- (void)crownButtonPressed;
- (void)crownButtonScrollDown;
- (void)crownButtonScrollUp;
- (void)dealloc;
- (void)dismissButtonTappedWithSender:(id)arg1;
- (void)doubleCrownButtonPressed;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)pullToDismissViewController;
- (void)sideButtonLongPressed;
- (void)sideButtonPressed;
- (void)stingButtonKeycord;
- (void)stingButtonLongPressed;
- (void)stingButtonPressed;
- (void)tripleCrownButtonPressed;
- (void)twiceRemoteScreenReceiveMessage:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
