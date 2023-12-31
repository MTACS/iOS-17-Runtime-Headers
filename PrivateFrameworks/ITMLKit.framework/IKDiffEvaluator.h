
@interface IKDiffEvaluator : NSObject {
    NSIndexSet * _addedIndexes;
    NSDictionary * _movedIndexesByNewIndex;
    NSArray * _objects;
    NSDictionary * _oldIndexesByNewIndex;
    NSArray * _oldObjects;
    NSIndexSet * _removedIndexes;
}

@property (nonatomic, readonly, copy) NSIndexSet *addedIndexes;
@property (nonatomic, readonly, copy) NSDictionary *movedIndexesByNewIndex;
@property (nonatomic, readonly, copy) NSArray *objects;
@property (nonatomic, readonly, copy) NSDictionary *oldIndexesByNewIndex;
@property (nonatomic, readonly, copy) NSArray *oldObjects;
@property (nonatomic, readonly, copy) NSIndexSet *removedIndexes;

- (void).cxx_destruct;
- (void)_evaluateWithHashing:(id /* block */)arg1;
- (id)addedIndexes;
- (void)enumerateCommonObjectsUsingBlock:(id /* block */)arg1;
- (id)initWithObjects:(id)arg1 oldObjects:(id)arg2 hashing:(id /* block */)arg3;
- (id)movedIndexesByNewIndex;
- (id)objects;
- (id)oldIndexesByNewIndex;
- (id)oldObjects;
- (id)removedIndexes;

@end
