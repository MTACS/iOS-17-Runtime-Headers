
@interface WFPINEntryViewController : UIViewController <WFPINEntryViewControllerProtocol> {
    NSURL * _URL;
    id /* block */  _completion;
    id /* block */  _dismissCompletionHandler;
    _UIFallbackPresentationViewController * _fallbackPresentationVC;
    NSString * _pageTitle;
    WFRemotePINEntryViewController * _remoteViewController;
    UIViewController * _rootViewControllerToUse;
    NSArray * _windowsWithDisabledRotation;
}

@property (nonatomic, copy) id /* block */ dismissCompletionHandler;

+ (Class)remoteViewControllerClass;
+ (id)serviceViewControllerClassName;

- (void).cxx_destruct;
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;
- (void)dealloc;
- (id)delegate;
- (id /* block */)dismissCompletionHandler;
- (bool)hasUIWebViewSubView:(id)arg1;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 completion:(id /* block */)arg3;
- (void)insertRemoteViewController:(id)arg1;
- (void)presentViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)setDismissCompletionHandler:(id /* block */)arg1;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;
- (void)viewDidDisappear:(bool)arg1;

@end
