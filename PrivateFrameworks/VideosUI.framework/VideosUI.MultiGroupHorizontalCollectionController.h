
@interface VideosUI.MultiGroupHorizontalCollectionController : VUIBaseViewController <VUIShelfViewLayoutDelegate, VideosUI.VUICollectionViewContextMenuDelegate, VideosUI.VUICollectionViewDelegate, VideosUI.VUIScrollViewDelegate> {
    void $__lazy_storage_$_cachedHeaderViews;
    void $__lazy_storage_$_groupCollectionContainerView;
    void $__lazy_storage_$_shelfViewLayout;
    void cachedCellMetrics;
    void contextMenuInteractor;
    void dataSource;
    void datasourceLoaded;
    void internalCollectionViewModel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastFocusedIndexPath;
    void lastViewWidth;
    void supplementaryKindToReuseIdentifierMap;
    void viewImpressioner;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 selectionMarginsForItemAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)vuiCollectionView:(id)arg1 contextMenuConfigurationForItemAt:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)vuiCollectionView:(id)arg1 didEndDisplaying:(id)arg2 for:(id)arg3;
- (void)vuiCollectionView:(id)arg1 didSelectItemAt:(id)arg2;
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
- (void)vuiScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)vui_loadView;
- (void)vui_viewDidLoad;

@end
