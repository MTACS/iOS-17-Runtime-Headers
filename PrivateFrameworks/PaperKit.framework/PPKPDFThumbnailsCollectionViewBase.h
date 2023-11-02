
@interface PPKPDFThumbnailsCollectionViewBase : UIView <UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, UIContextMenuInteractionDelegate> {
    UIView * _backgroundOnePixelView;
    UICollectionView * _collectionView;
    UICollectionViewDiffableDataSource * _dataSource;
    PKDisplayLinkObserver * _displayLinkObserver;
    bool  _isApplyingCollectionViewTransaction;
    PPKPDFThumbnailViewBase * _thumbnailView;
}

@property (nonatomic) bool allowsPageReordering;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) PPKPDFThumbnailViewBase *thumbnailView;

- (void).cxx_destruct;
- (bool)_canEditDocument;
- (long long)_collectionView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)_insertFileAtURL:(id)arg1 type:(id)arg2 atIndex:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_selectAndScrollToCurrentPageIfNeeded;
- (void)_updateActionsButtonVisibilityAtIndexPath:(id)arg1;
- (void)_updateScrubber;
- (bool)allowsPageReordering;
- (void)applySnapshotWithAnimation:(bool)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;
- (void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint { double x1; double x2; })arg4;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (void)configureCell:(id)arg1 withPage:(id)arg2 indexPath:(id)arg3;
- (id)contextMenuForBackgroundAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)contextMenuForPage:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)currentPage;
- (void)currentPageChanged:(id)arg1;
- (void)documentChanged:(id)arg1;
- (void)documentMutated:(id)arg1;
- (id)initFromThumbnailView:(id)arg1;
- (id)itemsForDragWithSession:(id)arg1 atIndexPath:(id)arg2;
- (id)makeDatasource;
- (void)movePageWithTransaction:(id)arg1;
- (void)pageChanged:(id)arg1;
- (id)previewForCollectionView:(id)arg1 contextMenuInteraction:(id)arg2;
- (id)previewForCollectionView:(id)arg1 indexPath:(id)arg2;
- (void)reloadPage:(id)arg1;
- (void)reloadPageAt:(long long)arg1;
- (void)setAllowsPageReordering:(bool)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (bool)shouldDisplayActionButtonForPage:(id)arg1;
- (id)supportedUTTypes;
- (id)thumbnailView;
- (void)updateIconsImages;
- (void)updateImageForCell:(id)arg1 indexPath:(id)arg2 page:(id)arg3;

@end
