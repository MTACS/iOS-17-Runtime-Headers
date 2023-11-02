
@interface HMObjectMergeCollection : NSObject {
    NSArray * _addedObjects;
    NSArray * _commonObjectPairs;
    NSMutableArray * _currentUpdatedObjects;
    NSArray * _removedObjects;
}

@property (nonatomic, retain) NSArray *addedObjects;
@property (nonatomic, readonly) NSArray *commonObjectPairs;
@property (nonatomic, readonly) NSMutableArray *currentUpdatedObjects;
@property (nonatomic, readonly) NSArray *finalObjects;
@property (getter=isModified, nonatomic, readonly) bool modified;
@property (nonatomic, readonly) NSArray *removedObjects;
@property (nonatomic, readonly) NSArray *updatedObjects;

- (void).cxx_destruct;
- (id)addedObjects;
- (id)commonObjectPairs;
- (id)currentUpdatedObjects;
- (id)finalObjects;
- (id)initWithCurrentObjects:(id)arg1 newObjects:(id)arg2;
- (id)initWithCurrentObjects:(id)arg1 newObjects:(id)arg2 commonObjectPredicate:(id /* block */)arg3;
- (bool)isModified;
- (void)mergeCommonObjects;
- (void)mergeCommonObjectsNoMergeCount;
- (id)removedObjects;
- (void)replaceAddedObjectsWithObjects:(id)arg1;
- (void)setAddedObjects:(id)arg1;
- (id)updatedObjects;

@end
