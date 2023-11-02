
@interface ATXRingBuffer : NSObject {
    NSMutableArray * _bufferArray;
    unsigned long long  _maxSize;
    unsigned long long  _readStartIndex;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)init;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (id)toArray;

@end
