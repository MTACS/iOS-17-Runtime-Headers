
@interface CVAPhotoMTLRingBuffer : NSObject {
    struct array<id<MTLBuffer>, 5UL> { 
        <MTLBuffer> *__elems_[5]; 
    }  _buffers;
    unsigned long long  _index;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)advancedBuffer;
- (id)currentBuffer;
- (id)getBufferAt:(unsigned long long)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 device:(id)arg4;
- (id)initWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 device:(id)arg3;

@end
