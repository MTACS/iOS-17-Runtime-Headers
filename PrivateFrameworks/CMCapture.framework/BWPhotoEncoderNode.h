
@interface BWPhotoEncoderNode : BWNode <BWInferenceFormatProvider> {
    NSDictionary * _adaptiveQualityValueForHEIF;
    bool  _allowHEIFPrewarming;
    bool  _alwaysAwaitInference;
    NSDictionary * _attachedMediaConfigurationByAttachedMediaKey;
    bool  _cameraSupportsFlash;
    FigCapturePixelConverter * _clientThumbnailPixelConverter;
    BWCMPhotoCompressionSession * _cmPhotoCompressionSession;
    unsigned long long  _dngBitDepth;
    BWDNGCompressionSession * _dngCompressionSession;
    bool  _heifForceEmbedThumb;
    float  _heifQualityOverride;
    int  _heifTileHeight;
    int  _heifTileWidth;
    bool  _heifUseTiling;
    BWInferenceEngine * _inferenceEngine;
    NSObject<OS_dispatch_group> * _inferenceGroup;
    struct opaqueCMFormatDescription { } * _inferenceInputFormatDescription;
    BWInferenceVideoFormat * _inferenceInputVideoFormat;
    NSDictionary * _inputColorInfo;
    FigCapturePixelConverter * _jpegPixelConverter;
    unsigned long long  _maxThreads;
    BWStillImageNodeConfiguration * _nodeConfiguration;
    _Atomic bool  _opportunisticInferenceCompleted;
    int  _portraitRenderQuality;
    bool  _preparedInferenceEngine;
    NSObject<OS_dispatch_group> * _previewGenerationGroup;
    NSObject<OS_dispatch_queue> * _previewGenerationQueue;
    FigCapturePixelConverter * _previewPixelConverter;
    NSObject<OS_dispatch_queue> * _prewarmQueue;
    long long  _prewarmedSettingsID;
    bool  _prewarmingOngoing;
    BWInferenceScheduler * _scheduler;
    int  _semanticDevelopmentVersion;
    FigCapturePixelConverter * _thumbnailPixelConverter;
    bool  _usesHighEncodingPriority;
    bool  _zeroShutterLagEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (id)attachedMediaConfigurationByAttachedMediaKey;
- (bool)cameraSupportsFlash;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2;
- (id)initWithNodeConfiguration:(id)arg1 semanticDevelopmentVersion:(int)arg2 inferenceScheduler:(id)arg3 alwaysAwaitInference:(bool)arg4 portraitRenderQuality:(int)arg5 deferredPhotoProcessorEnabled:(bool)arg6;
- (id)inputColorInfo;
- (id)inputFormatForAttachedMediaKey:(id)arg1;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1;
- (id)inputVideoFormatForAttachedMediaKey:(id)arg1;
- (bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (id)outputFormatForAttachedMediaKey:(id)arg1;
- (id)outputVideoFormatForAttachedMediaKey:(id)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAttachedMediaConfigurationByAttachedMediaKey:(id)arg1;
- (void)setCameraSupportsFlash:(bool)arg1;
- (void)setInputColorInfo:(id)arg1;
- (void)setUsesHighEncodingPriority:(bool)arg1;
- (void)setZeroShutterLagEnabled:(bool)arg1;
- (bool)usesHighEncodingPriority;
- (bool)zeroShutterLagEnabled;

@end
