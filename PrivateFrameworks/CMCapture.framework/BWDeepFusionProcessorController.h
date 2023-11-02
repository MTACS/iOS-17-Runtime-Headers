
@interface BWDeepFusionProcessorController : BWStillImageProcessorController <BWDeepFusionProcessorInputDelegate, IBPDeepFusionProcessorDelegate> {
    BWDeepFusionProcessorControllerConfiguration * _configuration;
    BWDeepFusionProcessorRequest * _currentRequest;
    Class  _deepFusionOutputClass;
    <IBPDeepFusionProcessor> * _deepFusionProcessor;
    struct opaqueCMFormatDescription { } * _demosaicedRawFormatDescription;
    struct opaqueCMFormatDescription { } * _gainMapFormatDescription;
    struct opaqueCMFormatDescription { } * _inferenceAttachedMediaFormatDescription;
    struct opaqueCMFormatDescription { } * _inferenceInputFormatDescription;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    <IBPDeepFusionPrepareDescriptor> * _prepareDescriptor;
    int  _processorVersion;
    struct opaqueCMFormatDescription { } * _quadraForEnhancedResolutionOutputFormatDescription;
    NSMutableArray * _requestQueue;
    FigStateMachine * _stateMachine;
    NSSet * _supportedPortTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)addInferencesForInput:(id)arg1;
- (void)beginProcessingCachedBuffersForInput:(id)arg1;
- (void)cancelProcessing;
- (void)dealloc;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;
- (id)externalMemoryDescriptor;
- (id)initWithConfiguration:(id)arg1;
- (void)input:(id)arg1 addInputBuffer:(id)arg2;
- (id)metalImageBufferProcessor;
- (void)processor:(id)arg1 didSelectFusionMode:(int)arg2;
- (void)processor:(id)arg1 outputReadyWithBufferType:(int)arg2 outputPixelBuffer:(struct __CVBuffer { }*)arg3 outputMetadata:(id)arg4 error:(int)arg5;
- (id)processorGetInferenceResults:(id)arg1 inferenceInputBufferType:(int)arg2;
- (unsigned long long)type;

@end
