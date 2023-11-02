
@interface NewsUI2.BridgedFollowingPlusViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    void viewController;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;

- (void).cxx_destruct;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)presentationControllerWillDismiss:(id)arg1;

@end
