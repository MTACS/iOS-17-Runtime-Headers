
@interface AMDMinHeap : NSObject {
    unsigned long long  _capacity;
    id /* block */  _comparator;
    NSMutableArray * _objects;
    unsigned long long  _position;
}

@property unsigned long long capacity;
@property (copy) id /* block */ comparator;
@property (nonatomic, retain) NSMutableArray *objects;
@property unsigned long long position;

- (void).cxx_destruct;
- (bool)add:(id)arg1;
- (void)bubbleUp;
- (unsigned long long)capacity;
- (id /* block */)comparator;
- (id)initWithCapacity:(unsigned long long)arg1 comparator:(id /* block */)arg2;
- (bool)isEmpty;
- (id)objects;
- (id)poll;
- (unsigned long long)position;
- (void)pushDown;
- (void)setCapacity:(unsigned long long)arg1;
- (void)setComparator:(id /* block */)arg1;
- (void)setObjects:(id)arg1;
- (void)setPosition:(unsigned long long)arg1;
- (unsigned long long)size;
- (void)swap:(unsigned long long)arg1 with:(unsigned long long)arg2;
- (id)topN;

@end
