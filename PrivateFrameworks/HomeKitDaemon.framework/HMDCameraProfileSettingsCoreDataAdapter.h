
@interface HMDCameraProfileSettingsCoreDataAdapter : HMFObject <HMFLogging> {
    NSUUID * _cameraProfileSettingsModelID;
    NSUUID * _derivedPropertiesModelID;
    NSUUID * _hapAccessoryUUID;
    NSUUID * _homeUUID;
}

@property (readonly) NSUUID *cameraProfileSettingsModelID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUUID *derivedPropertiesModelID;
@property (readonly, copy) NSString *description;
@property (readonly) NSUUID *hapAccessoryUUID;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *homeUUID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)cameraProfileSettingsModelID;
- (id)derivedPropertiesModelID;
- (id)fetchCameraProfileSettingsModelWithError:(id*)arg1;
- (id)fetchDerivedPropertiesModelWithError:(id*)arg1;
- (id)hapAccessoryUUID;
- (id)homeUUID;
- (id)initWithHAPAccessory:(id)arg1 cameraProfileSettingsModelID:(id)arg2 derivedPropertiesModelID:(id)arg3;
- (id)logIdentifier;
- (void)updateCameraProfileSettingsModel:(id)arg1 completion:(id /* block */)arg2;
- (void)updateDerivedPropertiesModel:(id)arg1 completion:(id /* block */)arg2;

@end
