
@interface BWLearnedNRProcessorController : BWStillImageProcessorController <BWInferenceFormatProvider, BWLearnedNRInputDelegate> {
    BWLearnedNRProcessorControllerConfiguration * _configuration;
    BWLearnedNRRequest * _currentRequest;
    BWInferenceEngine * _inferenceEngine;
    bool  _inferenceEnginePrepared;
    struct opaqueCMFormatDescription { } * _inputImageFormatDescription;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    NSMutableArray * _requestQueue;
    FigStateMachine * _stateMachine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)cancelProcessing;
- (void)dealloc;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)input:(id)arg1 setInputFrame:(struct opaqueCMSampleBuffer { }*)arg2;
- (id)inputFormatForAttachedMediaKey:(id)arg1;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1;
- (id)inputVideoFormatForAttachedMediaKey:(id)arg1;
- (bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;
- (id)outputFormatForAttachedMediaKey:(id)arg1;
- (id)outputVideoFormatForAttachedMediaKey:(id)arg1;
- (int)prepareWithPixelBufferPoolProvider:(id)arg1;
- (unsigned long long)type;

@end
