
@interface BWInferenceEngine : NSObject <BWInferenceResourceProvider> {
    BWEspressoInferenceContext * _aneContext;
    bool  _backPressureDrivenPipelining;
    unsigned long long  _connection;
    BWEspressoInferenceContext * _cpuContext;
    BWMetalInferenceContext * _defaultDeviceMetalContext;
    BWInferenceDependencyProvider * _dependencyProvider;
    BWEspressoInferenceAdapter * _espressoAdapter;
    BWFusionTrackerInferenceAdapter * _fusionTrackerAdapter;
    BWEspressoInferenceContext * _gpuContext;
    NSMutableArray * _inferenceRequirements;
    NSMutableDictionary * _lazyInputVideoRequirementsByAttachedMediaKey;
    NSMutableDictionary * _lazyOutputVideoRequirementsByAttachedMediaKey;
    unsigned int  _priority;
    bool  _requiresDeviceOrientationMetadata;
    BWInferenceScheduler * _scheduler;
    BWTiledEspressoInferenceAdapter * _tiledEspressoAdapter;
    BWTiledInferenceAdapter * _tiledInferenceAdapter;
    NSMutableSet * _unresolvedAttachedMediaKeysPreventingProvidedVideoRequirements;
    BWVideoDepthInferenceAdapter * _videoDepthAdapter;
    BWVideoProcessingInferenceAdapter * _videoProcessingAdapter;
    NSMutableArray * _videoRequirementsPossiblyProvidingAttachedMedia;
    NSMutableArray * _videoRequirementsPossiblyReceivingAttachedMedia;
    BWVisionInferenceAdapter * _visionAdapter;
    BWVisionInferenceContext * _visionContext;
}

@property (nonatomic) bool backPressureDrivenPipelining;
@property (getter=isConfiguredForInference, nonatomic, readonly) bool configuredForInference;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *providedVideoRequirementsByAttachedMediaKey;
@property (nonatomic, readonly) bool requiresDeviceOrientationMetadata;
@property (readonly) Class superclass;

+ (unsigned int)allowedBufferCompressionDirectionForExecutionTarget:(int)arg1;
+ (void)initialize;
+ (bool)isNeuralEngineSupported;

- (int)addInferenceOfType:(int)arg1 version:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg2 configuration:(id)arg3;
- (bool)backPressureDrivenPipelining;
- (void)dealloc;
- (id)defaultDeviceMetalContext;
- (int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)arg1;
- (id)espressoContextForExecutionTarget:(int)arg1;
- (id)initWithScheduler:(id)arg1 priority:(unsigned int)arg2;
- (id)initWithScheduler:(id)arg1 priority:(unsigned int)arg2 shareIntermediateBuffer:(bool)arg3;
- (bool)isConfiguredForInference;
- (id)metalCommandBuffer;
- (id)newMetalEvent;
- (int)performInferencesOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (int)performInferencesOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 skippingInferencesWithTypes:(id)arg3;
- (int)prepareForInferenceWithFormatProvider:(id)arg1;
- (int)prepareForInferenceWithFormatProvider:(id)arg1 pixelBufferPoolProvider:(id)arg2;
- (int)prepareForInputInferenceVideoFormat:(id)arg1 attachedMediaKey:(id)arg2;
- (int)prepareForInputVideoFormat:(id)arg1 attachedMediaKey:(id)arg2;
- (int)prewarmInferencesUsingLimitedMemory:(bool)arg1;
- (id)providedVideoRequirementsByAttachedMediaKey;
- (bool)requiresDeviceOrientationMetadata;
- (void)setBackPressureDrivenPipelining:(bool)arg1;
- (id)visionContextForExecutionTarget:(int)arg1;

@end
