
@interface _TVStackTemplateController : _TVStackCommonTemplateController <TVShowcasing, TVTabBarAdjusting, _TVStackViewDelegateFlowLayout> {
    UIView * _backdropTintView;
    UIViewController * _backdropTintViewController;
    double  _contentHeight;
    IKChangeSet * _filteredChangeSet;
    struct { 
        bool _preloadingScheduled; 
    }  _flags;
    NSIndexPath * _lastFocusedIndexPath;
    _TVNeedsMoreContentEvaluator * _needsMoreContentEvaluator;
    NSMutableArray * _preloadQueue;
    bool  _requiresShowcasing;
    bool  _shouldInvalidateMetrics;
    double  _showcaseFactor;
    double  _showcaseInset;
    NSArray * _stackRows;
    NSArray * _stackSections;
    NSArray * _unfilteredViewControllers;
    NSArray * _viewControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double showcaseFactor;
@property (nonatomic) double showcaseInset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg2;
- (void)_buildStackSections;
- (void)_configureBackgroundTintView;
- (bool)_didExtendContentForPeekMetrics:(struct { double x1; double x2; double x3; struct _NSRange { unsigned long long x_4_1_1; unsigned long long x_4_1_2; } x4; }*)arg1 above:(bool)arg2 initial:(bool)arg3;
- (void)_invalidateSectionMetricsIfNeeded;
- (struct CGSize { double x1; double x2; })_maxContentSize;
- (double)_maxViewWidth;
- (double)_offsetToScrollStop:(id)arg1;
- (void)_preloadNext;
- (void)_scheduleNextPreloadConditional;
- (void)_scrollToTopAnimated:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_scrollableBoundsInset;
- (void)_updateBackgroundTintView;
- (void)_updateBackgroundTintViewEffects;
- (void)_updateFirstItemRowIndexes;
- (id)_updateWithCollectionListElement:(id)arg1 commits:(id /* block */*)arg2 autoHighlightIndexPath:(id*)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 showcaseFactorDidChangeForLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)didUpdateSectionInfo;
- (void)didUpdateSupplementarySectionInfo;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)init;
- (void)mediaInfoDidChange;
- (long long)numberOfCollections;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)scrollStopForEnteringSectionAtIndex:(long long)arg1 fromEdge:(long long)arg2;
- (id)scrollStopForShowcaseTransition;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setShowcaseInset:(double)arg1;
- (bool)shouldAdjustForTabBarSafeAreaInsets;
- (double)showcaseFactor;
- (void)showcaseFactorDidChange;
- (double)showcaseInset;
- (id)tabBarObservedScrollView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBackgroundAndBackdrop;
- (void)updateBackgroundAndBackdropMaskFactor;
- (void)updateCollectionViewControllersAndForceReload:(bool)arg1;
- (id)viewControllers;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
