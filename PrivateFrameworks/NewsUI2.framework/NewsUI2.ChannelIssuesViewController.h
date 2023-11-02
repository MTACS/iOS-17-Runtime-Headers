
@interface NewsUI2.ChannelIssuesViewController : UIViewController <TSTabBarSplitViewAutoObserver, TUDeselectable, TUKeyCommandTraversable> {
    void blueprintLayoutProvider;
    void blueprintViewController;
    void eventHandler;
    void featureAvailability;
    void isBeingUsedAsPlugin;
    void offlineAlertControllerFactory;
    void pluggableDelegate;
    void styler;
}

- (void).cxx_destruct;
- (void)deselect;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)startTraversingWithDirection:(long long)arg1;
- (void)tabBarSplitViewDidChangeFocusToFocus:(long long)arg1 action:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
