
@interface FeedbackCore.FBKActionSheetController : FBKPartialSheetNavigationController <FeedbackCore.FBKActionController> {
    void actionSheetController;
}

@property (nonatomic) bool dismissesOnAction;

- (void).cxx_destruct;
- (void)addAction:(id)arg1;
- (void)addActionWithTitle:(id)arg1 image:(id)arg2 actionHandler:(id /* block */)arg3;
- (bool)dismissesOnAction;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 actions:(id)arg3;
- (void)setDismissesOnAction:(bool)arg1;
- (void)viewDidLoad;

@end
