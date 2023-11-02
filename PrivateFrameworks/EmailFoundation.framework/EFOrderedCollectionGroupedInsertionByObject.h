
@interface EFOrderedCollectionGroupedInsertionByObject : NSObject {
    bool  _isMove;
    id  _nextObject;
    NSArray * _objects;
    id  _previousObject;
}

@property (nonatomic, readonly) bool isMove;
@property (nonatomic, readonly) id nextObject;
@property (nonatomic, readonly, copy) NSArray *objects;
@property (nonatomic, readonly) id previousObject;

- (void).cxx_destruct;
- (id)initWithObjects:(id)arg1 previousObject:(id)arg2 nextObject:(id)arg3 isMove:(bool)arg4;
- (bool)isMove;
- (id)nextObject;
- (id)objects;
- (id)previousObject;

@end
