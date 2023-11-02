
@interface STKUSSDAlertSessionManager : STKAlertSessionManager <CoreTelephonyClientSuppServicesDelegate, SBSRemoteAlertHandleObserver> {
    NSMutableArray * _activeSupplementaryServicesSessions;
    NSMutableArray * _activeUSSDSessions;
    STKUSSDAlertSession * _coalescingUSSDSession;
    NSMutableArray * _finishedSupplementaryServicesSessions;
    NSMutableArray * _finishedUSSDSessions;
    NSObject<OS_dispatch_queue> * _queue;
    struct __CTServerConnection { } * _serverConnection;
    STKCarrierSubscriptionMonitor * _subscriptionMonitor;
    CoreTelephonyClient * _telephonyClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) STKCarrierSubscriptionMonitor *subscriptionMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_executeOnQueue:(id /* block */)arg1;
- (void)_queue_handleUSSDEvent:(long long)arg1 responder:(id)arg2 userInfo:(id)arg3;
- (void)_queue_startListening;
- (id)_supplementaryServicesResponder;
- (void)_willPresentAlertHandle:(id)arg1;
- (void)handleUSSDEvent:(long long)arg1 responder:(id)arg2 userInfo:(id)arg3;
- (id)initWithSubscriptionMonitor:(id)arg1;
- (id)remoteAlertDescriptorForSession:(id)arg1;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (id)subscriptionMonitor;
- (void)suppServicesCompleted:(id)arg1;
- (void)suppServicesError:(id)arg1 error:(id)arg2;
- (void)suppServicesEvent:(id)arg1 event:(int)arg2 settingsType:(int)arg3 data:(id)arg4;
- (void)suppServicesStarted:(id)arg1;

@end
