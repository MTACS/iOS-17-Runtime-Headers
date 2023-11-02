
@interface PXArrayChangeDetails : NSObject <NSCopying, NSMutableCopying> {
    NSIndexSet * _changedIndexes;
    NSDictionary * _indexesWithChangesByProperty;
    NSIndexSet * _insertedIndexes;
    struct __CFArray { } * _movesFromIndexes;
    NSIndexSet * _movesToIndexes;
    NSIndexSet * _removedIndexes;
}

@property (nonatomic, readonly) NSIndexSet *changedIndexes;
@property (nonatomic, readonly) bool hasAnyChanges;
@property (nonatomic, readonly) bool hasAnyInsertionsRemovalsOrMoves;
@property (nonatomic, readonly) bool hasIncrementalChanges;
@property (nonatomic, readonly) bool hasMoves;
@property (nonatomic, retain) NSDictionary *indexesWithChangesByProperty;
@property (nonatomic, readonly) NSIndexSet *insertedIndexes;
@property (nonatomic, readonly) struct __CFArray { }*movesFromIndexes;
@property (nonatomic, readonly) NSIndexSet *movesToIndexes;
@property (nonatomic, readonly) NSIndexSet *removedIndexes;

+ (bool)_mutableCopyInputs;
+ (id)changeDetailsByMergingChangeDetails:(id)arg1;
+ (id)changeDetailsFromArray:(id)arg1 toArray:(id)arg2 changedObjects:(id)arg3;
+ (id)changeDetailsFromArray:(id)arg1 toArray:(id)arg2 changedObjects:(id)arg3 objectComparator:(id /* block */)arg4;
+ (id)changeDetailsFromFetchResultChangeDetails:(id)arg1;
+ (id)changeDetailsFromFetchResultChangeDetails:(id)arg1 originatingChange:(id)arg2;
+ (id)changeDetailsFromSubrange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toSubrange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)changeDetailsWithChangedIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)changeDetailsWithChangedIndexes:(id)arg1;
+ (id)changeDetailsWithInsertedIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)changeDetailsWithMovedFromIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)changeDetailsWithNoChanges;
+ (id)changeDetailsWithNoIncrementalChanges;
+ (id)changeDetailsWithOldKeyItemIndex:(long long)arg1 oldCount:(long long)arg2 newKeyItemIndex:(long long)arg3 newCount:(long long)arg4;
+ (id)changeDetailsWithRemovedIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (unsigned long long)indexAfterApplyingChanges:(id)arg1 toIndex:(unsigned long long)arg2 objectChanged:(out bool*)arg3;
+ (unsigned long long)indexAfterRevertingChanges:(id)arg1 fromIndex:(unsigned long long)arg2 objectChanged:(out bool*)arg3;

- (void).cxx_destruct;
- (void)applyToDictionary:(id)arg1 removalHandler:(id /* block */)arg2 moveHandler:(id /* block */)arg3;
- (void)applyToIndexSet:(id)arg1;
- (bool)canPreserveIncrementalChangesWhenAddingChangeDetails:(id)arg1;
- (id)changeDetailsByAddingChangeDetails:(id)arg1;
- (id)changeDetailsByAddingChangedIndexes:(id)arg1;
- (id)changeDetailsByReplacingChangedItemsWithRemovalsAndInsertions;
- (id)changeDetailsShiftedBy:(long long)arg1;
- (id)changeDetailsShiftedBy:(long long)arg1 scaledBy:(long long)arg2;
- (id)changedIndexes;
- (id)changedPropertiesForIndex:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateMovedIndexesUsingBlock:(id /* block */)arg1;
- (void)enumerateMovedRangesUsingBlock:(id /* block */)arg1;
- (bool)hasAnyChanges;
- (bool)hasAnyInsertionsRemovalsOrMoves;
- (bool)hasIncrementalChanges;
- (bool)hasMoves;
- (unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)arg1;
- (unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)arg1;
- (id)indexSetAfterApplyingChangesToIndexSet:(id)arg1;
- (id)indexSetAfterRevertingChangesToIndexSet:(id)arg1;
- (id)indexesWithChangesByProperty;
- (id)indexesWithChangesToProperty:(id)arg1;
- (id)init;
- (id)initWithIncrementalChangeDetailsRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 movesToIndexes:(id)arg3 movesFromIndexes:(struct __CFArray { }*)arg4 changedIndexes:(id)arg5;
- (id)initWithIncrementalChangeDetailsRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 movesToIndexes:(id)arg3 movesFromIndexes:(struct __CFArray { }*)arg4 changedIndexes:(id)arg5 indexesWithChangesByProperty:(id)arg6;
- (id)insertedIndexes;
- (bool)isEqual:(id)arg1;
- (bool)isOnlyInsertionAtEnd:(bool*)arg1 orRemovalAtEnd:(bool*)arg2 countBeforeChange:(long long)arg3 countAfterChange:(long long)arg4;
- (struct __CFArray { }*)movesFromIndexes;
- (id)movesToIndexes;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)removedIndexes;
- (void)setIndexesWithChangesByProperty:(id)arg1;

@end
