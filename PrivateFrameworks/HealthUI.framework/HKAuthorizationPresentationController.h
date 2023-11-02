
@interface HKAuthorizationPresentationController : NSObject <HKHealthPrivacyHostAuthorizationControllerDelegate, _HKAuthorizationPresentationController> {
    bool  _didPresent;
    HKHealthPrivacyHostAuthorizationViewController * _hostViewController;
    HKNanoHostAuthorizationController * _nanoAuthorizationController;
    _UIAsyncInvocation * _requestCancellationInvocation;
    UIViewController * _viewControllerPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didPresent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthPrivacyHostAuthorizationViewController *hostViewController;
@property (nonatomic, retain) HKNanoHostAuthorizationController *nanoAuthorizationController;
@property (nonatomic, retain) _UIAsyncInvocation *requestCancellationInvocation;
@property (readonly) Class superclass;
@property (nonatomic) UIViewController *viewControllerPresenter;

- (void).cxx_destruct;
- (void)_dismissViewControllerAnimated:(bool)arg1;
- (void)_mainQueue_presentWithPresentationRequests:(id)arg1 authorizationRequestRecord:(id)arg2 completion:(id /* block */)arg3;
- (void)_makeRemoteViewControllerVisible:(id)arg1;
- (void)_requestAndConfigureCarouselAlert:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_requestAndConfigureHostViewController:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)cancelPresentation;
- (void)dealloc;
- (bool)didPresent;
- (void)healthPrivacyHostAuthorizationControllerDidFinishWithError:(id)arg1;
- (id)hostViewController;
- (id)nanoAuthorizationController;
- (void)presentWithPresentationRequests:(id)arg1 authorizationRequestRecord:(id)arg2 authorizationViewControllerPresenter:(id)arg3 completion:(id /* block */)arg4;
- (id)requestCancellationInvocation;
- (void)setDidPresent:(bool)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setNanoAuthorizationController:(id)arg1;
- (void)setRequestCancellationInvocation:(id)arg1;
- (void)setViewControllerPresenter:(id)arg1;
- (id)viewControllerPresenter;

@end
