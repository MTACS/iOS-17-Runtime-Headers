
@interface ENQueryFilter : NSObject {
    unsigned long long  _bufferSize;
    char * _filterBuffer;
    unsigned long long  _hashCount;
    unsigned long long * _hashSalts;
}

@property (nonatomic, readonly) unsigned long long bufferSize;
@property (nonatomic, readonly) unsigned long long hashCount;

- (void)addPossibleRPI:(const void*)arg1;
- (unsigned long long)bufferSize;
- (void)dealloc;
- (unsigned long long)hashCount;
- (id)init;
- (id)initWithBufferSize:(unsigned long long)arg1 hashCount:(unsigned long long)arg2;
- (bool)shouldIgnoreRPI:(const void*)arg1;

@end
