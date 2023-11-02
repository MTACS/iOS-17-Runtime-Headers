
@interface BWFusionTrackerEspressoInferenceProvider : BWEspressoInferenceProvider <BWInferencePreventable> {
    long long  _operation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BWInferenceExecutable> *executable;
@property (nonatomic, readonly) <BWInferenceExtractable> *extractable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool mustExecuteWhenAllowed;
@property long long operation;
@property (nonatomic, readonly) <BWInferencePropagatable> *propagatable;
@property (nonatomic, readonly) <BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

- (bool)mustExecuteWhenAllowed;
- (long long)operation;
- (id)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 executionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setOperation:(long long)arg1;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withSubmissionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 workQueue:(id)arg4 completionHandler:(id /* block */)arg5;

@end
