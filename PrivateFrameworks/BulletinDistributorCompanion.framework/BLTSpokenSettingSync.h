
@interface BLTSpokenSettingSync : NSObject {
    NSDate * _localGlobalSpokenSettingDate;
    bool  _localGlobalSpokenSettingEnabled;
    NSObject<OS_dispatch_queue> * _queue;
    NSDate * _remoteGlobalSpokenSettingDate;
    bool  _remoteGlobalSpokenSettingEnabled;
    NSURL * _remoteSettingStoreURL;
    BBSettingsGateway * _settingsGateway;
    BLTSettingSyncServer * _syncServer;
    unsigned long long  _updatingLocalStateFromRemoteCount;
}

@property (nonatomic, retain) NSDate *localGlobalSpokenSettingDate;
@property (nonatomic) bool localGlobalSpokenSettingEnabled;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSDate *remoteGlobalSpokenSettingDate;
@property (nonatomic) bool remoteGlobalSpokenSettingEnabled;
@property (nonatomic, retain) NSURL *remoteSettingStoreURL;
@property (nonatomic, retain) BBSettingsGateway *settingsGateway;
@property (nonatomic, retain) BLTSettingSyncServer *syncServer;
@property (nonatomic) unsigned long long updatingLocalStateFromRemoteCount;

- (void).cxx_destruct;
- (bool)_queue_isUpdatingLocalStateFromRemote;
- (void)_queue_readSettings;
- (void)_queue_resolveState;
- (void)_queue_setNewLocalStateFromRemote:(bool)arg1;
- (void)_queue_setUpdatingLocalStateFromRemote;
- (void)_queue_synchronizeSettingsWithLocalEnabled:(bool)arg1;
- (bool)_queue_updateLocalGlobalSpokenSettingEnabledFromUser:(bool)arg1;
- (bool)_queue_updateLocalSetting;
- (void)_queue_writeLocalSetting;
- (void)_queue_writeRemoteSetting;
- (id)_remoteSettingStoreURL;
- (void)bbUpdateLocalGlobalSpokenSettingEnabled:(long long)arg1;
- (id)initWithSettingsGateway:(id)arg1 syncServer:(id)arg2;
- (id)localGlobalSpokenSettingDate;
- (bool)localGlobalSpokenSettingEnabled;
- (id)queue;
- (id)remoteGlobalSpokenSettingDate;
- (bool)remoteGlobalSpokenSettingEnabled;
- (id)remoteSettingStoreURL;
- (void)setLocalGlobalSpokenSettingDate:(id)arg1;
- (void)setLocalGlobalSpokenSettingEnabled:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoteGlobalSpokenSettingDate:(id)arg1;
- (void)setRemoteGlobalSpokenSettingEnabled:(bool)arg1;
- (void)setRemoteSettingStoreURL:(id)arg1;
- (void)setSettingsGateway:(id)arg1;
- (void)setSyncServer:(id)arg1;
- (void)setUpdatingLocalStateFromRemoteCount:(unsigned long long)arg1;
- (id)settingsGateway;
- (id)syncServer;
- (void)transportUpdateRemoteGlobalSpokenSettingEnabled:(bool)arg1 date:(id)arg2;
- (unsigned long long)updatingLocalStateFromRemoteCount;

@end
