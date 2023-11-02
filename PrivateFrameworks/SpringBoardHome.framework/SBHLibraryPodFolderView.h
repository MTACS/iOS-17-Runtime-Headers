
@interface SBHLibraryPodFolderView : SBFolderView <SBHLibrarySearchControllerContentViewControllerScrollViewProvider, SBIconListLayoutObserver, SBIconListModelObserver, UINavigationBarDelegate> {
    bool  _centersContentIfPossible;
    <BSUIScrollViewDelegate> * _librarySearchControllerScrollViewDelegate;
    double  _maximumNavBarHeight;
    double  _minimumNavBarHeight;
    SBHFeatherBlurNavigationBar * _navBar;
    BSUIScrollView * _podScrollView;
    NSArray * _podScrollViewGradientMaskLayers;
    <UIScrollViewDelegate> * _scrollViewDelegate;
    bool  _usingCenteredLayout;
}

@property (nonatomic) bool centersContentIfPossible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <BSUIScrollViewDelegate> *librarySearchControllerScrollViewDelegate;
@property (nonatomic, readonly) UINavigationBar *navigationBar;
@property (nonatomic, readonly) BSUIScrollView *podScrollView;
@property (nonatomic) <UIScrollViewDelegate> *scrollViewDelegate;
@property (readonly) Class superclass;

+ (Class)defaultIconListViewClass;
+ (id)defaultIconLocation;

- (void).cxx_destruct;
- (bool)_animatesRotationForAllVisibleIconListViews;
- (void)_configureIconListView:(id)arg1;
- (void)_configureScrollingInteraction:(id)arg1;
- (void)_enumerateScrollableIconViewsUsingBlock:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForIconListAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_iconListFrameForPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atIndex:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })_iconListViewSize;
- (struct CGSize { double x1; double x2; })_iconSpacingForIconListView;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_layoutMarginsforNavigationBar:(id)arg1;
- (void)_layoutNavBarAndContentInsets;
- (void)_layoutSubviews;
- (void)_orientationDidChange:(long long)arg1;
- (double)_pageWidth;
- (void)_positionNavBarAbuttingListView;
- (struct CGPoint { double x1; double x2; })_restingContentOffsetForScrollOffset:(struct CGPoint { double x1; double x2; })arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })_scrollViewContentSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_scrollingInteractionVisibleInsets;
- (bool)_shouldUseScrollableIconViewInteraction;
- (void)_updateIconListContainment:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_updateScrollViewContentSize;
- (void)_updateVisibleRowRange;
- (void)_zeroFirstListViewOriginIfNeeded;
- (void)accessibilityReduceTransparencyDidChange:(id)arg1;
- (bool)centersContentIfPossible;
- (void)didMoveToWindow;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (void)iconList:(id)arg1 didMoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (void)iconListView:(id)arg1 didAddIconView:(id)arg2;
- (void)iconListViewDidChangeBoundsSize:(id)arg1;
- (long long)iconVisibilityHandling;
- (id)initWithConfiguration:(id)arg1;
- (bool)isLibraryPodCategoryFolderView;
- (id)librarySearchControllerScrollViewDelegate;
- (id)navigationBar;
- (id)podScrollView;
- (long long)positionForBar:(id)arg1;
- (id)scrollViewDelegate;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginScrolling:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setCentersContentIfPossible:(bool)arg1;
- (void)setFolder:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setLibrarySearchControllerScrollViewDelegate:(id)arg1;
- (void)setScrollViewDelegate:(id)arg1;
- (void)updateAccessibilityTintColors;

@end
