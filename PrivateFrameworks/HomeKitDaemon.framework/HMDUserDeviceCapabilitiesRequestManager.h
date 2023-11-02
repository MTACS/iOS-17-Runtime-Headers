
@interface HMDUserDeviceCapabilitiesRequestManager : HMDRemoteMessageTransport <HMDUserDeviceCapabilitiesRequestManager, HMFMessageReceiver, HMFTimerManagerDelegate> {
    HMDHomeManager * _homeManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDMessageDispatcher * _messageDispatcher;
    NSMutableDictionary * _requestContexts;
    NSMutableArray * _timerContextsToCancel;
    <HMFTimerManager> * _timerManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_cancelPendingTimerContexts;
- (void)_completeWithResponse:(id)arg1 error:(id)arg2 context:(id)arg3;
- (void)_handleRequestCapabilitiesXPCRequest:(id)arg1;
- (void)_handleResponsePayload:(id)arg1 error:(id)arg2 transactionID:(id)arg3;
- (id /* block */)_responseHandlerForTransactionID:(id)arg1;
- (id)_selectBestResponseForContext:(id)arg1;
- (id)_updateDeviceCapabilities:(id)arg1 withDestination:(id)arg2;
- (void)_updateResponseTimeoutForContext:(id)arg1;
- (void)electDeviceForUserID:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)initWithHomeManager:(id)arg1 accountRegistry:(id)arg2 messageDispatcher:(id)arg3;
- (id)initWithHomeManager:(id)arg1 accountRegistry:(id)arg2 messageDispatcher:(id)arg3 timerManager:(id)arg4;
- (id)messageTargetUUID;
- (void)registerForMessages;
- (void)timerManager:(id)arg1 didFireForTimerContext:(id)arg2;

@end
