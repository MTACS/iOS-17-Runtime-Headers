
@interface _TtC12GameCenterUIP33_C2AB98B87AF2030AFF6D71CAC9E6FA9326PreferencesModalController : UINavigationController <UINavigationControllerDelegate>

@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;

- (bool)canBecomeFirstResponder;
- (void)didTapDone;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidLoad;

@end
