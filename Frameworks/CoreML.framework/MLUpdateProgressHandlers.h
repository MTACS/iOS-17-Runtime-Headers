
@interface MLUpdateProgressHandlers : NSObject {
    id /* block */  _completionHandler;
    long long  _interestedEvents;
    id /* block */  _progressHandler;
}

@property (copy) id /* block */ completionHandler;
@property long long interestedEvents;
@property (copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (void)_dispatchUpdateProgressHandlerForEvent:(long long)arg1 metrics:(id)arg2 parameters:(id)arg3 error:(id)arg4 onQueue:(id)arg5;
- (id /* block */)completionHandler;
- (id)description;
- (void)dispatchEpochEndProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3;
- (void)dispatchMiniBatchEndProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3;
- (void)dispatchTrainingBeginProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3;
- (void)dispatchTrainingCompletionHandlerWithError:(id)arg1 onQueue:(id)arg2;
- (void)dispatchTrainingCompletionHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3;
- (id)initForEvents:(long long)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (long long)interestedEvents;
- (id /* block */)progressHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setInterestedEvents:(long long)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
