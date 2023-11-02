
@interface ARCircularArray : NSObject <NSFastEnumeration> {
    long long  _capacity;
    NSMutableOrderedSet * _objects;
}

@property (nonatomic, readonly, copy) NSArray *allObjects;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) id firstObject;
@property (nonatomic, readonly) id lastObject;

- (void).cxx_destruct;
- (id)addObject:(id)arg1;
- (id)allObjects;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)firstObject;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingComparator:(id /* block */)arg4;
- (id)initWithCapacity:(long long)arg1;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;

@end
