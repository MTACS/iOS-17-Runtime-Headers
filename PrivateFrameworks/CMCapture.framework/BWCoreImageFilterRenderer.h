
@interface BWCoreImageFilterRenderer : NSObject <BWFilterRenderer> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _hairnetEnabled;
    float  _inputRenderQuality;
    <MTLCommandQueue> * _metalCommandQueue;
    int  _portraitRenderQuality;
    NSObject<OS_dispatch_queue> * _renderingQueue;
    CIContext * _renderingQueueContext;
    bool  _usingDepth;
}

@property (nonatomic, readonly) bool adjustsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CIContext *renderingQueueContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAnimation;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) bool usingDepth;

+ (id)context:(bool)arg1 deferredPhotoProcessorEnabled:(bool)arg2 err:(int*)arg3;
+ (void)initialize;
+ (void)prewarmCoreImageSDOFRenderingFilter;
+ (void)prewarmPortraitFilterVersion:(unsigned int)arg1 semanticStyleFilters:(bool)arg2;

- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)adjustsMetadata;
- (void)dealloc;
- (id)displayName;
- (id)initForRenderingWithDepth:(bool)arg1 context:(id)arg2 portraitRenderQuality:(int)arg3 hairnetEnabled:(bool)arg4 metalCommandQueue:(id)arg5 figThreadPriority:(unsigned int)arg6;
- (int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (void)renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 originalPixelBuffer:(struct __CVBuffer { }*)arg4 processedPixelBuffer:(struct __CVBuffer { }*)arg5 completionHandler:(id /* block */)arg6;
- (id)renderingQueueContext;
- (void)setRenderingQueueContext:(id)arg1;
- (bool)supportsAnimation;
- (short)type;
- (bool)usingDepth;

@end
