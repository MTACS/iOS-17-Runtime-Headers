
@interface VUILibraryStackViewController : UIViewController <UICollectionViewDelegate> {
    NSIndexPath * _focusedIndexPath;
    double  _lastAppearWidth;
    bool  _requiresRelayout;
    UICollectionView * _stackCollectionView;
    VUILibraryStackView * _stackView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UICollectionView *stackCollectionView;
@property (nonatomic, readonly) VUILibraryStackView *stackView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateLayouts;
- (void)_updateNavigationBarPadding;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureWithCollectionView:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)init;
- (long long)preferredStatusBarStyle;
- (void)scrollToTop;
- (id)stackCollectionView;
- (id)stackView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
