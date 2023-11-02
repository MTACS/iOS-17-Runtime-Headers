
@interface MMapStruct : NSObject {
    void * _buffer;
    int  _fd;
    unsigned long long  _size;
}

@property (nonatomic, readonly) void*buffer;
@property (nonatomic, readonly) unsigned long long size;

+ (id)mMapStructWithFilepath:(id)arg1;

- (void*)buffer;
- (void)dealloc;
- (id)initWithBuffer:(void*)arg1 size:(unsigned long long)arg2;
- (unsigned long long)size;

@end
