
@interface HDSPSyncedDefaults : NSObject <HDSPSyncedUserDefaults, HDSPSyncedUserDefaultsExternalChangeDelegate> {
    <HDSPSyncedUserDefaults> * _cloudDefaults;
    HDSPSyncedDefaultsConfiguration * _configuration;
    <HDSPSyncedUserDefaultsExternalChangeDelegate> * _delegate;
    HDSPEnvironment * _environment;
    NSMutableSet * _keysNeedingSynchronize;
    <HKSPUserDefaults> * _localDefaults;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HDSPSyncedUserDefaults> * _nanoDefaults;
    bool  _needsInitialSync;
    bool  _needsSyncFromCloud;
    HKSPAccumulator * _syncAccumulator;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDSPSyncedUserDefaultsExternalChangeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsInitialSync;
@property (nonatomic) bool needsSyncFromCloud;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool syncDisabled;

- (void).cxx_destruct;
- (void)_cloudDefaultsDidReceiveExternalChange;
- (void)_cloudDefaultsDidReceiveExternalChangeForKeys:(id)arg1;
- (id /* block */)_cloudDefaultsProvider;
- (id)_defaultsForKey:(id)arg1;
- (void)_differentialCloudKitSync;
- (void)_differentialCloudKitSyncForKeySet:(id)arg1;
- (void)_hksp_synchronizeKeys:(id)arg1;
- (void)_initialCloudKitSync;
- (void)_nanoDefaultsDidReceiveExternalChange;
- (void)_nanoDefaultsDidReceiveExternalChangeForKeys:(id)arg1;
- (id /* block */)_nanoDefaultsProvider;
- (void)_setDefaultForKey:(id)arg1 setBlock:(id /* block */)arg2;
- (void)_setDefaultForKey:(id)arg1 setBlock:(id /* block */)arg2 syncToCloudKit:(bool)arg3;
- (void)_syncCloudKitToLocal;
- (void)_syncKeysFromCloudKit:(id)arg1;
- (void)_syncKeysToCloudKit:(id)arg1;
- (void)_syncLocalToCloudKit;
- (void)_throttled_synchronizeKeys:(id)arg1;
- (void)_withLock:(id /* block */)arg1;
- (id)cloudKitDefaultsDictionaryRepresentation;
- (id)delegate;
- (void)hdsp_forceSynchronizeWithCompletion:(id /* block */)arg1;
- (void)hdsp_setExternalChangeDelegate:(id)arg1;
- (bool)hksp_boolForKey:(id)arg1;
- (id)hksp_dataForKey:(id)arg1;
- (id)hksp_dictionaryRepresentation;
- (id)hksp_dictionaryRepresentationForKeys:(id)arg1;
- (float)hksp_floatForKey:(id)arg1;
- (long long)hksp_integerForKey:(id)arg1;
- (id)hksp_objectForKey:(id)arg1;
- (void)hksp_removeObjectForKey:(id)arg1;
- (void)hksp_removeObjectsForKeys:(id)arg1;
- (void)hksp_removeObjectsForKeys:(id)arg1 syncToCloudKit:(bool)arg2;
- (void)hksp_reset;
- (void)hksp_saveDictionary:(id)arg1;
- (void)hksp_saveDictionary:(id)arg1 syncToCloudKit:(bool)arg2;
- (void)hksp_setBool:(bool)arg1 forKey:(id)arg2;
- (void)hksp_setFloat:(float)arg1 forKey:(id)arg2;
- (void)hksp_setInteger:(long long)arg1 forKey:(id)arg2;
- (void)hksp_setObject:(id)arg1 forKey:(id)arg2;
- (void)hksp_synchronize;
- (void)hksp_synchronizeKeys:(id)arg1;
- (id)initWithEnvironment:(id)arg1 configuration:(id)arg2;
- (id)initWithEnvironment:(id)arg1 configuration:(id)arg2 nanoDefaultsProvider:(id /* block */)arg3 cloudDefaultsProvider:(id /* block */)arg4 throttleInterval:(double)arg5;
- (id)localDefaultsDictionaryRepresentation;
- (bool)needsInitialSync;
- (bool)needsSyncFromCloud;
- (void)resetCloudData;
- (void)saveCloudDataVersion;
- (void)saveDataVersion;
- (void)setDelegate:(id)arg1;
- (void)setNeedsInitialSync:(bool)arg1;
- (void)setNeedsSyncFromCloud:(bool)arg1;
- (bool)syncDisabled;
- (void)syncedUserDefaults:(id)arg1 didChangeExternallyForKeys:(id)arg2;
- (void)syncedUserDefaultsDidChangeExternally:(id)arg1;

@end
