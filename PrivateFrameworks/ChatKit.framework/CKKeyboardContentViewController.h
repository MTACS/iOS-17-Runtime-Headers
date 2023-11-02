
@interface CKKeyboardContentViewController : UIInputViewController {
    NSString * _identifier;
    UIViewController * _viewController;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithViewController:(id)arg1 identifier:(id)arg2;
- (void)loadView;
- (void)setIdentifier:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
