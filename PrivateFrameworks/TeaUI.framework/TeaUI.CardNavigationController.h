
@interface TeaUI.CardNavigationController : TeaUI.NavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate> {
    void commandCenter;
}

- (void).cxx_destruct;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 navigationBarClass:(Class)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
