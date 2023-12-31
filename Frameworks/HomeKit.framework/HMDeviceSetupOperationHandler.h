
@interface HMDeviceSetupOperationHandler : NSObject <HMDeviceSetupSessionDelegate, HMFLogging, TROperationHandler> {
    HMDeviceSetupSession * _setupSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDeviceSetupSession *setupSession;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleReceivedRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (id)logIdentifier;
- (void)registerMessageHandlersForSession:(id)arg1;
- (id)setupSession;
- (void)setupSession:(id)arg1 didCloseWithError:(id)arg2;
- (void)setupSession:(id)arg1 didReceiveExchangeData:(id)arg2 completionHandler:(id /* block */)arg3;

@end
