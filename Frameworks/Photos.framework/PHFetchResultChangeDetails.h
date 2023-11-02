
@interface PHFetchResultChangeDetails : NSObject {
    NSIndexSet * _changedIndexes;
    NSArray * _currentObjects;
    PHFetchResult * _fetchResultAfterChanges;
    PHFetchResult * _fetchResultBeforeChanges;
    NSIndexSet * _insertedIndexes;
    struct __CFArray { } * _movedFromIndexes;
    NSIndexSet * _movedIndexes;
    NSArray * _previousObjects;
    NSIndexSet * _removedIndexes;
    bool  _skipIncrementalChanges;
    PLSortedChangedObjects * _sortedChangedIdentifiers;
}

@property (readonly) NSIndexSet *changedIndexes;
@property (readonly) NSArray *changedObjects;
@property (readonly) PHFetchResult *fetchResultAfterChanges;
@property (readonly) PHFetchResult *fetchResultBeforeChanges;
@property (nonatomic, readonly) bool hasAnyChanges;
@property (readonly) bool hasIncrementalChanges;
@property (readonly) bool hasMoves;
@property (readonly) NSIndexSet *insertedIndexes;
@property (readonly) NSArray *insertedObjects;
@property (nonatomic, readonly) struct __CFArray { }*movedFromIndexes;
@property (nonatomic, readonly) NSIndexSet *movedIndexes;
@property (readonly) NSIndexSet *removedIndexes;
@property (readonly) NSArray *removedObjects;
@property (nonatomic, readonly) PLSortedChangedObjects *sortedChangedIdentifiers;

+ (id)_identifiersForPHObjects:(id)arg1;
+ (id)changeDetailsFromFetchResult:(id)arg1 toFetchResult:(id)arg2 changedObjects:(id)arg3;

- (void).cxx_destruct;
- (id)_addAdditionalIndexesToChanges:(id)arg1 withPreviousIdentifiers:(id)arg2 currentIdentifiers:(id)arg3;
- (void)calculateDiffs;
- (void)calculateDiffsAndAccumulateInsertedCount:(unsigned long long*)arg1 updatedCount:(unsigned long long*)arg2 deletedCount:(unsigned long long*)arg3;
- (id)changedIndexes;
- (id)changedObjects;
- (void)dealloc;
- (id)description;
- (void)enumerateMovesWithBlock:(id /* block */)arg1;
- (id)fetchResultAfterChanges;
- (id)fetchResultBeforeChanges;
- (bool)hasAnyChanges;
- (bool)hasDiffs;
- (bool)hasIncrementalChanges;
- (bool)hasMoves;
- (id)initWithFetchResult:(id)arg1 currentFetchResult:(id)arg2 changedIdentifiers:(id)arg3 unknownMergeEvent:(bool)arg4;
- (id)initWithFetchResult:(id)arg1 currentFetchResult:(id)arg2 sortedChangedIdentifiers:(id)arg3 unknownMergeEvent:(bool)arg4;
- (id)initWithManualFetchResultAfterChanges:(id)arg1;
- (id)insertedIndexes;
- (id)insertedObjects;
- (struct __CFArray { }*)movedFromIndexes;
- (id)movedIndexes;
- (id)removedIndexes;
- (id)removedObjects;
- (bool)shouldReload;
- (unsigned long long)snapshotIndexForContainedObject:(id)arg1;
- (id)sortedChangedIdentifiers;

@end
