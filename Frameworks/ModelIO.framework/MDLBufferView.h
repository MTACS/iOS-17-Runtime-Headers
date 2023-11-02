
@interface MDLBufferView : NSObject {
    MDLBufferViewAllocator * _allocator;
    const void * _data;
    unsigned long long  _length;
    unsigned long long  _offset;
    long long  _regionIndex;
    bool  _writable;
}

@property (nonatomic, readonly) const void*data;
@property (nonatomic, readonly) unsigned long long length;

- (void).cxx_destruct;
- (const void*)data;
- (id)initWithBytesNoCopy:(const void*)arg1 length:(unsigned long long)arg2 offset:(unsigned long long)arg3 regionIndex:(long long)arg4 allocator:(id)arg5;
- (unsigned long long)length;

@end
