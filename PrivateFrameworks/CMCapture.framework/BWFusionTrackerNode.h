
@interface BWFusionTrackerNode : BWInferenceNode <BWInferencePixelBufferPoolProvider> {
    <MTLEvent> * _backpressureEvent;
    unsigned long long  _backpressureEventNumber;
    NSObject<OS_dispatch_semaphore> * _backpressureSemaphore;
    FTCinematicTracker * _cinematicTracker;
    BWPixelBufferPool * _colorFeaturesPool;
    BWVideoFormat * _colorFeaturesVideoFormat;
    struct __CVBuffer { } * _currentFeaturesMinPixelBuffer;
    struct opaqueCMSampleBuffer { } * _currentFeaturesMinSampleBuffer;
    struct opaqueCMFormatDescription { } * _depthFormatDescription;
    bool  _depthInferenceEnabled;
    BWPixelBufferPool * _disparityFeaturesPool;
    BWVideoFormat * _disparityFeaturesVideoFormat;
    unsigned long long  _framesSinceLastDDR;
    NSSet * _humanPosePreventionSet;
    struct __CVBuffer { } * _initialColorFeaturesPixelBuffer;
    struct __CVBuffer { } * _initialDisparityFeaturesPixelBuffer;
    struct opaqueCMSampleBuffer { } * _previousColorFeaturesSampleBuffer;
    struct opaqueCMSampleBuffer { } * _previousDisparityFeaturesSampleBuffer;
    struct __CVBuffer { } * _previousFeaturesMinPixelBuffer;
    struct opaqueCMSampleBuffer { } * _previousFeaturesMinSampleBuffer;
    BWVideoDepthInferenceConfiguration * _videoDepthConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BWVideoDepthInferenceConfiguration *videoDepthConfiguration;

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithConvEngineSupportWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned int)arg3 depthInferenceEnabled:(bool)arg4;
- (id)inputVideoFormatForAttachedMediaKey:(id)arg1;
- (bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)videoDepthConfiguration;
- (void)willEmitSampleBufferAlways:(struct opaqueCMSampleBuffer { }*)arg1;

@end
