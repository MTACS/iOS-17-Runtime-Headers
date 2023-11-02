
@interface VTTriggerEventMonitor : NSObject <VTTriggerEventMonitorDelegate> {
    NSXPCConnection * _connection;
    int  _notifyToken;
    int  _notifyTokenLegacyEarlyDetect;
    int  _notifyTokenLegacyTrigger;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_attemptConnection;
- (void)_attemptConnectionInQueue;
- (void)_earlyDetected;
- (void)_enableTriggerEventXPCNotification:(bool)arg1;
- (void)_invalidateConnection;
- (void)_voiceTriggered;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)earlyDetected;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)voiceTriggered;

@end
