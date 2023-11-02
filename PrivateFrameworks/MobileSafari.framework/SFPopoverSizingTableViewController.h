
@interface SFPopoverSizingTableViewController : UITableViewController {
    UIBlurEffect * _backgroundBlurEffect;
    bool  _didHaveTranslucentAppearance;
    bool  _didUpdateTranslucentAppearanceAtLeastOnce;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastLayoutContentSize;
    bool  _updatePreferredContentSizeAfterNextLayout;
}

@property (nonatomic, readonly) bool hasTranslucentAppearance;
@property (nonatomic, readonly) long long maximumNumberOfRows;
@property (nonatomic, readonly) long long minimumNumberOfRows;

+ (double)bottomContentPadding;
+ (double)caculateHeightForTableView:(id)arg1 targetGlobalRow:(long long)arg2 outGlobalRow:(long long*)arg3;
+ (void)initialize;
+ (id)tableViewCellForSizeEstimation;

- (void).cxx_destruct;
- (id)_backgroundBlurEffect;
- (bool)_needsTranslucentAppearanceUpdate;
- (void)_updateTranslucentAppearanceIfNeeded;
- (id)backgroundColorUsingTranslucentAppearance:(bool)arg1;
- (void)cancelKeyPressed;
- (void)didMoveToParentViewController:(id)arg1;
- (bool)hasTranslucentAppearance;
- (long long)maximumNumberOfRows;
- (long long)minimumNumberOfRows;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePreferredContentSize;
- (void)updateTranslucentAppearance;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
