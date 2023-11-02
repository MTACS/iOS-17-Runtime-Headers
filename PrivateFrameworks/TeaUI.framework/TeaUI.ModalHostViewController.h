
@interface TeaUI.ModalHostViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UIViewControllerTransitioningDelegate> {
    void closeButton;
    void delegate;
    void effect;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  session;
    void style;
    void transitionEffectView;
    void viewController;
}

@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)closeButtonPressedWithSender:(id)arg1;
- (void)dismissKeyCommand;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)keyCommands;
- (long long)preferredStatusBarStyle;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
