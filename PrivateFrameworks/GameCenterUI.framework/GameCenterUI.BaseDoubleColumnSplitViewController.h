
@interface GameCenterUI.BaseDoubleColumnSplitViewController : UISplitViewController <UISplitViewControllerDelegate> {
    void $__lazy_storage_$_backgroundView;
    void cachedSecondarySource;
    void secondaryContainerViewController;
    void secondaryOverrideTraitCollection;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)setViewController:(id)arg1 forColumn:(long long)arg2;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (long long)splitViewController:(id)arg1 displayModeForExpandingToProposedDisplayMode:(long long)arg2;
- (long long)splitViewController:(id)arg1 topColumnForCollapsingToProposedTopColumn:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
