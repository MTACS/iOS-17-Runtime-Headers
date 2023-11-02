
@interface CKAdaptivePresentationController : NSObject <CKAlertControllerDelegate, UIPopoverPresentationControllerDelegate> {
    UIPopoverPresentationController * _currentPresentationController;
    id /* block */  _dismissalHandler;
    id /* block */  _presentationHandler;
    CKPresentationControllerWindow * _presentationWindow;
    UIViewController * _presentedViewController;
}

@property (nonatomic, retain) UIPopoverPresentationController *currentPresentationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissalHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ presentationHandler;
@property (nonatomic, retain) CKPresentationControllerWindow *presentationWindow;
@property (nonatomic, retain) UIViewController *presentedViewController;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_presentViewController:(id)arg1 fromViewController:(id)arg2 presentationHandler:(id /* block */)arg3 barButtonItemPresentationHandler:(id /* block */)arg4 dismissalHandler:(id /* block */)arg5 animated:(bool)arg6 completion:(id /* block */)arg7;
- (void)alertControllerViewDidDisappear:(id)arg1;
- (id)currentPresentationController;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id /* block */)dismissalHandler;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 barButtonItemPresentationHandler:(id /* block */)arg3 dismissalHandler:(id /* block */)arg4 animated:(bool)arg5 completion:(id /* block */)arg6;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 presentationHandler:(id /* block */)arg3 dismissalHandler:(id /* block */)arg4 animated:(bool)arg5 completion:(id /* block */)arg6;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id /* block */)presentationHandler;
- (id)presentationWindow;
- (id)presentedViewController;
- (void)setCurrentPresentationController:(id)arg1;
- (void)setDismissalHandler:(id /* block */)arg1;
- (void)setPresentationHandler:(id /* block */)arg1;
- (void)setPresentationWindow:(id)arg1;
- (void)setPresentedViewController:(id)arg1;

@end