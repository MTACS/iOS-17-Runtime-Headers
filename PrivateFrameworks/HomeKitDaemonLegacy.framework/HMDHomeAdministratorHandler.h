
@interface HMDHomeAdministratorHandler : HMFMessageDispatcher <HMFLogging> {
    HMFMessageDispatcher * _dispatcher;
    HMDHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSOperationQueue * _queue;
    NSMapTable * _receivers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMFMessageDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) bool shouldRelayMessages;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)deregisterReceiver:(id)arg1;
- (id)dispatcher;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 dispatcher:(id)arg2;
- (id)initWithTransport:(id)arg1;
- (id)logIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)operationForMessage:(id)arg1 error:(id*)arg2;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 messageHandler:(id /* block */)arg4;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4;
- (bool)shouldRelayMessages;
- (id)syncOperationManager;

@end
