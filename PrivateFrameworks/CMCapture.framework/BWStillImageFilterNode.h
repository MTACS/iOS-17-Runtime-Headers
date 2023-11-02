
@interface BWStillImageFilterNode : BWNode <BWRendererResourceProvider> {
    NSDictionary * _attachedMediaFromStandardResolutionImage;
    bool  _backPressureDrivenPipelining;
    BWVideoFormat * _blurMapOutputFormat;
    NSError * _blurMapRenderErrorFromStandardResolutionImage;
    struct { 
        int width; 
        int height; 
    }  _blurMapSourceImageDimensions;
    struct opaqueCMSampleBuffer { } * _blurredGainMapSbuf;
    CIContext * _cachedCIContext;
    BWColorLookupCache * _colorLookupCache;
    BWStillImageCoreImageBlurMapRenderer * _coreImageBlurMapRenderer;
    NSString * _currentPortType;
    NSDictionary * _currentSDOFRenderingParameters;
    float  _currentZoomFactorForSDOFRenderingParameters;
    NSString * _defaultPortType;
    float  _defaultZoomFactor;
    bool  _depthDataDeliveryEnabled;
    struct { 
        int width; 
        int height; 
    }  _depthDataMapDimensions;
    NSObject<OS_dispatch_queue> * _emitQueue;
    struct __CVBuffer { } * _faceAdjustedBlurMapFromStandardResolutionImage;
    bool  _hairnetEnabled;
    struct { 
        int width; 
        int height; 
    }  _maskDimensions;
    BWStillImageMetalBlurMapRenderer * _metalBlurMapRenderer;
    BWMetalColorCubeRenderer * _metalFilterRenderer;
    BWStillImageMetalSDOFRenderer * _metalSDOFRenderer;
    <MTLCommandQueue> * _mtlCommandQueue;
    BWStillImageNodeConfiguration * _nodeConfiguration;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    BWVideoFormat * _outputFormat;
    struct OpaqueVTPixelTransferSession { } * _portraitDownsamplingTransferSession;
    int  _portraitRenderQuality;
    struct CGImageMetadata { } * _portraitStillImageAuxDepthMetadata;
    BWPixelBufferPool * _processingBufferPool;
    BWRenderList * _renderList;
    BWRenderListProcessor * _renderListProcessor;
    <BWRendererResourceProvider> * _rendererProvider;
    NSDictionary * _sensorConfigurationsByPortType;
    float  _targetAspectRatio;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (id)_initWithNodeConfiguration:(id)arg1 sensorConfigurationsByPortType:(id)arg2 depthDataDeliveryEnabled:(bool)arg3 personSegmentationEnabled:(bool)arg4 refinedDepthEnabled:(bool)arg5 portraitRenderQuality:(int)arg6 targetAspectRatio:(float)arg7 defaultPortType:(id)arg8 defaultZoomFactor:(float)arg9 backPressureDrivenPipelining:(bool)arg10 renderResourceProvider:(id)arg11;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2;
- (id)initWithNodeConfiguration:(id)arg1 sensorConfigurationsByPortType:(id)arg2 depthDataDeliveryEnabled:(bool)arg3 personSegmentationEnabled:(bool)arg4 refinedDepthEnabled:(bool)arg5 portraitRenderQuality:(int)arg6 targetAspectRatio:(float)arg7 defaultPortType:(id)arg8 defaultZoomFactor:(float)arg9 backPressureDrivenPipelining:(bool)arg10;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)provideColorLookupCache;
- (id)provideCoreImageFilterRenderer;
- (id)provideMetalFilterRenderer;
- (id)provideStillImageCoreImageBlurMapRenderer;
- (id)provideStillImageMetalBlurMapRenderer;
- (id)provideStillImageMetalSDOFRenderer;
- (id)provideStreamingSDOFFilterRenderer;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
