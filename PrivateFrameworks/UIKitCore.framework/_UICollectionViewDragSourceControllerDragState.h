
@interface _UICollectionViewDragSourceControllerDragState : NSObject {
    NSMutableOrderedSet * _dataSourceIndexPathsOfDraggingItems;
    bool  _dragItemsCreatedForReordering;
    NSPointerArray * _dragItemsWithRebasableIndexPaths;
}

@property (nonatomic, retain) NSMutableOrderedSet *dataSourceIndexPathsOfDraggingItems;
@property (nonatomic, readonly) NSIndexPath *dragFromDataSourceIndexPath;
@property (nonatomic) bool dragItemsCreatedForReordering;
@property (nonatomic, retain) NSPointerArray *dragItemsWithRebasableIndexPaths;
@property (nonatomic, readonly) NSArray *draggingDataSourceIndexPaths;

- (void).cxx_destruct;
- (void)addDraggingDataSourceIndexPath:(id)arg1;
- (id)dataSourceIndexPathForDragItem:(id)arg1 forCollectionView:(id)arg2;
- (id)dataSourceIndexPathsOfDraggingItems;
- (id)description;
- (id)dragFromDataSourceIndexPath;
- (bool)dragItemsCreatedForReordering;
- (id)dragItemsWithRebasableIndexPaths;
- (id)draggingDataSourceIndexPaths;
- (id)init;
- (bool)isDraggingFromDataSourceIndexPath:(id)arg1;
- (void)rebaseDataSourceIndexPathsWithUpdateMap:(id)arg1;
- (void)setDataSourceIndexPath:(id)arg1 forDragItem:(id)arg2 collectionView:(id)arg3;
- (void)setDataSourceIndexPathsOfDraggingItems:(id)arg1;
- (void)setDragItemsCreatedForReordering:(bool)arg1;
- (void)setDragItemsWithRebasableIndexPaths:(id)arg1;

@end
