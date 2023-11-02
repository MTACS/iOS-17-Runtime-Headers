
@interface STKSIMToolkitAlertSessionManager : STKAlertSessionManager <SBSRemoteAlertHandleObserver, STKDeviceLockStatusObserver, STKIncomingCallUIStateObserver, STKUserEventMonitorDelegate> {
    int  _atHomeScreenNotifyToken;
    STKSIMToolkitAlertSession * _currentSession;
    STKDeviceLockMonitor * _deviceLockMonitor;
    <BSInvalidatable> * _haltEventQueueProcessingAssertion;
    STKIncomingCallUIStateMonitor * _incomingCallUIStateMonitor;
    <STKTelephonyListItemsProvider> * _listItemsProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_deviceLocked;
    NSObject<OS_dispatch_group> * _notificationGroup;
    NSObject<OS_dispatch_queue> * _queue;
    struct __CTServerConnection { } * _serverConnection;
    STKCarrierSubscriptionMonitor * _subscriptionMonitor;
    CoreTelephonyClient * _telephonyClient;
    STKUserEventMonitor * _userEventMonitor;
    <STKAlertSessionResponseProvider> * _userEventResponder;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (setter=_setListItemsProvider:, nonatomic, retain) <STKTelephonyListItemsProvider> *_listItemsProvider;
@property (setter=_queue_setCurrentSession:, nonatomic, retain) STKSIMToolkitAlertSession *currentSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) STKCarrierSubscriptionMonitor *subscriptionMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_listItemsFromCTItems:(id)arg1;
- (id)_listItemsProvider;
- (id)_newSessionBehaviorFromOptions:(id)arg1;
- (void)_queue_handleSIMToolkitEvent:(long long)arg1 responder:(id)arg2 userInfo:(id)arg3;
- (void)_queue_setCurrentSession:(id)arg1;
- (void)_queue_startListening;
- (void)_removeNotification;
- (void)_setListItemsProvider:(id)arg1;
- (bool)_showAfterDeviceUnlock:(unsigned long long)arg1;
- (void)_showNotification;
- (id)currentSession;
- (void)deviceLockStateChanged:(bool)arg1;
- (void)handleSIMToolkitEvent:(long long)arg1 responder:(id)arg2 userInfo:(id)arg3;
- (void)incomingCallUIStateDidChange:(bool)arg1;
- (id)initWithSubscriptionMonitor:(id)arg1;
- (id)remoteAlertDescriptorForSession:(id)arg1;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (id)subscriptionMonitor;
- (void)userEventDidOccur:(id)arg1;

@end
