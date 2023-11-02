
@interface ITIdleTimerStateServer : NSObject <BSServiceConnectionListenerDelegate, ITIdleTimerServerInterface> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessLock;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMutableDictionary * _clientTargetsByConfigIdentifier;
    BSServiceConnectionListener * _connectionListener;
    NSMutableSet * _connections;
    <ITIdleTimerStateServerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ITIdleTimerStateServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (bool)_hasIdleTimerServicesEntitlementForProcess:(id)arg1 missingEntitlementError:(id*)arg2;
- (void)_removeConnection:(id)arg1;
- (void)addIdleTimerServiceConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3;
- (bool)clientConfiguration:(id)arg1 handleIdleEvent:(unsigned long long)arg2;
- (id)delegate;
- (id)initWithCalloutQueue:(id)arg1 delegate:(id)arg2;
- (bool)isIdleTimerServiceAvailableWithError:(id*)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)removeIdleTimerServiceConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;

@end
