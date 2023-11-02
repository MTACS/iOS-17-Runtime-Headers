
@interface NUPixelBuffer : NSObject <NSCopying, NSMutableCopying, NUBuffer> {
    <NUBuffer> * _buffer;
    NUBufferStorage * _storage;
}

@property (nonatomic, readonly) const void*bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long rowBytes;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (const void*)bytes;
- (const void*)bytesAtPoint:(struct { long long x1; long long x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)format;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)privateInit;
- (long long)rowBytes;
- (struct { long long x1; long long x2; })size;

@end
