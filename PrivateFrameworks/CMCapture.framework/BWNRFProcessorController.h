
@interface BWNRFProcessorController : BWStillImageProcessorController <BWNRFProcessorInputDelegate, BWNoiseReductionAndFusionProcessorController, NRFProcessorDelegate> {
    NSDictionary * _adaptiveBracketingCaptureParametersByPortType;
    NSObject<OS_dispatch_queue> * _completionStatusQueue;
    BWNRFProcessorControllerConfiguration * _configuration;
    BWNRFProcessorRequest * _currentRequest;
    NRFPrepareDescriptor * _deepFusionPrepareDescriptor;
    struct opaqueCMFormatDescription { } * _demosaicedRawFormatDescription;
    struct opaqueCMFormatDescription { } * _gainMapFormatDescription;
    struct opaqueCMFormatDescription { } * _inferenceInputFormatDescription;
    Class  _nrfCompletionStatusClass;
    Class  _nrfDeepFusionOutputClass;
    <NRFProcessor> * _nrfProcessor;
    NSString * _nrfProcessorClassName;
    Class  _nrfProgressiveBracketingParametersClass;
    Class  _nrfProgressiveBracketingStatisticsClass;
    Class  _nrfRawNigthModeOutputFrameClass;
    Class  _nrfUBFusionOutputClass;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    NRFPrepareDescriptor * _prepareDescriptor;
    NRFPrepareDescriptor * _rawNightModePrepareDescriptor;
    NSMutableArray * _requestQueue;
    FigStateMachine * _stateMachine;
    NSSet * _supportedPortTypes;
    NRFPrepareDescriptor * _ubPrepareDescriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int progressiveLowLightFusionBatchSize;
@property (readonly) Class superclass;

+ (void)initialize;

- (id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg1;
- (id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(bool)arg3 sphereOffsetEnabled:(bool)arg4 detectedObjects:(id)arg5;
- (void)cancelProcessing;
- (void)dealloc;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 processErrorRecoveryFrame:(bool)arg3 processOriginalImage:(bool)arg4 processToneMapping:(bool)arg5 processInferenceInputImage:(bool)arg6 clientBracketSequenceNumber:(int)arg7 processSemanticRendering:(bool)arg8 provideInferenceInputImageForProcessing:(bool)arg9 inferencesAvailable:(bool)arg10;
- (bool)finishProcessingCurrentInputNow;
- (id)initWithConfiguration:(id)arg1;
- (void)input:(id)arg1 addFrame:(struct opaqueCMSampleBuffer { }*)arg2 isReferenceFrame:(bool)arg3;
- (void)inputReceivedAllFrames:(id)arg1;
- (void)inputReceivedProcessedRawErrorRecoveryFrame:(id)arg1;
- (id)metalImageBufferProcessor;
- (void)processor:(id)arg1 didCompleteProcessingForSurfaceID:(unsigned int)arg2;
- (void)processor:(id)arg1 didEnqueueProcessingForSurfaceID:(unsigned int)arg2;
- (void)processor:(id)arg1 didSelectFusionMode:(int)arg2;
- (void)processor:(id)arg1 didSelectProgressiveFusionReferenceFrameIndex:(int)arg2;
- (void)processor:(id)arg1 outputReadyWithFrameType:(int)arg2 outputPixelBuffer:(struct __CVBuffer { }*)arg3 outputMetadata:(id)arg4 error:(int)arg5;
- (id)processorGetInferenceResults:(id)arg1;
- (int)progressiveLowLightFusionBatchSize;
- (unsigned int)rawNightModeOutputPixelFormatByBufferType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
