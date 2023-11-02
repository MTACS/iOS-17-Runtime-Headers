
@interface PPEvictingMaxTokenCountPriorityQueue : NSObject {
    unsigned long long  _capacity;
    void * _queue;
}

@property (nonatomic, readonly) double count;

- (void)addObject:(id)arg1;
- (unsigned long long)capacity;
- (double)count;
- (void)dealloc;
- (void)enumerateTokenCountsUsingBlock:(id /* block */)arg1;
- (id)getMaxItemWithoutPopping;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)popItem;

@end
