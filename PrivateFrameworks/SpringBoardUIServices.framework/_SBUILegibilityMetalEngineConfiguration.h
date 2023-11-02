
@interface _SBUILegibilityMetalEngineConfiguration : NSObject {
    long long  _algo;
    MPSUnaryImageKernel * _blurKernel;
    UIImage * _blurTemplateImage;
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    struct CGColorSpace { } * _outputColorSpace;
    unsigned long long  _pixelFormat;
    unsigned long long  _radius;
    double  _scale;
    UIScreen * _screen;
    <SBUILegibilitySettings> * _settings;
    double  _shadowRadius;
    double  _shadowScale;
    MTKTextureLoader * _textureLoader;
}

@property (nonatomic, readonly) MPSUnaryImageKernel *blurKernel;
@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long radius;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) <SBUILegibilitySettings> *settings;
@property (nonatomic, readonly) double shadowRadius;
@property (nonatomic, readonly) double shadowScale;
@property (nonatomic, readonly) MTKTextureLoader *textureLoader;

+ (id)buildDestinationTextureForDevice:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 pixelFormat:(unsigned long long)arg3 outOutputBytes:(void**)arg4 outLength:(unsigned long long*)arg5 outBytesPerRow:(unsigned long long*)arg6;

- (void).cxx_destruct;
- (void)_configureConvolutionKernel;
- (struct CGSize { double x1; double x2; })_metalTextureOutputSizeForInputSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_prepareImageForConvolution:(id)arg1 settings:(id)arg2;
- (id)_sourceTextureForImage:(id)arg1 settings:(id)arg2 outMetalOutputTextureSize:(struct CGSize { double x1; double x2; }*)arg3;
- (id)blurKernel;
- (id)commandQueue;
- (void)dealloc;
- (id)device;
- (id)drawImageForSize:(struct CGSize { double x1; double x2; })arg1 drawBlock:(id /* block */)arg2;
- (id)drawImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 drawBlock:(id /* block */)arg3;
- (id)executeBlurForImage:(id)arg1 settings:(id)arg2;
- (id)initWithScreen:(id)arg1 settings:(id)arg2 algo:(long long)arg3;
- (id)initWithScreen:(id)arg1 settings:(id)arg2 algo:(long long)arg3 pixelFormat:(unsigned long long)arg4;
- (unsigned long long)radius;
- (double)scale;
- (id)screen;
- (id)settings;
- (double)shadowRadius;
- (double)shadowScale;
- (id)textureLoader;

@end
