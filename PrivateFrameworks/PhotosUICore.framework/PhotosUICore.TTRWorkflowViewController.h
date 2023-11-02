
@interface PhotosUICore.TTRWorkflowViewController : UINavigationController <UIGestureRecognizerDelegate> {
    void completion;
    void workflow;
}

- (void).cxx_destruct;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)popViewControllerAnimated:(bool)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)viewDidLoad;

@end
