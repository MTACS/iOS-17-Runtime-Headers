
@interface SBDashBoardEmergencyDialerViewController : SBHomeGestureDismissableCoverSheetViewController <SBLockScreenEmergencyDialerDelegate> {
    TUCallCenter * _callCenter;
    SBLockScreenEmergencyDialerController * _controller;
    bool  _inEmergencyCall;
    bool  _inEmergencyCallMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateEmergencyDialerController;
- (void)_deactivateEmergencyDialerController;
- (void)_updateEmergencyCallMode:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)dealloc;
- (void)emergencyDialer:(id)arg1 willDeactivateWithError:(id)arg2;
- (bool)handleEvent:(id)arg1;
- (long long)presentationPriority;
- (long long)presentationType;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
