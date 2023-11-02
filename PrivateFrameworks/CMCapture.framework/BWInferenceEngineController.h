
@interface BWInferenceEngineController : BWStillImageProcessorController <BWInferenceEngineControllerInputDelegate, BWInferenceFormatProvider> {
    NSString * _contextName;
    BWInferenceEngine * _inferenceEngine;
    bool  _inferenceEnginePrepared;
    NSDictionary * _inferenceOutputFormatByAttachedMediaKey;
    BWVideoFormat * _inputFormat;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *providedAttachedMediaKeys;
@property (readonly) Class superclass;

+ (id)faceObservationsFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (struct __CVBuffer { }*)inferenceMaskFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1 attachedMediaKey:(id)arg2;
+ (struct opaqueCMSampleBuffer { }*)inferenceMaskSbufFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1 attachedMediaKey:(id)arg2;
+ (id)lowResPersonInstanceBoundingBoxesFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (id)lowResPersonInstanceConfidencesFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (id)lowResPersonInstanceMasksFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (id)skinToneClassificationsFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (id)smartCameraClassificationsFromSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
+ (bool)usesCustomProcessingFlow;

- (id)_suppressedInferenceTypesForInput:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 contextName:(id)arg2;
- (id)inputFormatForAttachedMediaKey:(id)arg1;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1;
- (void)inputReceivedNewData:(id)arg1;
- (id)inputVideoFormatForAttachedMediaKey:(id)arg1;
- (bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;
- (id)outputFormatForAttachedMediaKey:(id)arg1;
- (id)outputVideoFormatForAttachedMediaKey:(id)arg1;
- (int)prepare;
- (int)prepareWithPixelBufferPoolProvider:(id)arg1;
- (int)process;
- (id)providedAttachedMediaKeys;
- (id)requestForInput:(id)arg1 delegate:(id)arg2 errOut:(int*)arg3;
- (void)reset;

@end
