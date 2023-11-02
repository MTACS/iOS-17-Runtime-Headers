
@interface IDSActivityMonitor : NSObject <_IDSActivityMonitorXPCConnectorXPCListener> {
    _IDSActivityMonitorXPCConnector * _XPCConnector;
    NSString * _activity;
    NSString * _activityIdentifier;
    <IDSActivityMonitorListenerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) _IDSActivityMonitorXPCConnector *XPCConnector;
@property (nonatomic, readonly) NSString *activity;
@property (nonatomic, retain) NSString *activityIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IDSActivityMonitorListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool listeningForUpdates;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSArray *subscriptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)XPCConnector;
- (id)activity;
- (id)activityIdentifier;
- (void)beginBroadcastingWithInfo:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)handleIncomingUpdate:(id)arg1 onActivity:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2;
- (id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2 queue:(id)arg3;
- (id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2 queue:(id)arg3 xpcConnector:(id)arg4;
- (bool)listeningForUpdates;
- (id)queue;
- (void)setActivityIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setListeningForUpdates:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setXPCConnector:(id)arg1;
- (void)stopBroadcastingForSubActivity:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)subscriptions;

@end
