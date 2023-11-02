
@interface HUDashboardFilterBarController : HUControllableItemCollectionViewController {
    void $__lazy_storage_$_blurGroupingEffectView;
    void $__lazy_storage_$_heightConstraint;
    void _layoutOptions;
    void contextTypeDescriptionForAnalytics;
    void delegate;
    void layoutConstraints;
    void preferredHeight;
}

@property (nonatomic, copy) NSString *contextTypeDescriptionForAnalytics;
@property (nonatomic) <HUDashboardFilterBarDelegate> *delegate;
@property (nonatomic, readonly) double intrinsicHeight;

- (void).cxx_destruct;
- (bool)_hasTapActionForItem:(id)arg1;
- (id)_performTapActionForItem:(id)arg1 tappedArea:(id)arg2;
- (bool)canReorderItemAtIndexPath:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (id)compositionalLayoutConfigurationForTraitCollection:(id)arg1;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)contextTypeDescriptionForAnalytics;
- (id)delegate;
- (void)diffableDataItemManager:(id)arg1 willUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4 isInitialLoad:(bool)arg5;
- (id)init;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (double)intrinsicHeight;
- (id)layoutSectionForSection:(long long)arg1 layoutEnvironment:(id)arg2;
- (bool)presentationCoordinator:(id)arg1 shouldBeginLongPressPresentationWithContext:(id)arg2;
- (id)reorderableItemListForSection:(long long)arg1;
- (void)resetAnimated:(bool)arg1;
- (void)setContextTypeDescriptionForAnalytics:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReorderableItemList:(id)arg1 forSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithContext:(id)arg1 animated:(bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;
- (void)viewWillDisappear:(bool)arg1;

@end
