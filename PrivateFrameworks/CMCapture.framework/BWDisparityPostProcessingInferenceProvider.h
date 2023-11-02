
@interface BWDisparityPostProcessingInferenceProvider : NSObject <BWInferencePropagatable, BWInferenceProvider, BWInferenceSubmittable> {
    unsigned long long  _concurrencyWidth;
    MTLTextureDescriptor * _disparityInputDescriptor;
    BWInferenceVideoRequirement * _disparityInputRequirement;
    MTLTextureDescriptor * _disparityOutputDescriptor;
    BWInferenceVideoRequirement * _disparityOutputRequirement;
    PTDisparityPostProcessing * _disparityPostProcessor;
    MTLTextureDescriptor * _displacementDescriptor;
    BWInferenceVideoRequirement * _displacementInputRequirement;
    BWMetalInferenceContext * _metalInferenceContext;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    NSString * _portType;
    MTLTextureDescriptor * _stateInDescriptor;
    BWInferenceVideoRequirement * _stateInputRequirement;
    MTLTextureDescriptor * _stateOutDescriptor;
    BWInferenceVideoRequirement * _stateOutputRequirement;
}

@property (nonatomic, readonly) unsigned int allowedPixelBufferCompressionDirection;
@property (nonatomic, readonly) bool allowsAsyncPropagation;
@property (nonatomic, readonly) NSArray *cloneVideoRequirements;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BWInferenceExecutable> *executable;
@property (nonatomic, readonly) int executionTarget;
@property (nonatomic, readonly) <BWInferenceExtractable> *extractable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputMetadataRequirements;
@property (nonatomic, readonly) NSArray *inputVideoRequirements;
@property (nonatomic, readonly) NSArray *outputMetadataRequirements;
@property (nonatomic, readonly) NSArray *outputVideoRequirements;
@property (nonatomic, readonly, copy) NSSet *preventionReasons;
@property (nonatomic, readonly) <BWInferencePropagatable> *propagatable;
@property (nonatomic, readonly) <BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (unsigned int)allowedPixelBufferCompressionDirection;
- (bool)allowsAsyncPropagation;
- (id)cloneVideoRequirements;
- (void)dealloc;
- (id)executable;
- (int)executionTarget;
- (id)extractable;
- (id)initWithDisparityInputRequirement:(id)arg1 displacementInputRequirement:(id)arg2 stateInputRequirement:(id)arg3 stateOutputRequirement:(id)arg4 disparityOutputRequirement:(id)arg5 portType:(id)arg6 resourceProvider:(id)arg7 configuration:(id)arg8;
- (id)inputMetadataRequirements;
- (id)inputVideoRequirements;
- (id)newStorage;
- (id)outputMetadataRequirements;
- (id)outputVideoRequirements;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (id)preventionReasons;
- (int)prewarmUsingLimitedMemory:(bool)arg1;
- (id)propagatable;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withSubmissionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 workQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)submittable;
- (int)type;

@end
