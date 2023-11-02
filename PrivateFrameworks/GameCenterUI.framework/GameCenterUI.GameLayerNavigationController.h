
@interface GameCenterUI.GameLayerNavigationController : UINavigationController <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate> {
    void doneHandler;
    void showsDoneButton;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;

- (void).cxx_destruct;
- (bool)_requiresCustomPresentationController;
- (bool)canBecomeFirstResponder;
- (void)didTapDone;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
