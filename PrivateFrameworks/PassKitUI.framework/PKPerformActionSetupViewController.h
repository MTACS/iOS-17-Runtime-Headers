
@interface PKPerformActionSetupViewController : UIViewController {
    <PKPerformActionSetupViewControllerDelegate> * _delegate;
    bool  _explicitPresentationStyle;
    NSString * _passIdentifier;
    long long  _presentationStyle;
    PKRemotePerformActionSetupViewController * _remoteVC;
    _UIAsyncInvocation * _remoteVCRequest;
}

@property (nonatomic) <PKPerformActionSetupViewControllerDelegate> *delegate;
@property (nonatomic) long long presentationStyle;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (void)_setRemoteVC:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (id)delegate;
- (void)didCancel;
- (void)didFinish;
- (id)init;
- (id)initWithPassIdentifier:(id)arg1;
- (void)loadView;
- (long long)modalTransitionStyle;
- (long long)presentationStyle;
- (void)setDelegate:(id)arg1;
- (void)setPresentationStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateModalPresentationStyle;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
