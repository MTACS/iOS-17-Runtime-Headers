
@interface HMDUserPhotosPersonDataManager : HMFObject <HMFLogging, HMFMessageReceiver> {
    HMDCloudPhotosSettingObserver * _cloudPhotosSettingObserver;
    NSUUID * _homeUUID;
    HMBLocalZone * _localZone;
    HMFMessageDispatcher * _messageDispatcher;
    NSNotificationCenter * _notificationCenter;
    HMDPhotosPersonManager * _personManager;
    id /* block */  _personManagerFactory;
    HMDPhotosPersonManagerSettingsModel * _settingsModel;
    bool  _supportsFaceClassification;
    HMDUser * _user;
    NSUUID * _userUUID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDCloudPhotosSettingObserver *cloudPhotosSettingObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *homeUUID;
@property (readonly) HMBLocalZone *localZone;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain) HMDPhotosPersonManager *personManager;
@property (copy) id /* block */ personManagerFactory;
@property (readonly, copy) HMPhotosPersonManagerSettings *settings;
@property (retain) HMDPhotosPersonManagerSettingsModel *settingsModel;
@property (readonly) Class superclass;
@property (readonly) bool supportsFaceClassification;
@property HMDUser *user;
@property (readonly, copy) NSUUID *userUUID;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSUUID *zoneUUID;

+ (id)defaultSettings;
+ (id)logCategory;
+ (id)settingsModelUUIDWithUUID:(id)arg1;

- (void).cxx_destruct;
- (void)_handleUpdatedSettingsModel:(id)arg1;
- (id)cloudPhotosSettingObserver;
- (void)configure;
- (void)configurePhotosPersonManagerWithSettingsModel:(id)arg1;
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg1;
- (void)handleUpdatePersonManagerSettingsMessage:(id)arg1;
- (void)handleUpdatedSettingsModel:(id)arg1;
- (void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg1;
- (void)handleUserRemoteAccessDidChangeNotification:(id)arg1;
- (id)homeUUID;
- (id)initWithUser:(id)arg1 messageDispatcher:(id)arg2 localZone:(id)arg3 workQueue:(id)arg4;
- (id)initWithUser:(id)arg1 messageDispatcher:(id)arg2 localZone:(id)arg3 workQueue:(id)arg4 supportsFaceClassification:(bool)arg5 notificationCenter:(id)arg6 cloudPhotosSettingObserver:(id)arg7;
- (id)localZone;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)notificationCenter;
- (id)persistedSettingsModel;
- (id)personManager;
- (id /* block */)personManagerFactory;
- (id)photosPersonManagerZoneUUIDForAnyOtherHomeCurrentUser;
- (void)recoverDueToUUIDChangeFromOldUUID:(id)arg1;
- (void)removeCloudDataDueToUserRemoval;
- (void)removeCloudDataForZoneUUID:(id)arg1 isDueToHomeGraphObjectRemoval:(bool)arg2;
- (void)setPersonManager:(id)arg1;
- (void)setPersonManagerFactory:(id /* block */)arg1;
- (void)setSettingsModel:(id)arg1;
- (void)setUser:(id)arg1;
- (id)settings;
- (id)settingsModel;
- (id)settingsModelUUID;
- (bool)supportsFaceClassification;
- (void)updateSettingsForCurrentCameraClipsAccess;
- (id)updateSettingsModelWithSettings:(id)arg1;
- (id)user;
- (id)userUUID;
- (id)workQueue;
- (id)zoneUUID;

@end
