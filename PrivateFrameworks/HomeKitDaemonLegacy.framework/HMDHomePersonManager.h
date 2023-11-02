
@interface HMDHomePersonManager : HMDPersonManager <HMDDatabaseZoneManagerDataSource, HMFLogging> {
    HMDHome * _home;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMIHomePersonManager *hmiPersonManager;
@property HMDHome *home;
@property (readonly, copy) HMHomePersonManagerSettings *settings;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)zoneNameForZoneUUID:(id)arg1;

- (void).cxx_destruct;
- (void)configureWithHome:(id)arg1;
- (void)handleUpdatedSettings:(id)arg1;
- (void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg1;
- (void)handleUserRemoteAccessDidChangeNotification:(id)arg1;
- (id)hmiPersonManager;
- (id)home;
- (id)initWithHome:(id)arg1 zoneUUID:(id)arg2 workQueue:(id)arg3;
- (id)initWithUUID:(id)arg1 zoneManager:(id)arg2 dataInterfaces:(id)arg3 workQueue:(id)arg4 home:(id)arg5;
- (bool)manager:(id)arg1 shouldGrantWriteAccessToUser:(id)arg2;
- (bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (void)setHome:(id)arg1;
- (id)settings;
- (bool)sharesFaceClassifications;
- (bool)syncsPersonData;
- (bool)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2;

@end
