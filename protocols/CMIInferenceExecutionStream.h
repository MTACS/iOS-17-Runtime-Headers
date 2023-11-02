
@protocol CMIInferenceExecutionStream <NSObject>

@required

- (int)enqueueNetworkInstance:(id <CMIInferenceNetworkInstance>)arg1;
- (int)submitAsyncWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
