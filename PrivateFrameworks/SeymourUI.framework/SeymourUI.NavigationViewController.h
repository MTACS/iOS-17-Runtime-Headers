
@interface SeymourUI.NavigationViewController : UINavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate> {
    void menuGestureRecognizer;
    void onMenuTapped;
    void onShouldBeginRecognizing;
    void rootViewController;
    void viewControllerAppearanceCompletion;
}

- (void).cxx_destruct;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)menuButtonTapped;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)viewDidLoad;

@end
