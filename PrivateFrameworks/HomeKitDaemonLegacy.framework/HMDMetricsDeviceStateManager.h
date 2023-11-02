
@interface HMDMetricsDeviceStateManager : HMFObject <HMDLogEventDailyTaskRunner, HMDMetricsDeviceStateProvider> {
    unsigned long long  _bitMappedDuplicateKeys;
    unsigned long long  _bitMappedMissingKeys;
    unsigned long long  _currentDataSyncState;
    unsigned long long  _currentHomeManagerStatus;
    HMMDateProvider * _dateProvider;
    long long  _deviceDaysSinceSoftwareUpdate;
    <HAPSystemKeyCountProvider> * _keyCountProvider;
    NSDate * _lastSoftwareUpdateDate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMMLogEventSubmitting> * _logEventSubmitter;
}

@property (readonly) unsigned long long bitMappedDuplicateKeys;
@property (readonly) unsigned long long bitMappedMissingKeys;
@property (readonly) unsigned long long currentDataSyncState;
@property (readonly) unsigned long long currentHomeManagerStatus;
@property (nonatomic, readonly) HMMDateProvider *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long deviceDaysSinceSoftwareUpdate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HAPSystemKeyCountProvider> *keyCountProvider;
@property (nonatomic, readonly) NSDate *lastSoftwareUpdateDate;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)bitMappedDuplicateKeys;
- (unsigned long long)bitMappedMissingKeys;
- (unsigned long long)bitMaskForKeyType:(unsigned long long)arg1;
- (unsigned long long)currentDataSyncState;
- (unsigned long long)currentHomeManagerStatus;
- (id)dateProvider;
- (long long)daysSinceSoftwareUpdateEnumForInteger:(long long)arg1;
- (long long)deviceDaysSinceSoftwareUpdate;
- (unsigned long long)duplicateKeysBitMapFromKeyCounts:(id)arg1;
- (void)handleHomeDataLoaded;
- (id)initWithCurrentSoftwareVersion:(id)arg1 logEventSubmitter:(id)arg2 dailyScheduler:(id)arg3 dateProvider:(id)arg4 keyCountProvider:(id)arg5 userDefaults:(id)arg6;
- (id)initWithLogEventSubmitter:(id)arg1 dailyScheduler:(id)arg2 dateProvider:(id)arg3;
- (id)keyCountProvider;
- (id)lastSoftwareUpdateDate;
- (id)logEventSubmitter;
- (unsigned long long)missingKeysBitMapFromKeyCounts:(id)arg1;
- (void)registerForNotifications;
- (void)runDailyTask;
- (void)updateCachedPairingKeyStates;
- (void)updateWithDataSyncState:(unsigned long long)arg1;
- (void)updateWithHomeManagerStatus:(unsigned long long)arg1;

@end
