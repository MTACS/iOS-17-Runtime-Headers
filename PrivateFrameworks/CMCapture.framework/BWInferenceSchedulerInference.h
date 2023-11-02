
@interface BWInferenceSchedulerInference : NSObject <BWInferenceExecutable, BWInferenceJobProvider, BWInferencePreventable, BWInferenceSubmittable> {
    unsigned long long  _identifier;
    int  _inferenceType;
    float  _maximumFramesPerSecond;
    bool  _mustExecuteWhenAllowed;
    <BWInferencePreventable> * _preventable;
    _Atomic double  _previousExecutionTimeInSeconds;
    unsigned int  _priority;
    bool  _propagatesFrameRatePrevention;
    <BWInferenceProvider> * _provider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BWInferenceExecutable> *executable;
@property (nonatomic, readonly) <BWInferenceExtractable> *extractable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) int inferenceType;
@property (nonatomic, readonly) float maximumFramesPerSecond;
@property (nonatomic, readonly) bool mustExecuteWhenAllowed;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } previousExecutionTime;
@property (nonatomic, readonly) unsigned int priority;
@property (nonatomic, readonly) <BWInferencePropagatable> *propagatable;
@property (nonatomic, readonly) <BWInferenceProvider> *provider;
@property (nonatomic, readonly) <BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)executable;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (id)extractable;
- (unsigned long long)identifier;
- (int)inferenceType;
- (id)initWithInferenceRequirement:(id)arg1;
- (float)maximumFramesPerSecond;
- (bool)mustExecuteWhenAllowed;
- (id)newStorage;
- (int)prepareForExecution;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 executionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })previousExecutionTime;
- (unsigned int)priority;
- (id)propagatable;
- (id)provider;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withSubmissionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 workQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)submittable;
- (int)type;

@end
