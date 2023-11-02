
@interface SBModelessSyncController : NSObject {
    ATConnection * _airTrafficConnection;
    int  _iCloudRestoreToken;
    bool  _isAppSyncing;
    bool  _isAutoSyncing;
    bool  _isSyncing;
    bool  _isWirelessSyncing;
    bool  _restoringFromICloud;
    int  _syncRegistrationToken;
}

@property (nonatomic, readonly) bool isAppSyncing;
@property (nonatomic, readonly) bool isAutoSyncing;
@property (nonatomic, readonly) bool isRestoringFromICloud;
@property (nonatomic, readonly) bool isSyncing;
@property (nonatomic, readonly) bool isWirelessSyncing;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_appSyncStateChanged;
- (void)_beginObservingICloudRestoreStatus;
- (void)_endObservingICloudRestoreStatus;
- (void)_iCloudStatusChanged;
- (void)_setAppSyncState:(bool)arg1;
- (void)_updateIconsForStateChange;
- (void)beginMonitoring;
- (void)connection:(id)arg1 updatedProgress:(id)arg2;
- (void)connectionWasInterrupted:(id)arg1;
- (void)dealloc;
- (void)endMonitoring;
- (void)gotLowBatteryWarning;
- (id)init;
- (bool)isAppSyncing;
- (bool)isAutoSyncing;
- (bool)isRestoringFromICloud;
- (bool)isSyncing;
- (bool)isWirelessSyncing;
- (void)setIsSyncing:(bool)arg1;

@end
