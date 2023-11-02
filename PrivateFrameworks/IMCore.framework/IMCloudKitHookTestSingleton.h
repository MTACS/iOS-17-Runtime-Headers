
@interface IMCloudKitHookTestSingleton : IMSingletonOverride {
    long long  _isChangingEnabledState;
    bool  _isDisablingDevices;
    bool  _isStartingSync;
    bool  _rampedIntoTruthZone;
    unsigned long long  _syncControllerSyncState;
    NSDictionary * _syncStats;
    long long  _syncType;
    IMCloudKitMockSyncState * _testState;
}

@property (nonatomic, retain) NSArray *IMCloudKitSyncErrors;
@property (nonatomic) bool eligibleForTruthZone;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) long long isChangingEnabledState;
@property (nonatomic) bool isDisablingDevices;
@property (nonatomic) bool isStartingSync;
@property (nonatomic, retain) NSDate *lastSyncDate;
@property (nonatomic) bool rampedIntoTruthZone;
@property (nonatomic) unsigned long long syncControllerSyncState;
@property (nonatomic, retain) NSDictionary *syncStats;
@property (nonatomic) long long syncType;
@property (getter=isSyncing, nonatomic) bool syncing;
@property (nonatomic, retain) IMCloudKitMockSyncState *testState;

+ (id)logHandle;

- (void).cxx_destruct;
- (id)IMCloudKitSyncErrors;
- (bool)eligibleForTruthZone;
- (void)fetchSyncStateStatistics;
- (id)init;
- (void)initiatePeriodicSync;
- (long long)isChangingEnabledState;
- (bool)isDisablingDevices;
- (bool)isEnabled;
- (bool)isInExitState;
- (bool)isStartingSync;
- (bool)isSyncing;
- (id)lastSyncDate;
- (id)logHandle;
- (bool)rampedIntoTruthZone;
- (void)sendSyncChangedEvent;
- (void)setControllerSyncState:(unsigned long long)arg1;
- (void)setControllerSyncType:(long long)arg1;
- (void)setEligibleForTruthZone:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIMCloudKitSyncErrors:(id)arg1;
- (void)setIsChangingEnabledState:(long long)arg1;
- (void)setIsDisablingDevices:(bool)arg1;
- (void)setIsInExitState:(bool)arg1;
- (void)setIsStartingSync:(bool)arg1;
- (void)setLastSyncDate:(id)arg1;
- (void)setRampedIntoTruthZone:(bool)arg1;
- (void)setSyncControllerSyncState:(unsigned long long)arg1;
- (void)setSyncStats:(id)arg1;
- (void)setSyncType:(long long)arg1;
- (void)setSyncing:(bool)arg1;
- (void)setTestState:(id)arg1;
- (void)startUserInitiatedSync;
- (unsigned long long)syncControllerSyncState;
- (id)syncStateDictionary;
- (id)syncStats;
- (long long)syncType;
- (id)testState;

@end
