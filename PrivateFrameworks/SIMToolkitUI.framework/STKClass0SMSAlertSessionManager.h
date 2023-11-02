
@interface STKClass0SMSAlertSessionManager : STKAlertSessionManager <CoreTelephonyClientSMSDelegate, SBSRemoteAlertHandleObserver, STKIncomingCallUIStateObserver> {
    STKClass0SMSAlertSession * _currentSession;
    NSObject<OS_dispatch_queue> * _queue;
    STKIncomingCallUIStateMonitor * _queue_incomingCallStateMonitor;
    NSMutableArray * _queue_pendingAlertSessionsDueToInCallUI;
    STKCarrierSubscriptionMonitor * _subscriptionMonitor;
    CoreTelephonyClient * _telephonyClient;
}

@property (setter=_queue_setCurrentSession:, nonatomic, retain) STKClass0SMSAlertSession *currentSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) STKCarrierSubscriptionMonitor *subscriptionMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_enqueueSession:(id)arg1;
- (void)_queue_handleClass0SMSBody:(id)arg1 address:(id)arg2 responder:(id)arg3 forSlot:(long long)arg4;
- (void)_queue_setCurrentSession:(id)arg1;
- (id)currentSession;
- (void)handleClass0SMSBody:(id)arg1 address:(id)arg2 responder:(id)arg3 forSlot:(long long)arg4;
- (void)incomingCallUIStateDidChange:(bool)arg1;
- (id)initWithSubscriptionMonitor:(id)arg1;
- (id)remoteAlertDescriptorForSession:(id)arg1;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)smsMessageClass0Received:(id)arg1 body:(id)arg2 address:(id)arg3;
- (id)subscriptionMonitor;

@end
