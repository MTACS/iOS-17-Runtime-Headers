
@interface NSOrderedCollectionDifference : NSObject <NSFastEnumeration> {
    NSIndexSet * _insertIndexes;
    NSArray * _insertObjects;
    _NSOrderedCollectionDifferenceMoves * _moves;
    NSIndexSet * _removeIndexes;
    NSArray * _removeObjects;
}

@property (nonatomic, readonly, copy) NSArray *ef_groupedInsertions;
@property (nonatomic, readonly, copy) NSArray *ef_removalsExcludingMoves;
@property (readonly) bool hasChanges;
@property (readonly) NSArray *insertions;
@property (readonly) NSArray *removals;
@property (nonatomic, readonly) NSIndexSet *safari_insertionIndexes;
@property (nonatomic, readonly) NSIndexSet *safari_removalIndexes;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (id)_changeWithType:(long long)arg1 index:(unsigned long long)arg2 object:(id)arg3;
- (void)_enumerateChangesInDiffOrderWithBlock:(id /* block */)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)differenceByTransformingChangesWithBlock:(id /* block */)arg1;
- (bool)hasChanges;
- (unsigned long long)hash;
- (id)init;
- (id)initWithChanges:(id)arg1;
- (id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4;
- (id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4 additionalChanges:(id)arg5;
- (id)insertions;
- (id)inverseDifference;
- (id)invertedDifference;
- (bool)isEqual:(id)arg1;
- (id)removals;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (id)ams_insertedObjects;
- (id)ams_removedObjects;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (id)ef_groupedInsertions;
- (id)ef_groupedInsertionsByObjectForTargetArray:(id)arg1 inferMoves:(bool)arg2;
- (id)ef_groupedInsertionsByObjectForTargetOrderedSet:(id)arg1 inferMoves:(bool)arg2;
- (id)ef_removalsExcludingMoves;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (id)safari_insertionIndexes;
- (id)safari_removalIndexes;

@end
