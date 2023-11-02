
@interface NUMutableBufferAdapter : NUBufferAdapter <NUMutableBuffer, NUMutableBufferProvider> {
    void * _mutableBytes;
}

@property (nonatomic, readonly) const void*bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*mutableBytes;
@property (nonatomic, readonly) long long rowBytes;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;

- (id)initWithMutableBuffer:(id)arg1;
- (id)initWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2 rowBytes:(long long)arg3 bytes:(const void*)arg4;
- (id)initWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2 rowBytes:(long long)arg3 mutableBytes:(void*)arg4;
- (void*)mutableBytes;
- (void*)mutableBytesAtPoint:(struct { long long x1; long long x2; })arg1;
- (id)newRenderDestination;
- (void)provideMutableBuffer:(id /* block */)arg1;

@end
