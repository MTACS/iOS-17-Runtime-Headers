
@interface SAServer : NSObject <NSXPCListenerDelegate, SALocationManagerProtocol, SAServerProtocol, SATelephonyDelegateProtocol> {
    SABundleManager * _bundleManager;
    NSMutableArray * _clientConnections;
    SACriticalNotification * _criticalNotification;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_semaphore> * _locationAcquired;
    SALocationManager * _locationManager;
    NSObject<OS_dispatch_queue> * _messageQueue;
    CLLocation * _mostRecentLocation;
    SATelephonyManager * _telephonyManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *locationAcquired;
@property (nonatomic, copy) SACrashDetectionEvent *mostRecentCrashEvent;
@property (nonatomic, copy) CLLocation *mostRecentLocation;
@property (nonatomic) long long numberOfVoiceCallAttempts;
@property (readonly) Class superclass;

+ (double)emergencyResponseVoiceCallTimeout;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dialVoiceCallToPhoneNumber:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)iterateClientProxies:(id /* block */)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)locationAcquired;
- (void)locationManager:(id)arg1 didUpdateLocation:(id)arg2;
- (id)mostRecentCrashEvent;
- (id)mostRecentLocation;
- (void)notifyCrashDetectedAt:(id)arg1 resolvedAt:(id)arg2 resolvedWithResponse:(long long)arg3;
- (void)notifyCrashDetectedAt:(id)arg1 resolvedAt:(id)arg2 resolvedWithResponse:(long long)arg3 completion:(id /* block */)arg4;
- (long long)numberOfVoiceCallAttempts;
- (void)recoverMostRecentCrashEvent;
- (void)requestCrashDetectionAuthorization:(id /* block */)arg1;
- (void)requestMostRecentCrashDetectionEvent;
- (void)sendCrashEventToClients;
- (void)setLocationAcquired:(id)arg1;
- (void)setMostRecentCrashEvent:(id)arg1;
- (void)setMostRecentLocation:(id)arg1;
- (void)setNumberOfVoiceCallAttempts:(long long)arg1;
- (void)startMonitoringLocation;
- (void)stopMonitoringLocation;
- (void)telephonyManager:(id)arg1 didUpdateVoiceCallStatus:(long long)arg2;
- (void)updateMostRecentCrashDetectionEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)updateVoiceCallStatus:(long long)arg1;

@end
