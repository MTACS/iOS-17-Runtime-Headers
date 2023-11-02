
@interface IPCircularBufferArray : NSObject <NSFastEnumeration> {
    NSMutableArray * _backingStore;
    unsigned long long  _capacity;
    unsigned long long  _currentIndex;
    id  _lastObject;
    unsigned long long  _mutationDetector;
}

@property (nonatomic, readonly) NSArray *allObjects;
@property (readonly) unsigned long long count;
@property (nonatomic, readonly) id lastObject;

- (void).cxx_destruct;
- (void)addObject:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)allObjects;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)lastObject;
- (void)removeAllObjects;

@end