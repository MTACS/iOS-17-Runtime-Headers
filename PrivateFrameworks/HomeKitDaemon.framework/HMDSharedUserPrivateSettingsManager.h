
@interface HMDSharedUserPrivateSettingsManager : NSObject <HMDCoreDataCloudChangeListener, HMFLogging> {
    NSMutableDictionary * _characteristicAuthorizationDataByHomeModelID;
    HMDCoreDataCloudTransform * _cloudTransform;
    HMDCoreData * _coreData;
    HMDHomeManager * _homeManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _privateSettingsByHome;
    NSMutableDictionary * _sharedSettingsByHome;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)authorizationDataForCharacteristicWithInstanceID:(id)arg1 accessoryUUID:(id)arg2 homeModelID:(id)arg3;
- (void)didInsertOrUpdateModel:(id)arg1 changedProperties:(id)arg2;
- (id)initWithCoreData:(id)arg1 cloudTransform:(id)arg2 homeManager:(id)arg3;
- (id)settingsForHome:(id)arg1 ofType:(long long)arg2;
- (id)updateAuthorizationDataForCharacteristicWithInstanceID:(id)arg1 accessoryUUID:(id)arg2 homeModelID:(id)arg3 authorizationData:(id)arg4 context:(id)arg5;
- (id)updateSettingsForHome:(id)arg1 ofType:(long long)arg2 withValues:(id)arg3 context:(id)arg4;
- (void)willStartListeningWithContext:(id)arg1;

@end
