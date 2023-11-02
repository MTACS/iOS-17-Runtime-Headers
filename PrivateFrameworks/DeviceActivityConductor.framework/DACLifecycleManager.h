
@interface DACLifecycleManager : NSObject <DACLifecycleClientInterface> {
    DACActivityList * _activityList;
    NSMutableDictionary * _assertions;
    bool  _connected;
    NSXPCConnection * _currentConnection;
    <DACLifecycleManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _registeredActivities;
    int  _resetNotifyToken;
    DACDeviceRole * _role;
    bool  _shouldAttemptReconnect;
    bool  _subscriptionActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activatedAssertionForActivity:(id)arg1 withChangeMarker:(id)arg2;
- (void)activityListChanged:(id)arg1;
- (void)dealloc;
- (void)enumerateLifecycleInfo:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)lifecycleStateOfActivity:(id)arg1 result:(id /* block */)arg2;
- (void)registerActivity:(id)arg1;
- (id)requestActivationOfActivity:(id)arg1 requester:(id)arg2;
- (void)requestDeactivationOfActivity:(id)arg1 requester:(id)arg2;
- (void)roleChanged:(id)arg1;
- (void)unregisterActivity:(id)arg1;

@end
