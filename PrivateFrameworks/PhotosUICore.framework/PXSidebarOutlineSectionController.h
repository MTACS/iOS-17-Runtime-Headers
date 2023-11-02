
@interface PXSidebarOutlineSectionController : NSObject <PXSidebarDataSourceControllerDelegate> {
    bool  _animateDataSourceUpdates;
    PXSidebarDataController * _dataController;
    UICollectionViewDiffableDataSource * _dataSource;
    <PXSidebarOutlineSectionControllerDelegate> * _delegate;
}

@property (nonatomic) bool animateDataSourceUpdates;
@property (nonatomic, readonly) PXSidebarDataController *dataController;
@property (nonatomic, readonly) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXSidebarOutlineSectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_appendChildrenForParentIfNeeded:(id)arg1 inSnapshot:(id)arg2;
- (id)_applyChangeDetails:(id)arg1 forItem:(id)arg2 toSnapshot:(id)arg3 outChangedItemsBeforeChange:(id*)arg4 outChangedItemsAfterChange:(id*)arg5;
- (void)_configureInitialSnapshotAnimated:(bool)arg1 expandSubItems:(bool)arg2 applyOnQueue:(id)arg3;
- (void)_expandItem:(id)arg1 inSnapshot:(id)arg2;
- (void)_expandItemIfNeeded:(id)arg1 inSnapshot:(id)arg2;
- (id)_newSnapshotFromDataControllerWithRestoredExpansionState:(bool)arg1;
- (void)_transferStateOfItem:(id)arg1 oldSnapshot:(id)arg2 toNewItem:(id)arg3 newSnapshot:(id)arg4;
- (bool)animateDataSourceUpdates;
- (void)appendChildrenForParentIfNeeded:(id)arg1;
- (id)currentSectionSnapshot;
- (id)dataController;
- (id)dataSource;
- (id)delegate;
- (void)expandItemsForIdentifiersIfNeeded:(id)arg1 animated:(bool)arg2;
- (id)expandItemsToRevealFirstEditableItemIfNeededAnimated:(bool)arg1;
- (id)initWithSidebarDataController:(id)arg1 dataSource:(id)arg2;
- (void)loadRootItems;
- (void)reloadFromDataControllerApplyAnimated:(bool)arg1 onQueue:(id)arg2;
- (void)sectionControllerWillCollapseItem:(id)arg1;
- (void)sectionControllerWillExpandItem:(id)arg1;
- (void)setAnimateDataSourceUpdates:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)sidebarDataSourceController:(id)arg1 didChangeChildrenOfItem:(id)arg2 changeDetails:(id)arg3;

@end
