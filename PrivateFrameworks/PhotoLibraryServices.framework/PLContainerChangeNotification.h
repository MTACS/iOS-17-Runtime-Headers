
@interface PLContainerChangeNotification : PLChangeNotification {
    NSIndexSet * _changedIndexes;
    NSArray * _changedObjects;
    bool  _countDidChange;
    NSIndexSet * _deletedIndexes;
    bool  _didCalculateDiffs;
    NSIndexSet * _insertedIndexes;
    struct __CFArray { } * _movedFromIndexes;
    NSIndexSet * _movedIndexes;
    id  _object;
    bool  _shouldReload;
    PLObjectSnapshot * _snapshot;
}

@property (nonatomic, readonly, retain) NSArray *_changedObjects;
@property (nonatomic, readonly, retain) NSString *_contentRelationshipName;
@property (setter=_setDidCalculateDiffs:, nonatomic) bool _didCalculateDiffs;
@property (nonatomic, readonly, retain) NSString *_diffDescription;
@property (nonatomic, readonly, retain) PLManagedObject *_managedObject;
@property (nonatomic, readonly) NSIndexSet *changedIndexes;
@property (nonatomic, readonly) NSIndexSet *changedIndexesRelativeToSnapshot;
@property (nonatomic, readonly) NSArray *changedObjects;
@property (nonatomic, readonly) bool countDidChange;
@property (nonatomic, readonly) NSIndexSet *deletedIndexes;
@property (nonatomic, readonly) NSArray *deletedObjects;
@property (nonatomic, readonly) bool hasMoves;
@property (nonatomic, readonly) NSIndexSet *insertedIndexes;
@property (nonatomic, readonly) NSArray *insertedObjects;
@property (nonatomic, readonly, retain) struct __CFArray { }*movedFromIndexes;
@property (nonatomic, readonly) NSIndexSet *movedIndexes;
@property (nonatomic, readonly) bool shouldReload;
@property (nonatomic, readonly, retain) PLObjectSnapshot *snapshot;

- (void).cxx_destruct;
- (void)_calculateDiffs;
- (void)_calculateDiffsIfNecessary;
- (id)_changedObjects;
- (id)_contentRelationshipName;
- (bool)_didCalculateDiffs;
- (id)_diffDescription;
- (bool)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)_init;
- (id)_initWithObject:(id)arg1 snapshot:(id)arg2 changedObjects:(id)arg3;
- (id)_managedObject;
- (void)_setDidCalculateDiffs:(bool)arg1;
- (id)changedIndexes;
- (id)changedIndexesRelativeToSnapshot;
- (id)changedObjects;
- (bool)countDidChange;
- (void)dealloc;
- (id)deletedIndexes;
- (id)deletedObjects;
- (void)enumerateMovesWithBlock:(id /* block */)arg1;
- (bool)hasMoves;
- (id)init;
- (id)insertedIndexes;
- (id)insertedObjects;
- (struct __CFArray { }*)movedFromIndexes;
- (id)movedIndexes;
- (id)name;
- (id)object;
- (bool)shouldReload;
- (id)snapshot;
- (unsigned long long)snapshotIndexForContainedObject:(id)arg1;

@end
