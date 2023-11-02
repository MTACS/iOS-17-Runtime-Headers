
@interface PPEvictingMinPriorityQueue : NSObject {
    unsigned long long  _capacity;
    void * _queue;
}

@property (nonatomic, readonly) double count;

- (void)addObject:(id)arg1;
- (unsigned long long)capacity;
- (double)count;
- (void)dealloc;
- (id)extractSortedMutableArray;
- (id)getMinItemWithoutPopping;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)popItem;

@end
