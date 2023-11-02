
@protocol BWInferenceSubmittable <BWInferenceJobProvider>

@required

- (int)prepareForSubmissionWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (int)submitForSampleBuffer:(void *)arg1 usingStorage:(void *)arg2 withSubmissionTime:(void *)arg3 workQueue:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: struct opaqueCMSampleBuffer { }*, <BWInferenceStorage> *, struct { long long x1; int x2; unsigned int x3; long long x4; }, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, <BWInferenceJobProvider> *, void*

@end
