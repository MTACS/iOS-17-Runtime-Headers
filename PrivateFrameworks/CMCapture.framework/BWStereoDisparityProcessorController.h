
@interface BWStereoDisparityProcessorController : BWStillImageProcessorController <BWInferenceFormatProvider, BWStereoDisparityProcessorInputDelegate, DisparityProcessorInferenceDelegate> {
    struct opaqueCMFormatDescription { } * _auxFormatDescription;
    NSSet * _currentInferenceEnginePortTypes;
    struct opaqueCMFormatDescription { } * _disparityFormatDescription;
    FigDisparityGenerator * _disparityProcessor;
    BWInferenceEngine * _inferenceEngine;
    struct opaqueCMFormatDescription { } * _refFormatDescription;
    NSDictionary * _videoFormatByAttachedMediaKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)usesCustomProcessingFlow;

- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)inputFormatForAttachedMediaKey:(id)arg1;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1;
- (void)inputReceivedNewInputData:(id)arg1;
- (id)inputVideoFormatForAttachedMediaKey:(id)arg1;
- (bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;
- (id)outputFormatForAttachedMediaKey:(id)arg1;
- (id)outputVideoFormatForAttachedMediaKey:(id)arg1;
- (int)prepare;
- (int)process;
- (int)processDisparityInferenceWithReferenceBuffer:(struct __CVBuffer { }*)arg1 auxBuffer:(struct __CVBuffer { }*)arg2 outputDisparityBuffer:(struct __CVBuffer { }*)arg3;
- (id)requestForInput:(id)arg1 delegate:(id)arg2 errOut:(int*)arg3;
- (void)reset;
- (unsigned long long)type;

@end
