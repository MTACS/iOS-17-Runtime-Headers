
@interface CSReusableBufferBackingStore : NSObject {
    void * _buffer;
    unsigned long long  _bufferSize;
    id /* block */  _deallocator;
    unsigned long long  _recycleHostTime;
}

@property (nonatomic, readonly) const void*bytes;
@property (nonatomic) unsigned long long recycleHostTime;

- (void).cxx_destruct;
- (const void*)bytes;
- (bool)configureWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithBuffer:(void*)arg1 bufferSize:(unsigned long long)arg2 deallocator:(id /* block */)arg3;
- (unsigned long long)recycleHostTime;
- (void)setRecycleHostTime:(unsigned long long)arg1;

@end
