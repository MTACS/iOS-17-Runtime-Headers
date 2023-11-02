
@protocol BWInferenceExecutable <BWInferenceJobProvider>

@required

- (int)executeOnSampleBuffer:(void *)arg1 usingStorage:(void *)arg2 withExecutionTime:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: struct opaqueCMSampleBuffer { }*, <BWInferenceStorage> *, struct { long long x1; int x2; unsigned int x3; long long x4; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, <BWInferenceJobProvider> *, void*
- (int)prepareForExecution;

@end
