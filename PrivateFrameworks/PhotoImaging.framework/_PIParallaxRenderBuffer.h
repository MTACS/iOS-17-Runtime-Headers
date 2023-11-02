
@interface _PIParallaxRenderBuffer : NSObject <NUImageBuffer> {
    <NUImageBuffer> * _pixelBuffer;
    CIRenderInfo * _renderInfo;
    CIRenderTask * _renderTask;
}

@property (nonatomic, readonly) struct __CVBuffer { }*CVPixelBuffer;
@property (nonatomic, readonly) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUImageBuffer> *pixelBuffer;
@property (nonatomic, readonly) CIRenderInfo *renderInfo;
@property (nonatomic, readonly) CIRenderTask *renderTask;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)CVPixelBuffer;
- (id)colorSpace;
- (id)format;
- (id)initWithPixelBuffer:(id)arg1 renderTask:(id)arg2;
- (id)pixelBuffer;
- (id)renderInfo;
- (id)renderTask;
- (struct { long long x1; long long x2; })size;

@end
