
@interface _UIIdentifierDiffer : NSObject <_UIIdentifierDiffer> {
    NSOrderedSet * _afterIdentifiers;
    NSOrderedSet * _beforeIdentifiers;
    NSOrderedCollectionDifference * _collectionDifference;
    NSIndexSet * _deletedIndexes;
    bool  _identifiersAreUnique;
    NSIndexSet * _insertedIndexes;
    NSSet * _movePairs;
}

@property (nonatomic, readonly) NSOrderedSet *afterIdentifiers;
@property (nonatomic, readonly) NSOrderedSet *beforeIdentifiers;
@property (nonatomic, readonly) NSOrderedCollectionDifference *collectionDifference;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSIndexSet *deletedIndexes;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexSet *insertedIndexes;
@property (nonatomic, readonly) NSSet *movePairs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performDiffWithOptions:(long long)arg1;
- (void)_performFoundationDiffWithOptions:(long long)arg1;
- (void)_prepareDiffResultsFromCollectionDifference:(id)arg1;
- (id)afterIdentifiers;
- (id)beforeIdentifiers;
- (id)collectionDifference;
- (id)deletedIndexes;
- (id)description;
- (bool)hasChanges;
- (id)initWithBeforeIdentifiers:(id)arg1 afterIdentifiers:(id)arg2;
- (id)initWithBeforeIdentifiers:(id)arg1 afterIdentifiers:(id)arg2 collectionDifference:(id)arg3;
- (id)insertedIndexes;
- (id)movePairs;
- (void)performDiff;
- (void)performDiffWithOptions:(long long)arg1;

@end
