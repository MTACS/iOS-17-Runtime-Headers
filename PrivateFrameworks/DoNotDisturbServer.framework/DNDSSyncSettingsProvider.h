
@interface DNDSSyncSettingsProvider : NSObject {
    NPSDomainAccessor * _accessor;
    <DNDSSyncSettingsProviderDelegate> * _delegate;
    bool  _initialized;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    DNDSSyncSettings * _syncSettings;
}

@property (nonatomic) <DNDSSyncSettingsProviderDelegate> *delegate;
@property (copy) DNDSSyncSettings *syncSettings;

- (void).cxx_destruct;
- (void)_beginMonitoringForChanges;
- (void)_endMonitoringForChanges;
- (bool)_isCloudSyncPreferenceEnabled;
- (id)_lock_accessor;
- (bool)_lock_isCloudSyncPreferenceEnabled;
- (bool)_lock_isPairSyncPreferenceEnabled;
- (void)_lock_setCompanionCloudSyncPreferenceEnabled:(bool)arg1;
- (void)_lock_updateCompanionCloudSyncPreference;
- (void)_lock_updatePairSyncPreferences;
- (void)_lock_updateSyncSettingsIfNewSettingsDiffer:(id)arg1;
- (void)_updateCloudSyncPreferences;
- (void)_updatePairSyncPreferences;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pairedDeviceDidChange;
- (void)setDelegate:(id)arg1;
- (void)setPairSyncEnabled:(bool)arg1;
- (void)setSyncSettings:(id)arg1;
- (id)syncSettings;

@end
