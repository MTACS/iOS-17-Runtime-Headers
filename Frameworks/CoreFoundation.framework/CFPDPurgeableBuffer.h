
@interface CFPDPurgeableBuffer : CFPDDataBuffer {
    unsigned long long  allocSize;
    struct __CFData { } * handle;
    bool  safe;
    bool  usedMalloc;
}

- (bool)beginAccessing;
- (void*)bytes;
- (void)dealloc;
- (void)endAccessing;
- (id)initWithFileDescriptor:(int)arg1 size:(unsigned long long)arg2;
- (id)initWithPropertyList:(void*)arg1;
- (unsigned long long)length;
- (bool)purgable;

@end
