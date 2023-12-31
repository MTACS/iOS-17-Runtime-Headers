
@interface VUIStoreAcquisition : NSObject {
    VUIAcquisitionRequest * _activeRequest;
    unsigned long long  _concurrentCount;
    NSMutableArray * _pendingQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleCustomRequest:(id)arg1;
- (void)_handleRequest:(id)arg1;
- (void)_handleResponse:(id)arg1 responseDict:(id)arg2 forRequest:(id)arg3 error:(id)arg4 cancelled:(bool)arg5;
- (void)_processFirstRequest;
- (void)_processRequest:(id)arg1;
- (id)acquireWithProperties:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)cancelAcquisition:(id)arg1;
- (id)init;
- (void)postCrossProcessNotificationWithBuyParams:(id)arg1 error:(id)arg2;

@end
