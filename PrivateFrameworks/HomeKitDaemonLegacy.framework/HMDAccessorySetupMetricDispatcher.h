
@interface HMDAccessorySetupMetricDispatcher : HMFObject <HMEEventConsumer, HMFLogging, HMFTimerDelegate> {
    unsigned long long  _accessoryRemovedTime;
    unsigned long long  _addAccessoryFinishTime;
    <HMMLogEventSubmitting> * _dispatcher;
    unsigned long long  _firstSettingTime;
    HMDHome * _home;
    HMDHomeManager * _homeManager;
    bool  _isRepairSession;
    unsigned long long  _languageSettingTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _logger;
    NSUUID * _setupSessionIdentifier;
    bool  _submitted;
    HMFTimer * _timer;
    <HMDDeviceSetupTrackingInfo> * _trackingInfo;
}

@property (readonly) unsigned long long accessoryRemovedTime;
@property (readonly) unsigned long long addAccessoryFinishTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long firstSettingTime;
@property (readonly) unsigned long long hash;
@property (readonly) bool isRepairSession;
@property (readonly) unsigned long long languageSettingTime;
@property (nonatomic, readonly, copy) NSUUID *setupSessionIdentifier;
@property (readonly) bool submitted;
@property (readonly) Class superclass;
@property (readonly) <HMDDeviceSetupTrackingInfo> *trackingInfo;

+ (id)logCategory;

- (void).cxx_destruct;
- (unsigned long long)accessoryRemovedTime;
- (unsigned long long)addAccessoryFinishTime;
- (void)addHome:(id)arg1;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (unsigned long long)firstSettingTime;
- (id)initWithTrackingInfo:(id)arg1 setupSessionIdentifier:(id)arg2 homeManager:(id)arg3;
- (id)initWithTrackingInfo:(id)arg1 setupSessionIdentifier:(id)arg2 homeManager:(id)arg3 logEventDispatcher:(id)arg4 timerFactory:(id /* block */)arg5;
- (bool)isRepairSession;
- (unsigned long long)languageSettingTime;
- (id)logIdentifier;
- (void)markAccessoryAddCompleted;
- (void)markAccessoryRemoved;
- (void)markFirstSettingObserved;
- (void)markLanguageSettingObserved;
- (void)markRepairSessionComplete;
- (id)setupSessionIdentifier;
- (void)submit;
- (bool)submitted;
- (void)timerDidFire:(id)arg1;
- (id)trackingInfo;

@end
