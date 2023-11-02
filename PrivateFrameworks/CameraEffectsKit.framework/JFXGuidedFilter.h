
@interface JFXGuidedFilter : NSObject {
    struct __CVPixelBufferPool { } * _coeffPool;
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    unsigned long long  _guideImageHeight;
    unsigned long long  _guideImageWidth;
    MPSImageGuidedFilter * _osGuidedFilter;
    struct __CVMetalTextureCache { } * _textureCache;
    bool  _useCPU;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDiameter:(int)arg1;
- (void)scaleImage:(struct __CVBuffer { }*)arg1 guidanceImage:(struct __CVBuffer { }*)arg2 destinationImage:(struct __CVBuffer { }*)arg3;

@end
