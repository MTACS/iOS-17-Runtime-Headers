
@interface NUCVPixelBuffer : NSObject <NUImageBuffer> {
    struct __CVBuffer { } * _buffer;
}

@property (nonatomic, readonly) struct __CVBuffer { }*CVPixelBuffer;
@property (nonatomic, readonly) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;

- (id)CIImageProcessorDigestObject;
- (struct __CVBuffer { }*)CVPixelBuffer;
- (id)colorSpace;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)format;
- (id)init;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (struct { long long x1; long long x2; })size;

@end
