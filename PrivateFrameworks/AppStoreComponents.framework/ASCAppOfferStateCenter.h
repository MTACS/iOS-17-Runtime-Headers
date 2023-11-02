
@interface ASCAppOfferStateCenter : NSObject <ASCAppOfferStateDelegate> {
    <ASCServices> * _connection;
    ASCPendingPromises * _pendingActionPromises;
    ASCJitterBackoff * _reconnectBackoff;
    AMSPromise * _service;
    NSMapTable * _stateMachines;
    ASCWorkspace * _workspace;
}

@property (nonatomic, readonly) <ASCServices> *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ASCPendingPromises *pendingActionPromises;
@property (nonatomic, readonly) ASCJitterBackoff *reconnectBackoff;
@property (nonatomic, retain) AMSPromise *service;
@property (nonatomic, readonly) NSMapTable *stateMachines;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ASCWorkspace *workspace;

+ (id)log;
+ (id)sharedCenter;

- (void).cxx_destruct;
- (void)connectToService;
- (id)connection;
- (void)daemonConnectionWasLost:(id)arg1;
- (void)daemonDidRebootstrap:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithConnection:(id)arg1 workspace:(id)arg2;
- (void)offer:(id)arg1 didChangeState:(id)arg2 withMetadata:(id)arg3 flags:(long long)arg4;
- (void)offer:(id)arg1 didChangeStatusText:(id)arg2;
- (id)pendingActionPromises;
- (id)performActionOfOffer:(id)arg1 withActivity:(id)arg2 inContext:(id)arg3;
- (id)performActionOfOffer:(id)arg1 withActivity:(id)arg2 inContext:(id)arg3 usingService:(id)arg4;
- (id)performFallbackActionForOffer:(id)arg1;
- (id)reconnectBackoff;
- (id)reinstallWatchAppWithID:(id)arg1;
- (id)reinstallWatchSystemAppWithBundleID:(id)arg1;
- (void)scheduleTryReconnect;
- (id)service;
- (void)setService:(id)arg1;
- (id)stateMachineForOffer:(id)arg1;
- (id)stateMachines;
- (void)stopObservingStateForOffer:(id)arg1;
- (void)tryReconnect;
- (void)useOfferStateMachineFallback;
- (id)workspace;

@end
