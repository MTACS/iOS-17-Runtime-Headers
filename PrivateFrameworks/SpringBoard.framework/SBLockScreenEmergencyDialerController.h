
@interface SBLockScreenEmergencyDialerController : NSObject <SBLockScreenEmergencyCallViewControllerDelegate> {
    bool  _active;
    <SBLockScreenEmergencyDialerDelegate> * _delegate;
    SBLockScreenEmergencyCallViewController * _viewController;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBLockScreenEmergencyDialerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)deactivate;
- (id)delegate;
- (void)dismissEmergencyCallViewController:(id)arg1;
- (void)emergencyCallViewController:(id)arg1 didExitWithError:(id)arg2;
- (bool)isActive;
- (void)setDelegate:(id)arg1;
- (id)viewController;

@end
