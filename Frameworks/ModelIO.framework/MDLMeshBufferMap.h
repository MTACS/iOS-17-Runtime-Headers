
@interface MDLMeshBufferMap : NSObject {
    void * _bytes;
    id /* block */  _deallocator;
}

@property (nonatomic, readonly) void*bytes;

- (void).cxx_destruct;
- (void*)bytes;
- (void)dealloc;
- (id)initWithBytes:(void*)arg1 deallocator:(id /* block */)arg2;

@end
