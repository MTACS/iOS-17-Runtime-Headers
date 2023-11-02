
@interface MUAMSResultProvider : NSObject {
    MUAMSResultCache * _amsResultCache;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_finishWithResults:(id)arg1 error:(id)arg2 onCallbackQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchResultsForAdamIds:(id)arg1 options:(id)arg2 callbackQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchResultsForBundleIds:(id)arg1 options:(id)arg2 callbackQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithCache:(id)arg1;

@end
