
@interface GameCenterUI.BaseSplitCollectionViewController : GameCenterUI.BaseJetCollectionViewController {
    void $__lazy_storage_$_updateCollectionViewConstraintOnce;
    void currentLayoutType;
    void leftPaneBackgroundView;
    void secondaryCollectionView;
    void secondaryCompositionalLayout;
    void secondaryDiffableDataSource;
    void secondaryImpressionsCalculator;
    void shouldDisplayCustomHeader;
}

@property (nonatomic, readonly) _TtC12GameCenterUI18BaseSplitPresenter *dataPresenter;
@property (nonatomic, readonly) _TtC12GameCenterUI12GradientView *leftPaneBackgroundView;
@property (nonatomic, readonly) double mainSecondaryCollectionViewSpacing;
@property (nonatomic, retain) UICollectionView *secondaryCollectionView;
@property (nonatomic, retain) UICollectionViewCompositionalLayout *secondaryCompositionalLayout;
@property (nonatomic) bool shouldDisplayCustomHeader;
@property (nonatomic, readonly) bool shouldDisplayInSplitView;

+ (double)customHeaderHeight;
+ (double)leadingAndTrailingInsetForCustomHeader;
+ (double)mainCollectionViewWidth;
+ (double)topAndBottomInsetForCustomHeader;
+ (double)topInsetWithCustomHeader;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })collectionViewFrameInsets;
- (id)dataPresenter;
- (id)initWithCoder:(id)arg1;
- (id)leftPaneBackgroundView;
- (void)loadView;
- (void)mainSecondaryCollectionViewLayout;
- (double)mainSecondaryCollectionViewSpacing;
- (id)makeSecondaryLayout;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)secondaryCollectionView;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })secondaryCollectionViewFrameInsets;
- (id)secondaryCompositionalLayout;
- (void)setSecondaryCollectionView:(id)arg1;
- (void)setSecondaryCompositionalLayout:(id)arg1;
- (void)setShouldDisplayCustomHeader:(bool)arg1;
- (bool)shouldDisplayCustomHeader;
- (bool)shouldDisplayInSplitView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
