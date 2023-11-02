
@interface HMDHomeAdministratorConfigurationOperation : HMFOperation <HMFLogging> {
    HMFMessageDispatcher * _dispatcher;
    HMDHome * _home;
    HMFMessage * _message;
    id /* block */  _responseHandler;
    id /* block */  _sendCompletionBlock;
    bool  _shouldSuspendSyncing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMFMessageDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) HMFMessage *message;
@property (copy) id /* block */ responseHandler;
@property (copy) id /* block */ sendCompletionBlock;
@property bool shouldSuspendSyncing;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (double)timeout;

- (void).cxx_destruct;
- (id)dispatcher;
- (id)home;
- (id)initWithMessage:(id)arg1 home:(id)arg2 dispatcher:(id)arg3;
- (id)logIdentifier;
- (void)main;
- (id)message;
- (id /* block */)responseHandler;
- (id /* block */)sendCompletionBlock;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setSendCompletionBlock:(id /* block */)arg1;
- (void)setShouldSuspendSyncing:(bool)arg1;
- (bool)shouldSuspendSyncing;

@end
