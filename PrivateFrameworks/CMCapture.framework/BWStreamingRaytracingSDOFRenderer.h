
@interface BWStreamingRaytracingSDOFRenderer : NSObject <BWFilterRenderer> {
    long long  _YCbCrColorDepth;
    struct { 
        int width; 
        int height; 
    }  _alignment;
    BWFigVideoCaptureDevice * _captureDevice;
    <MTLCommandQueue> * _commandQueue;
    bool  _isFullRange;
    bool  _isTenBit;
    FigMetalContext * _metalContext;
    float  _networkBias;
    NSString * _portTypeProvidingTuningParameters;
    PTRenderPipeline * _ptRenderPipeline;
    PTRenderRequest * _ptRenderRequest;
    <PTRenderState> * _ptRenderState;
    bool  _renderStateIsConfigured;
    MTLTextureDescriptor * _texDesc;
    MTLTextureDescriptor * _texDescDisparity;
    MTLTextureDescriptor * _texDescUV;
}

@property (nonatomic, readonly) bool adjustsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAnimation;
@property (nonatomic, readonly) short type;

+ (void)initialize;

- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)adjustsMetadata;
- (void)dealloc;
- (id)displayName;
- (id)initWithCaptureDevice:(id)arg1 commandQueue:(id)arg2;
- (int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (void)renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 originalPixelBuffer:(struct __CVBuffer { }*)arg4 processedPixelBuffer:(struct __CVBuffer { }*)arg5 completionHandler:(id /* block */)arg6;
- (bool)supportsAnimation;
- (short)type;

@end
