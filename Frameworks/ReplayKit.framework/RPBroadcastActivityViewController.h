
@interface RPBroadcastActivityViewController : UIViewController {
    <RPBroadcastActivityViewControllerDelegate> * _delegate;
    id /* block */  _didFinishHandler;
    RPBroadcastActivityHostViewController * _hostViewController;
    UIPopoverPresentationController * _popoverPresentationControllerProxy;
}

@property (nonatomic) <RPBroadcastActivityViewControllerDelegate> *delegate;
@property (nonatomic, copy) id /* block */ didFinishHandler;
@property (nonatomic, retain) RPBroadcastActivityHostViewController *hostViewController;
@property (nonatomic, retain) UIPopoverPresentationController *popoverPresentationControllerProxy;

+ (void)loadBroadcastActivityViewControllerWithHandler:(id /* block */)arg1;
+ (void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)arg1 handler:(id /* block */)arg2;
+ (void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)arg1 handler:(id /* block */)arg2 broadcastActivitiesNotInstalledAlertTitle:(id)arg3 broadcastActivitiesNotInstalledAlertMessage:(id)arg4 atPoint:(struct CGPoint { double x1; double x2; })arg5 fromWindow:(id)arg6;
+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)delegate;
- (id /* block */)didFinishHandler;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(bool)arg4;
- (id)hostViewController;
- (id)popoverPresentationController;
- (id)popoverPresentationControllerProxy;
- (void)setDelegate:(id)arg1;
- (void)setDidFinishHandler:(id /* block */)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setPopoverPresentationControllerProxy:(id)arg1;

@end
