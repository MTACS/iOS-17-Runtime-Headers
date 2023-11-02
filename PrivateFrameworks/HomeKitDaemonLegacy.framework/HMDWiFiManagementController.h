
@interface HMDWiFiManagementController : HMFObject <HMFLogging, HMFTimerDelegate> {
    HMDHAPAccessory * _accessory;
    id /* block */  _reconfigurationCompletion;
    unsigned short  _reconfigurationCookie;
    HMDWiFiReconfigurationLogEvent * _reconfigurationLogEvent;
    long long  _reconfigurationState;
    HMFTimer * _reconfigurationTimeoutTimer;
    id /* block */  _reconfigurationVerificationCallback;
    HMDService * _service;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDHAPAccessory *accessory;
@property (readonly) long long capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, copy) id /* block */ reconfigurationCompletion;
@property (nonatomic) unsigned short reconfigurationCookie;
@property (nonatomic, retain) HMDWiFiReconfigurationLogEvent *reconfigurationLogEvent;
@property (nonatomic) long long reconfigurationState;
@property (nonatomic, retain) HMFTimer *reconfigurationTimeoutTimer;
@property (nonatomic, copy) id /* block */ reconfigurationVerificationCallback;
@property (readonly) HMDService *service;
@property (readonly) Class superclass;
@property (readonly) bool supportsStationConfiguration;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)sharedPSKForNetworkWithSSID:(id)arg1;

- (void).cxx_destruct;
- (void)_accessoryDidBecomeReachable:(id)arg1;
- (void)_commitConfigurationUpdate;
- (void)_performWiFiConfigurationControlRequest:(id)arg1 withDescription:(id)arg2 completion:(id /* block */)arg3;
- (void)_reconfigurationCompletedWithSuccess:(bool)arg1 error:(id)arg2;
- (id)accessory;
- (long long)capabilities;
- (id)initWithAccessory:(id)arg1 wiFiTransportService:(id)arg2 workQueue:(id)arg3;
- (id)logIdentifier;
- (id)notificationCenter;
- (id /* block */)reconfigurationCompletion;
- (unsigned short)reconfigurationCookie;
- (id)reconfigurationLogEvent;
- (long long)reconfigurationState;
- (id)reconfigurationTimeoutTimer;
- (id /* block */)reconfigurationVerificationCallback;
- (void)reconfigureWithSSID:(id)arg1 PSK:(id)arg2 logEvent:(id)arg3 completion:(id /* block */)arg4;
- (void)safelyReconfigureWithSSID:(id)arg1 PSK:(id)arg2 verificationCallback:(id /* block */)arg3 logEvent:(id)arg4 completion:(id /* block */)arg5;
- (id)service;
- (void)setReconfigurationCompletion:(id /* block */)arg1;
- (void)setReconfigurationCookie:(unsigned short)arg1;
- (void)setReconfigurationLogEvent:(id)arg1;
- (void)setReconfigurationState:(long long)arg1;
- (void)setReconfigurationTimeoutTimer:(id)arg1;
- (void)setReconfigurationVerificationCallback:(id /* block */)arg1;
- (bool)supportsStationConfiguration;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
