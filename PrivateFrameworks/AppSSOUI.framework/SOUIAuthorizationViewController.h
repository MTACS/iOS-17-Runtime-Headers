
@interface SOUIAuthorizationViewController : UIViewController <UIGestureRecognizerDelegate, _UIRemoteViewControllerContaining> {
    <SOUIAuthorizationViewControllerDelegate> * _delegate;
    id /* block */  _dismissCompletionHandler;
    UIViewController * _extensionViewController;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property <SOUIAuthorizationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancel;
- (id)_containedRemoteViewController;
- (id)delegate;
- (id /* block */)dismissCompletionHandler;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithExtensionViewController:(id)arg1 hints:(id)arg2;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)setDismissCompletionHandler:(id /* block */)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
