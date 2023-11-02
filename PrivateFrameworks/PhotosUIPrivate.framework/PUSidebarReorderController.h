
@interface PUSidebarReorderController : NSObject {
    UICollectionViewDiffableDataSource * _dataSource;
    <PXNavigationListItem> * _itemToReorder;
    PXSidebarOutlineSectionController * _sidebarOutlineSectionController;
}

@property (nonatomic, readonly) UICollectionViewDiffableDataSource *dataSource;
@property (nonatomic, retain) <PXNavigationListItem> *itemToReorder;
@property (nonatomic, readonly) PXSidebarOutlineSectionController *sidebarOutlineSectionController;

- (void).cxx_destruct;
- (bool)canReorderItem:(id)arg1;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1 outlineSectionController:(id)arg2;
- (id)itemToReorder;
- (void)performReorderWithTransaction:(id)arg1;
- (void)setItemToReorder:(id)arg1;
- (id)sidebarOutlineSectionController;
- (id)targetIndexPathForMoveFromItemAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2;

@end
