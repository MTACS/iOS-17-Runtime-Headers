
@interface NewsUI2.MyMagazinesViewController : UIViewController <TUDeselectable, TUKeyCommandTraversable> {
    void blueprintLayoutProvider;
    void blueprintViewController;
    void eventHandler;
    void eventManager;
    void isBeingUsedAsPlugin;
    void lastComputedSize;
    void offlineAlertControllerFactory;
    void pluggableDelegate;
    void styler;
}

- (void).cxx_destruct;
- (void)deselect;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)startTraversingWithDirection:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
