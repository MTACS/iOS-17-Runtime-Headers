
@interface FPItemCollectionIndexPathBasedDiffs : FPItemCollectionDiffs {
    NSMutableIndexSet * _deletedIndexes;
    NSMutableIndexSet * _insertedIndexes;
    NSMutableArray * _movedDestinationIndexPaths;
    NSMutableArray * _movedSourceIndexPaths;
    NSMutableIndexSet * _updatedIndexes;
}

@property (retain) NSMutableIndexSet *deletedIndexes;
@property (retain) NSMutableIndexSet *insertedIndexes;
@property (retain) NSMutableArray *movedDestinationIndexPaths;
@property (retain) NSMutableArray *movedSourceIndexPaths;
@property (retain) NSMutableIndexSet *updatedIndexes;

- (void).cxx_destruct;
- (bool)containsChanges;
- (id)deletedIndexes;
- (id)insertedIndexes;
- (id)movedDestinationIndexPaths;
- (id)movedSourceIndexPaths;
- (void)setDeletedIndexes:(id)arg1;
- (void)setInsertedIndexes:(id)arg1;
- (void)setMovedDestinationIndexPaths:(id)arg1;
- (void)setMovedSourceIndexPaths:(id)arg1;
- (void)setUpdatedIndexes:(id)arg1;
- (id)updatedIndexes;

@end
