
@interface HKObjectPickerPresentationController : NSObject <HKHealthPrivacyHostObjectPickerViewControllerDelegate, _HKObjectPickerPresentationController> {
    bool  _didPresent;
    HKHealthPrivacyHostObjectPickerViewController * _hostViewController;
    _UIAsyncInvocation * _requestCancellationInvocation;
    UIViewController * _viewControllerPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didPresent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthPrivacyHostObjectPickerViewController *hostViewController;
@property (nonatomic, retain) _UIAsyncInvocation *requestCancellationInvocation;
@property (readonly) Class superclass;
@property (nonatomic) UIViewController *viewControllerPresenter;

- (void).cxx_destruct;
- (void)_dismissViewControllerAnimated:(bool)arg1;
- (void)_makeRemoteViewControllerVisible:(id)arg1;
- (void)_presentWithPromptSession:(id)arg1 completion:(id /* block */)arg2;
- (void)_requestAndConfigureHostViewController:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)cancelPresentation;
- (void)dealloc;
- (bool)didPresent;
- (void)healthPrivacyHostObjectPickerViewController:(id)arg1 didFinishWithError:(id)arg2;
- (id)hostViewController;
- (void)presentWithSession:(id)arg1 authorizationViewControllerPresenter:(id)arg2 completion:(id /* block */)arg3;
- (id)requestCancellationInvocation;
- (void)setDidPresent:(bool)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setRequestCancellationInvocation:(id)arg1;
- (void)setViewControllerPresenter:(id)arg1;
- (id)viewControllerPresenter;

@end
