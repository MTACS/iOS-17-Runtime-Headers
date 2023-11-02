
@interface COMessagingAddOn : COMeshAddOn {
    <COMessagingAddOnDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _queuedIncomingRequests;
    NSObject<OS_dispatch_source> * _timer;
    bool  _timerEnabled;
}

@property <COMessagingAddOnDelegate> *delegate;
@property (nonatomic, readonly) NSMutableArray *queuedIncomingRequests;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;
@property (getter=isTimerEnabled, nonatomic) bool timerEnabled;

- (void).cxx_destruct;
- (void)_configureTimer;
- (void)_handleRequest:(id)arg1 callback:(id /* block */)arg2;
- (void)_timerFired;
- (void)_timerRequestAdded:(id)arg1;
- (void)_withLock:(id /* block */)arg1;
- (void)broadcastRequest:(id)arg1 recipientsCallback:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)delegate;
- (void)didAddToMeshController:(id)arg1;
- (void)didChangeNodesForMeshController:(id)arg1;
- (id)init;
- (bool)isTimerEnabled;
- (id)queuedIncomingRequests;
- (void)sendRequest:(id)arg1 members:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setTimerEnabled:(bool)arg1;
- (id)timer;
- (void)willRemoveFromMeshController:(id)arg1;

@end
