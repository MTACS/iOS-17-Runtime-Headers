
@interface BWStillImageCoreImageBlurMapRenderer : NSObject <BWFilterRenderer> {
    CIFilter * _blurMapFilter;
    BWPixelBufferPool * _blurMapPixelBufferPool;
    struct opaqueCMFormatDescription { } * _blurredGainMapFormatDescription;
    BWPixelBufferPool * _blurredGainMapPixelBufferPool;
    CIContext * _ciContext;
    bool  _hairnetEnabled;
}

@property (nonatomic, readonly) bool adjustsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAnimation;
@property (nonatomic, readonly) short type;

- (int)_allocateBlurMapPixelBufferPoolForBuffersOfWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (int)_allocateBlurredGainMapPixleBufferPoolForBuffersOfWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)adjustsMetadata;
- (void)dealloc;
- (id)displayName;
- (id)initForRenderingWithContext:(id)arg1 hairnetEnabled:(bool)arg2;
- (int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (void)renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 originalPixelBuffer:(struct __CVBuffer { }*)arg4 processedPixelBuffer:(struct __CVBuffer { }*)arg5 completionHandler:(id /* block */)arg6;
- (bool)supportsAnimation;
- (short)type;

@end
