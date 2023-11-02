
@interface SCNMTLBuffer : NSObject {
    <MTLBuffer> * _buffer;
    id  _dataSource;
    unsigned long long  _offset;
    long long  _usedCount;
}

@property (nonatomic, retain) <MTLBuffer> *buffer;
@property (nonatomic, readonly) void*contents;
@property (nonatomic) id dataSource;
@property (nonatomic) unsigned long long offset;
@property long long usedCount;

- (id)buffer;
- (void*)contents;
- (id)dataSource;
- (void)dealloc;
- (long long)decrementUsedCount;
- (void)incrementUsedCount;
- (unsigned long long)offset;
- (void)setBuffer:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setUsedCount:(long long)arg1;
- (long long)usedCount;

@end
