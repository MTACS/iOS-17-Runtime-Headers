
@interface PDURootViewController : UIViewController <PDUWelcomeViewControllerDelegate> {
    <PDCApplicationIdentity> * _applicationIdentity;
    <PDCConsentStore> * _consentStore;
    <PDURootViewControllerDelegate> * _delegate;
    UIViewController * _welcomeViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PDURootViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)deviceIsPad;
+ (unsigned long long)preferredOrientation;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_presentWelcomeViewIfNeeded;
- (void)_showWelcomeViewIfNeeded;
- (id)delegate;
- (id)initWithApplicationIdentity:(id)arg1 consentStore:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)welcomeViewController:(id)arg1 didDismissWithUserResponse:(unsigned long long)arg2;

@end
