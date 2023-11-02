
@interface TeaUI.NavigationController : TUNavigationController {
    void styler;
}

@property (nonatomic) bool hidesBottomBarWhenPushed;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) long long ts_preferredCenterStatusBarStyle;
@property (nonatomic, readonly) long long ts_preferredLeadingStatusBarStyle;
@property (nonatomic, readonly) long long ts_preferredTrailingStatusBarStyle;

- (void).cxx_destruct;
- (bool)accessibilityPerformEscape;
- (bool)hidesBottomBarWhenPushed;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 navigationBarClass:(Class)arg2;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHidesBottomBarWhenPushed:(bool)arg1;
- (long long)ts_preferredCenterStatusBarStyle;
- (long long)ts_preferredLeadingStatusBarStyle;
- (long long)ts_preferredTrailingStatusBarStyle;

@end
