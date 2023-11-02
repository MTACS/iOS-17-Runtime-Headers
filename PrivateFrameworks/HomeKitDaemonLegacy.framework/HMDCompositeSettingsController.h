
@interface HMDCompositeSettingsController : NSObject <HMDCompositeSettingsController, HMDCompositeSettingsControllerPrivate, HMDCompositeSettingsDatabaseAdapterDelegate, HMFLogging> {
    bool  _configured;
    <HMDCompositeSettingsDatabaseAdapter> * _databaseAdapter;
    <HMDCompositeSettingsControllerDelegate> * _delegate;
    NSUUID * _homeUUID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMMLogEventSubmitting> * _logEventDispatcher;
    Class  _modelClass;
    NSArray * _settingKeyPathBlockList;
    NSDictionary * _settingMetadata;
    NSDictionary * _settings;
    NSUUID * _uuid;
    HMDCompositeSettingsZoneManager * _zoneManager;
}

@property bool configured;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCompositeSettingsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *homeUUID;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid;
@property HMDCompositeSettingsZoneManager *zoneManager;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_createSettingsFromModel:(id)arg1;
- (id)_settingFromSetting:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (bool)configured;
- (void)database:(id)arg1 didConfigureWithError:(id)arg2;
- (void)database:(id)arg1 didProcessCreationForModel:(id)arg2;
- (void)database:(id)arg1 didProcessDeletionForModel:(id)arg2;
- (void)database:(id)arg1 didProcessUpdateForModel:(id)arg2;
- (id)delegate;
- (void)fetchSettingForKeyPath:(id)arg1 callerVersion:(id)arg2 callerPrivilege:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)fetchSettingsForKeyPaths:(id)arg1 callerVersion:(id)arg2 callerPrivilege:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)fetchSynchronousSettingsForKeyPaths:(id)arg1 callerVersion:(id)arg2 callerPrivilege:(unsigned long long)arg3;
- (id)homeUUID;
- (id)initWithDatabaseAdapter:(id)arg1 model:(Class)arg2 homeUUID:(id)arg3 ownerUUID:(id)arg4 logEventDispatcher:(id)arg5 settingKeyPathBlockList:(id)arg6;
- (id)initWithDatabaseAdapter:(id)arg1 model:(Class)arg2 homeUUID:(id)arg3 ownerUUID:(id)arg4 settingKeyPathBlockList:(id)arg5;
- (id)logIdentifier;
- (void)setConfigured:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setZoneManager:(id)arg1;
- (void)start;
- (void)updateSettingForKeyPath:(id)arg1 value:(id)arg2 callerVersion:(id)arg3 completion:(id /* block */)arg4;
- (void)updateSettingsForKeyPaths:(id)arg1 callerVersion:(id)arg2 completion:(id /* block */)arg3;
- (id)uuid;
- (id)zoneManager;

@end
