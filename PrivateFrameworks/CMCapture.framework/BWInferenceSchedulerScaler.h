
@interface BWInferenceSchedulerScaler : NSObject <BWInferenceExecutable, BWInferenceJobProvider, BWInferencePreventable, BWInferencePropagatable, BWInferenceSubmittable> {
    BWInferenceVideoRequirement * _inputRequirement;
    NSArray * _outputRequirements;
    <BWInferenceProvider> * _provider;
}

@property (nonatomic, readonly) bool allowsAsyncPropagation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BWInferenceExecutable> *executable;
@property (nonatomic, readonly) <BWInferenceExtractable> *extractable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputVideoRequirements;
@property (nonatomic, readonly) bool mustExecuteWhenAllowed;
@property (nonatomic, readonly) NSArray *outputRequirements;
@property (nonatomic, readonly) <BWInferencePropagatable> *propagatable;
@property (nonatomic, readonly) <BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

- (void)dealloc;
- (id)description;
- (id)executable;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (id)extractable;
- (id)initWithInputRequirement:(id)arg1 derivedFromRequirement:(id)arg2 outputRequirements:(id)arg3 options:(unsigned long long)arg4;
- (id)inputVideoRequirements;
- (bool)mustExecuteWhenAllowed;
- (id)newStorage;
- (id)outputRequirements;
- (int)prepareForExecution;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 executionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)propagatable;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withSubmissionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 workQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)submittable;
- (int)type;

@end
