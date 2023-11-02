
@interface MPChangeDetails : NSObject {
    NSArray * _deletedItemIndexPaths;
    NSIndexSet * _deletedSections;
    NSArray * _insertedItemIndexPaths;
    NSIndexSet * _insertedSections;
    bool  _isFinalized;
    bool  _isFlatCollection;
    NSMutableDictionary * _itemMoves;
    NSMutableDictionary * _itemUpdates;
    NSMutableDictionary * _sectionMoves;
    NSMutableDictionary * _sectionUpdates;
    NSMutableSet * _updatedItemMoveFromIndexPaths;
    NSMutableIndexSet * _updatedSectionMoveFromIndexes;
}

@property (nonatomic, readonly, copy) NSIndexSet *deletedIndexes;
@property (nonatomic, copy) NSArray *deletedItemIndexPaths;
@property (nonatomic, copy) NSIndexSet *deletedSections;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly, copy) NSIndexSet *insertedIndexes;
@property (nonatomic, copy) NSArray *insertedItemIndexPaths;
@property (nonatomic, copy) NSIndexSet *insertedSections;
@property (nonatomic, readonly, copy) NSIndexSet *updatedIndexes;
@property (nonatomic, copy) NSArray *updatedItemIndexPaths;
@property (nonatomic, copy) NSIndexSet *updatedSections;

+ (id)changeDetailsWithPreviousCount:(long long)arg1 finalCount:(long long)arg2 isEqualBlock:(id /* block */)arg3 isUpdatedBlock:(id /* block */)arg4;
+ (id)empty;

- (void).cxx_destruct;
- (void)appendItemMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2 updated:(bool)arg3;
- (void)appendItemUpdateForPreviousIndexPath:(id)arg1 finalIndexPath:(id)arg2;
- (void)appendSectionMoveFromIndex:(long long)arg1 toIndex:(long long)arg2 updated:(bool)arg3;
- (void)appendSectionUpdateForPreviousIndex:(long long)arg1 finalIndex:(long long)arg2;
- (void)applyUIKitWorkarounds;
- (id)debugDescription;
- (id)deletedIndexes;
- (id)deletedItemIndexPaths;
- (id)deletedSections;
- (id)description;
- (void)enumerateItemMovesUsingBlock:(id /* block */)arg1;
- (void)enumerateItemMovesWithBlock:(id /* block */)arg1;
- (void)enumerateItemUpdatesUsingBlock:(id /* block */)arg1;
- (void)enumerateMovesUsingBlock:(id /* block */)arg1;
- (void)enumerateMovesWithBlock:(id /* block */)arg1;
- (void)enumerateSectionMovesUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionMovesWithBlock:(id /* block */)arg1;
- (void)enumerateSectionUpdatesUsingBlock:(id /* block */)arg1;
- (void)enumerateUpdatesUsingBlock:(id /* block */)arg1;
- (bool)hasChanges;
- (id)initWithBlock:(id /* block */)arg1;
- (id)insertedIndexes;
- (id)insertedItemIndexPaths;
- (id)insertedSections;
- (bool)isValidForPreviousCount:(long long)arg1 finalCount:(long long)arg2 reason:(id*)arg3;
- (void)removeItemMoveFromIndexPath:(id)arg1;
- (void)removeItemUpdateForPreviousIndexPath:(id)arg1;
- (void)removeSectionMoveFromIndex:(long long)arg1;
- (void)removeSectionUpdateForPreviousIndex:(long long)arg1;
- (void)setDeletedItemIndexPaths:(id)arg1;
- (void)setDeletedSections:(id)arg1;
- (void)setInsertedItemIndexPaths:(id)arg1;
- (void)setInsertedSections:(id)arg1;
- (void)setUpdatedItemIndexPaths:(id)arg1;
- (void)setUpdatedSections:(id)arg1;
- (id)updatedIndexes;
- (id)updatedItemIndexPaths;
- (id)updatedSections;

@end
