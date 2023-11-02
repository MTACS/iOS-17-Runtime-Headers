
@interface HMDPhotosPersonManager : HMDPersonManager <HMDDatabaseZoneManagerDataSource, HMFLogging> {
    HMPhotosPersonManagerSettings * _dataUnavailableExternalSettings;
    HMDUser * _user;
}

@property (readonly, copy) HMPhotosPersonManagerSettings *dataUnavailableExternalSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMIExternalPersonManager *hmiPersonManager;
@property (readonly, copy) HMPhotosPersonManagerSettings *settings;
@property (readonly) Class superclass;
@property HMDUser *user;

+ (id)logCategory;
+ (id)zoneNameForZoneUUID:(id)arg1;

- (void).cxx_destruct;
- (id)dataUnavailableExternalSettings;
- (void)handleUpdatedSettings:(id)arg1;
- (id)hmiPersonManager;
- (id)initWithUUID:(id)arg1 zoneManager:(id)arg2 dataInterfaces:(id)arg3 workQueue:(id)arg4 user:(id)arg5;
- (id)initWithUser:(id)arg1 zoneUUID:(id)arg2 workQueue:(id)arg3;
- (bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (void)setUser:(id)arg1;
- (id)settings;
- (bool)sharesFaceClassifications;
- (id)user;
- (bool)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2;

@end
