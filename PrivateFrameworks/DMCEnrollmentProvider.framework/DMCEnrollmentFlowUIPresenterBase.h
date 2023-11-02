
@interface DMCEnrollmentFlowUIPresenterBase : NSObject <DevicePINControllerDelegate> {
    DMCActivityViewController * _activityController;
    UIViewController * _baseViewController;
    DMCDismissalAwareNavigationController * _navigationController;
    id /* block */  _passcodeCompletionHandler;
    DMCPINEntryViewController * _pinEntryViewController;
}

@property (nonatomic, retain) DMCActivityViewController *activityController;
@property UIViewController *baseViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DMCDismissalAwareNavigationController *navigationController;
@property (nonatomic, copy) id /* block */ passcodeCompletionHandler;
@property (nonatomic, retain) DMCPINEntryViewController *pinEntryViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityController;
- (id)baseViewController;
- (void)dealloc;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (id)initWithBaseViewController:(id)arg1;
- (id)navigationController;
- (id /* block */)passcodeCompletionHandler;
- (id)pinEntryViewController;
- (void)presentActivityPageWithText:(id)arg1 showButtomView:(bool)arg2;
- (void)pushViewController:(id)arg1;
- (void)pushViewController:(id)arg1 foundationViewController:(id)arg2;
- (void)requestDevicePasscodeWithDescriptionText:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActivityController:(id)arg1;
- (void)setBaseViewController:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setPasscodeCompletionHandler:(id /* block */)arg1;
- (void)setPinEntryViewController:(id)arg1;

@end
