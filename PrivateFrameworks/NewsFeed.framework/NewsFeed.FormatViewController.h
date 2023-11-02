
@interface NewsFeed.FormatViewController : UIViewController <TUKeyCommandTraversable> {
    void blueprintLayoutProvider;
    void blueprintViewController;
    void commands;
    void eventHandler;
    void isBeingUsedAsPlugin;
    void lastComputedSize;
    void pluggableDelegate;
    void pluginIdentifier;
    void selectionProvider;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)startTraversingWithDirection:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
