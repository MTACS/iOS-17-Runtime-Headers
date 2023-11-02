
@interface CKSendMenuPopoverViewController : UIViewController {
    UIViewController * _appContainerViewController;
    UIViewController * _sendMenuViewController;
}

@property (nonatomic, retain) UIViewController *appContainerViewController;
@property (nonatomic, readonly) CKSendMenuPresentationPopoverView *popoverView;
@property (nonatomic, retain) UIViewController *sendMenuViewController;

- (void).cxx_destruct;
- (void)anchorViewDidMove;
- (id)animationForDismissingWithFinalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 finalCenter:(struct CGPoint { double x1; double x2; })arg2 finalAlpha:(double)arg3;
- (id)animationForPresentingSendMenuViewControllerWithFinalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 finalCenter:(struct CGPoint { double x1; double x2; })arg2;
- (id)animationForTransitioningToAppContainerViewControllerWithFinalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 finalCenter:(struct CGPoint { double x1; double x2; })arg2;
- (id)appContainerViewController;
- (id)init;
- (void)loadView;
- (id)popoverView;
- (id)sendMenuViewController;
- (void)setAppContainerViewController:(id)arg1;
- (void)setSendMenuViewController:(id)arg1;

@end
