
@interface PSUIFaceIDEnrollmentCoordinator : NSObject <BKUIPearlEnrollControllerDelegate, PSEnrollmentNavigationControllerDismissalDelegate> {
    PSEnrollmentNavigationController * __presentedViewController;
    unsigned long long  _configuration;
    <PSUIFaceIDEnrollmentCoordinatorDelegate> * _delegate;
    UIViewController * _presentingViewController;
}

@property (nonatomic, retain) PSEnrollmentNavigationController *_presentedViewController;
@property (nonatomic, readonly) unsigned long long configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSUIFaceIDEnrollmentCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UINavigationController *presentedViewController;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_presentedViewController;
- (unsigned long long)configuration;
- (id)delegate;
- (void)enrollmentNavigationControllerDidDismiss:(id)arg1;
- (void)enrollmentNavigationControllerWillDismiss:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 configuration:(unsigned long long)arg2;
- (void)pearlEnrollController:(id)arg1 finishedEnrollWithError:(id)arg2;
- (void)preloadAndCreateEnrollmentControllerWithPasscode:(id)arg1 completion:(id /* block */)arg2;
- (id)presentedViewController;
- (id)presentingViewController;
- (void)setDelegate:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)set_presentedViewController:(id)arg1;
- (void)startWithPasscode:(id)arg1;

@end
