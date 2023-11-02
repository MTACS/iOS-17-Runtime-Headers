
@interface HMDRapportDeviceClientWrapper : NSObject <HMFLogging> {
    long long  _activateState;
    RPCompanionLinkClient * _client;
    NSMutableArray * _requestQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_completeQueuedRequestsWithError:(id)arg1;
- (void)_queueRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)initWithClient:(id)arg1;
- (void)invalidate;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4;

@end
