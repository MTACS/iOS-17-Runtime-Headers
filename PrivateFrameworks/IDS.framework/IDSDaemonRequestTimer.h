
@interface IDSDaemonRequestTimer : NSObject {
    NSMutableDictionary * _requestContextMap;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _requestContextMapLock;
}

- (void).cxx_destruct;
- (void)_accessRequestContextMapInCriticalSectionWithBlock:(id /* block */)arg1;
- (id)_criticalFindRequestContextWithResponseHandler:(id)arg1;
- (id)_criticalInvalidateTimeoutAndReturnHandlerForRequestID:(id)arg1;
- (void)_criticalInvokeTimeoutBlockForRequestID:(id)arg1;
- (void)_handleSystemTimerFired:(id)arg1;
- (void)dealloc;
- (long long)inFlightRequestCount;
- (id)init;
- (id)invalidateTimeoutAndReturnHandlerForRequestID:(id)arg1;
- (id)invalidateTimeoutsAndReturnHandlersForAllRequests;
- (id)scheduleTimeoutWithResponseHandler:(id)arg1 timeoutInterval:(double)arg2 timeoutBlock:(id /* block */)arg3;

@end
