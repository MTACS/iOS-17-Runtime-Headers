
@interface BWIntelligentDistortionCorrectionProcessorController : BWStillImageProcessorController <BWIntelligentDistortionCorrectionProcessorInputDelegate> {
    BWIntelligentDistortionCorrectionProcessorControllerConfiguration * _configuration;
    BWIntelligentDistortionCorrectionProcessorRequest * _currentRequest;
    NSDictionary * _idcMaxZoomScaleFactorByPortType;
    struct __CVBuffer { } * _intermediateDepthInputBuffer;
    struct __CVBuffer { } * _intermediateDepthOutputBuffer;
    NSMutableDictionary * _outputFormatDescriptionByAttachedMediaKey;
    struct opaqueCMFormatDescription { } * _outputImageFormatDescription;
    <FigIntelligentDistortionCorrectionProcessor> * _processor;
    NSMutableArray * _requestQueue;
    FigStateMachine * _stateMachine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)captureTypesWithIntelligentDistortionCorrectionSupport;
+ (void)initialize;

- (void)cancelProcessing;
- (void)dealloc;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)inputReceivedNewInputData:(id)arg1;
- (unsigned long long)type;

@end
