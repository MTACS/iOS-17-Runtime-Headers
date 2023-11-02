
@interface ARTimeKeyedList : NSObject {
    unsigned long long  _maxSize;
    NSMutableArray * _objects;
    NSMutableArray * _times;
}

- (void).cxx_destruct;
- (void)appendObject:(id)arg1 forTime:(double)arg2;
- (void)clear;
- (id)description;
- (id)init;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (unsigned long long)insertionIndexForTime:(id)arg1;
- (id)nearestObjectForTime:(double)arg1;

@end
