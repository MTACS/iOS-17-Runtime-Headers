
@interface BWInferenceFusionTrackerScalingProvider : NSObject <BWInferenceExecutable, BWInferencePreventable, BWInferencePropagatable, BWInferenceProvider, BWInferenceSubmittable> {
    BWInferenceVideoRequirement * _inputRequirement;
    BWInferenceFusionTrackerMeanPixelCalculator * _meanPixelCalculator;
    BWMetalInferenceContext * _metalInferenceContext;
    long long  _operation;
    BWInferenceVideoRequirement * _orderBufferRequirement;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    NSMutableArray * _outputMetadataRequirements;
    BWInferenceVideoRequirement * _outputRequirement;
    FTMSRScaler * _scaler;
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
@property (nonatomic, readonly) bool mustExecuteWhenAllowed;
@property (nonatomic, readonly) NSArray *outputMetadataRequirements;
@property (nonatomic, readonly) NSArray *outputVideoRequirements;
@property (nonatomic, readonly, copy) NSSet *preventionReasons;
@property (nonatomic, readonly) <BWInferencePropagatable> *propagatable;
@property (nonatomic, readonly) <BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

- (unsigned int)allowedPixelBufferCompressionDirection;
- (bool)allowsAsyncPropagation;
- (id)cloneVideoRequirements;
- (void)dealloc;
- (id)description;
- (id)executable;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (int)executionTarget;
- (id)extractable;
- (id)inputMetadataRequirements;
- (id)inputVideoRequirements;
- (bool)mustExecuteWhenAllowed;
- (id)newStorage;
- (id)outputMetadataRequirements;
- (id)outputVideoRequirements;
- (int)prepareForExecution;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 executionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)preventionReasons;
- (int)prewarmUsingLimitedMemory:(bool)arg1;
- (id)propagatable;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withSubmissionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 workQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)submittable;
- (int)type;

@end
