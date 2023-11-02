
@interface IMCloudKitMockSyncState : NSObject {
    bool  _IMCloudKitIsEligibleForTruthZone;
    bool  _IMCloudKitIsInExitState;
    bool  _IMCloudKitIsRemovedFromBackup;
    bool  _IMCloudKitIsSyncing;
    bool  _IMCloudKitStartingDisableDevices;
    long long  _IMCloudKitStartingEnabledSettingChange;
    bool  _IMCloudKitStartingInitialSync;
    bool  _IMCloudKitStartingPeriodicSync;
    long long  _IMCloudKitSyncControllerSyncRecordType;
    unsigned long long  _IMCloudKitSyncControllerSyncState;
    long long  _IMCloudKitSyncControllerSyncType;
    NSDate * _IMCloudKitSyncDate;
    NSArray * _IMCloudKitSyncErrors;
    bool  _IMCloudKitSyncPaused;
    bool  _IMCloudKitSyncingEnabled;
}

@property bool IMCloudKitIsEligibleForTruthZone;
@property bool IMCloudKitIsInExitState;
@property bool IMCloudKitIsRemovedFromBackup;
@property bool IMCloudKitIsSyncing;
@property bool IMCloudKitStartingDisableDevices;
@property long long IMCloudKitStartingEnabledSettingChange;
@property bool IMCloudKitStartingInitialSync;
@property bool IMCloudKitStartingPeriodicSync;
@property long long IMCloudKitSyncControllerSyncRecordType;
@property unsigned long long IMCloudKitSyncControllerSyncState;
@property long long IMCloudKitSyncControllerSyncType;
@property (retain) NSDate *IMCloudKitSyncDate;
@property (retain) NSArray *IMCloudKitSyncErrors;
@property bool IMCloudKitSyncPaused;
@property bool IMCloudKitSyncingEnabled;

- (void).cxx_destruct;
- (bool)IMCloudKitIsEligibleForTruthZone;
- (bool)IMCloudKitIsInExitState;
- (bool)IMCloudKitIsRemovedFromBackup;
- (bool)IMCloudKitIsSyncing;
- (bool)IMCloudKitStartingDisableDevices;
- (long long)IMCloudKitStartingEnabledSettingChange;
- (bool)IMCloudKitStartingInitialSync;
- (bool)IMCloudKitStartingPeriodicSync;
- (long long)IMCloudKitSyncControllerSyncRecordType;
- (unsigned long long)IMCloudKitSyncControllerSyncState;
- (long long)IMCloudKitSyncControllerSyncType;
- (id)IMCloudKitSyncDate;
- (id)IMCloudKitSyncErrors;
- (bool)IMCloudKitSyncPaused;
- (bool)IMCloudKitSyncingEnabled;
- (id)convertToDictionary;
- (void)setIMCloudKitIsEligibleForTruthZone:(bool)arg1;
- (void)setIMCloudKitIsInExitState:(bool)arg1;
- (void)setIMCloudKitIsRemovedFromBackup:(bool)arg1;
- (void)setIMCloudKitIsSyncing:(bool)arg1;
- (void)setIMCloudKitStartingDisableDevices:(bool)arg1;
- (void)setIMCloudKitStartingEnabledSettingChange:(long long)arg1;
- (void)setIMCloudKitStartingInitialSync:(bool)arg1;
- (void)setIMCloudKitStartingPeriodicSync:(bool)arg1;
- (void)setIMCloudKitSyncControllerSyncRecordType:(long long)arg1;
- (void)setIMCloudKitSyncControllerSyncState:(unsigned long long)arg1;
- (void)setIMCloudKitSyncControllerSyncType:(long long)arg1;
- (void)setIMCloudKitSyncDate:(id)arg1;
- (void)setIMCloudKitSyncErrors:(id)arg1;
- (void)setIMCloudKitSyncPaused:(bool)arg1;
- (void)setIMCloudKitSyncingEnabled:(bool)arg1;

@end
