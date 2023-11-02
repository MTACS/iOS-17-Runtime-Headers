
@interface BWDeepZoomProcessorController : BWStillImageProcessorController <BWDeepZoomProcessorInputDelegate, BWInferenceFormatProvider> {
    BWDeepZoomProcessorControllerConfiguration * _configuration;
    BWDeepZoomProcessorRequest * _currentRequest;
    BWDeepZoomInferenceConfiguration * _inferenceConfiguration;
    BWInferenceEngine * _inferenceEngine;
    NSMutableArray * _requestQueue;
    FigStateMachine * _stateMachine;
    NSMutableDictionary * _videoFormatByAttachedMediaKey;
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
- (id)inputFormatForAttachedMediaKey:(id)arg1;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1;
- (void)inputSampleBufferReceived:(id)arg1;
- (id)inputVideoFormatForAttachedMediaKey:(id)arg1;
- (bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;
- (id)outputFormatForAttachedMediaKey:(id)arg1;
- (id)outputVideoFormatForAttachedMediaKey:(id)arg1;
- (int)prepareWithPixelBufferPoolProvider:(id)arg1;
- (unsigned long long)type;

@end
