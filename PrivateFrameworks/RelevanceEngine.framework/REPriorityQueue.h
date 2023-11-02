
@interface REPriorityQueue : NSObject <NSCopying> {
    struct __CFBinaryHeap { } * _binaryHeap;
    id /* block */  _comparator;
}

@property (nonatomic, readonly, copy) NSArray *allObjects;
@property (nonatomic, readonly) id /* block */ comparator;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) id minimumObject;

- (void).cxx_destruct;
- (id)allObjects;
- (id /* block */)comparator;
- (bool)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)enumerateObjects:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithComparator:(id /* block */)arg1;
- (void)insertObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)minimumObject;
- (void)removeAllObjects;
- (void)removeMinimumObject;

@end
