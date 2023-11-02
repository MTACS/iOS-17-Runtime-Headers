
@interface NUStorageImageBuffer : NSObject <NUImageBuffer> {
    NUPurgeableStoragePool * _pool;
    <NUPurgeableStorage> * _storage;
}

@property (nonatomic, readonly) struct __CVBuffer { }*CVPixelBuffer;
@property (nonatomic, readonly) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NUPurgeableStoragePool *pool;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;
@property (nonatomic, readonly) <NUPurgeableStorage> *storage;
@property (readonly) Class superclass;

+ (id)imageBufferWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2 fromPool:(id)arg3;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)CVPixelBuffer;
- (id)colorSpace;
- (void)dealloc;
- (id)format;
- (id)init;
- (id)initWithStorage:(id)arg1 fromPool:(id)arg2;
- (id)pool;
- (struct { long long x1; long long x2; })size;
- (id)storage;

@end
