
@interface VideosUI.StackViewController : VideosUI.VUIViewController <UICollectionViewDragDelegate, UICollectionViewDropDelegate, VUICollectionViewCellInteractor, VideosUI.StackCollectionViewCompositionalLayoutDelegate, VideosUI.VUICollectionViewContextMenuDelegate, VideosUI.VUICollectionViewDelegate, VideosUI.VUIScrollViewDelegate> {
    void $__lazy_storage_$_collectionView;
    void $__lazy_storage_$_dataSource;
    void $__lazy_storage_$_hostingCellViewControllers;
    void $__lazy_storage_$_prototypeCells;
    void $__lazy_storage_$_supplementaryCells;
    void _showcaseHeight;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showcasePercentage;
    void cellActionInterceptor;
    void cellConfigurator;
    void collectionImpressioner;
    void collectionViewModel;
    void contextMenuInteractor;
    void isDragAndDropEnabled;
    void peekingEnabled;
    void sectionMetrics;
    void sectionViewModels;
    void shouldOverrideScrollToTopBehavior;
    void showcasePercentageContentTopAdjustment;
    void stackType;
    void supplementaryFooterTypeToKindMap;
    void supplementaryHeaderTypeToKindMap;
    void supplementaryKindToReuseIdentifierMap;
    void templateViewModel;
    void verticalPaginationMonitor;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;
- (bool)collectionView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;
- (id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)shouldRubberbandElementWithCategory:(unsigned long long)arg1 in:(id)arg2 at:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)vuiCollectionView:(id)arg1 contextMenuConfigurationForItemAt:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)vuiCollectionView:(id)arg1 didEndDisplaying:(id)arg2 for:(id)arg3;
- (void)vuiCollectionView:(id)arg1 didSelectItemAt:(id)arg2;
- (void)vuiCollectionView:(id)arg1 orthogonalScrollViewDidScroll:(id)arg2 section:(long long)arg3;
- (id)vuiCollectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)vuiCollectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (void)vuiCollectionView:(id)arg1 willDisplay:(id)arg2 for:(id)arg3;
- (void)vuiCollectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 at:(id)arg4;
- (void)vuiCollectionView:(id)arg1 willEndContextMenuInteraction:(id)arg2 animator:(id)arg3;
- (void)vuiCollectionView:(id)arg1 willPerformPreviewActionForMenuWith:(id)arg2 animator:(id)arg3;
- (void)vuiScrollViewDidEndDecelerating:(id)arg1;
- (void)vuiScrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)vuiScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)vuiScrollViewDidScroll:(id)arg1;
- (bool)vuiScrollViewShouldScrollToTop:(id)arg1;
- (void)vuiScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)vui_cellNeedsReloading:(id)arg1;
- (bool)vui_handleActionInCell:(id)arg1 fromSubview:(id)arg2 details:(id)arg3;
- (void)vui_viewDidAppear:(bool)arg1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;

@end
