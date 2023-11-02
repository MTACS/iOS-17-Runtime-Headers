
@protocol BWInferencePreventable <BWInferenceJobProvider>

@required

- (bool)mustExecuteWhenAllowed;
- (NSString *)preventionReasonWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 executionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

@end
