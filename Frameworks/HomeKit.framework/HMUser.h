
@interface HMUser : NSObject <HFHomeKitObject, HFStateDumpBuildable, HMFLogging, HMFMessageReceiver, HMObjectMerge, HMSettingsContainer, NSSecureCoding> {
    HMAnnounceUserSettings * _announceUserSettings;
    HMAssistantAccessControl * _assistantAccessControl;
    _HMContext * _context;
    bool  _currentUser;
    <HMUserDelegatePrivate> * _delegate;
    HMHome * _home;
    HMHomeAccessControl * _homeAccessControl;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMMediaContentProfileAccessControl * _mediaContentProfileAccessControl;
    NSString * _name;
    bool  _needsiTunesMultiUserRepair;
    HMFPairingIdentity * _pairingIdentity;
    HMMutableArray * _pendingAccessoryInvitations;
    NSDictionary * _pendingPrivateSettings;
    NSDictionary * _pendingSharedSettings;
    HMPhotosPersonManager * _photosPersonManager;
    HMPhotosPersonManagerSettings * _photosPersonManagerSettings;
    HMSettings * _privateSettings;
    HMUserSettingsAdapter * _privateSettingsAdapter;
    HMSettingsController * _privateSettingsController;
    NSString * _senderCorrelationIdentifier;
    HMSettings * _settings;
    HMSettingsController * _settingsController;
    bool  _settingsInitialized;
    HMUserSettingsAdapter * _sharedSettingsAdapter;
    bool  _supportsSharedHomeHH2AutoMigration;
    NSUUID * _uniqueIdentifier;
    NSString * _userID;
    HMUserListeningHistoryUpdateControl * _userListeningHistoryUpdateControl;
    NSUUID * _uuid;
}

@property (retain) HMAnnounceUserSettings *announceUserSettings;
@property (copy) HMAssistantAccessControl *assistantAccessControl;
@property (retain) _HMContext *context;
@property (getter=isCurrentUser, nonatomic) bool currentUser;
@property (readonly, copy) NSString *debugDescription;
@property <HMUserDelegatePrivate> *delegate;
@property (nonatomic, readonly) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <IDSDestinationProtocol> *hmu_idsDestination;
@property (nonatomic) HMHome *home;
@property (nonatomic, retain) HMHomeAccessControl *homeAccessControl;
@property (copy) HMMediaContentProfileAccessControl *mediaContentProfileAccessControl;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, copy) NSString *name;
@property bool needsiTunesMultiUserRepair;
@property (copy) HMFPairingIdentity *pairingIdentity;
@property (retain) NSDictionary *pendingPrivateSettings;
@property (retain) NSDictionary *pendingSharedSettings;
@property (readonly, copy) HMPhotosPersonManagerSettings *personManagerSettings;
@property (readonly) HMPhotosPersonManager *photosPersonManager;
@property (retain) HMPhotosPersonManager *photosPersonManager;
@property (readonly, copy) HMPhotosPersonManagerSettings *photosPersonManagerSettings;
@property (copy) HMPhotosPersonManagerSettings *photosPersonManagerSettings;
@property (readonly) HMSettings *privateSettings;
@property (retain) HMUserSettingsAdapter *privateSettingsAdapter;
@property (readonly) HMSettingsController *privateSettingsController;
@property (readonly) HMSettings *settings;
@property (readonly) HMSettingsController *settingsController;
@property (readonly) bool settingsInitialized;
@property (retain) HMUserSettingsAdapter *sharedSettingsAdapter;
@property (readonly) Class superclass;
@property bool supportsSharedHomeHH2AutoMigration;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, copy) NSString *userID;
@property (nonatomic, readonly, copy) IDSURI *userIDSURI;
@property (copy) HMUserListeningHistoryUpdateControl *userListeningHistoryUpdateControl;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (id)_filterAccessoryInvitationsFromOutgoingInvitation:(id)arg1;
- (void)_handleMultiUserStatusChangedNotification:(id)arg1;
- (void)_handleUpdatedAssistantAccessControl:(id)arg1;
- (void)_mergeUserPairingIdentityIfNecessary:(id)arg1 withNewPairingIdentity:(id)arg2;
- (bool)_mergeWithNewAccessoryInvitations:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)_updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)announceUserSettings;
- (id)assistantAccessControl;
- (id)assistantAccessControlForHome:(id)arg1;
- (void)configurePhotosPersonManagerWithSettings:(id)arg1;
- (id)context;
- (void)createConfigureAndMergePrivateSettingsIfNecessary:(id)arg1 withContext:(id)arg2;
- (void)createConfigureAndMergeSharedSettingsIfNecessary:(id)arg1 withContext:(id)arg2;
- (void)createHH1PrivateSettingsControllerIfNecessary;
- (void)createHH1SettingsControllerIfNecessary;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchAllPairingIdentitiesWithCompletionHandler:(id /* block */)arg1;
- (void)fetchShareLookupInfo:(id /* block */)arg1;
- (id)home;
- (id)homeAccessControl;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 homeAccessControl:(id)arg5;
- (bool)isCurrentUser;
- (id)logIdentifier;
- (id)mediaContentProfileAccessControl;
- (id)mediaContentProfileAccessControlForHome:(id)arg1;
- (bool)mergeFromNewObject:(id)arg1;
- (bool)mergePendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)name;
- (bool)needsiTunesMultiUserRepair;
- (id)pairingIdentity;
- (void)pairingIdentityWithCompletionHandler:(id /* block */)arg1;
- (id)pendingAccessoryInvitations;
- (id)pendingPrivateSettings;
- (id)pendingSharedSettings;
- (id)personManagerSettings;
- (id)photosPersonManager;
- (id)photosPersonManagerSettings;
- (id)privateSettings;
- (id)privateSettingsAdapter;
- (id)privateSettingsController;
- (void)sendClientShareRepairRequest:(id)arg1 containerID:(id)arg2 completion:(id /* block */)arg3;
- (void)sendClientShareURL:(id)arg1 shareToken:(id)arg2 containerID:(id)arg3 fromUser:(id)arg4 completion:(id /* block */)arg5;
- (id)senderCorrelationIdentifier;
- (void)setAnnounceUserSettings:(id)arg1;
- (void)setAssistantAccessControl:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentUser:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeAccessControl:(id)arg1;
- (void)setMediaContentProfileAccessControl:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNeedsiTunesMultiUserRepair:(bool)arg1;
- (void)setNeedsiTunesMultiUserRepair:(bool)arg1 completion:(id /* block */)arg2;
- (void)setPairingIdentity:(id)arg1;
- (void)setPendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1;
- (void)setPendingPrivateSettings:(id)arg1;
- (void)setPendingSharedSettings:(id)arg1;
- (void)setPhotosPersonManager:(id)arg1;
- (void)setPhotosPersonManagerSettings:(id)arg1;
- (void)setPrivateSettingsAdapter:(id)arg1;
- (void)setSharedSettingsAdapter:(id)arg1;
- (void)setSupportsSharedHomeHH2AutoMigration:(bool)arg1;
- (void)setUserID:(id)arg1;
- (void)setUserListeningHistoryUpdateControl:(id)arg1;
- (id)settings;
- (id)settingsController;
- (bool)settingsInitialized;
- (id)sharedSettingsAdapter;
- (bool)supportsSharedHomeHH2AutoMigration;
- (id)uniqueIdentifier;
- (void)updateAnnounceUserSettings:(id)arg1 forHome:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateAssistantAccessControl:(id)arg1 forHome:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateHomeAccessControl:(bool)arg1 remoteAccess:(bool)arg2 announceAccess:(bool)arg3 camerasAccess:(id)arg4;
- (void)updateMediaContentProfileAccessControl:(id)arg1 forHome:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updatePersonManagerSettings:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePhotosPersonManagerSettings:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateUserListeningHistoryUpdateControl:(id)arg1 forHome:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)userID;
- (id)userIDSURI;
- (id)userListeningHistoryUpdateControl;
- (id)userListeningHistoryUpdateControlForHome:(id)arg1;
- (id)userSettingsForHome:(id)arg1;
- (id)uuid;

// Image: /System/Library/Frameworks/MediaSetup.framework/MediaSetup

- (bool)_settingForKeyPath:(id)arg1 home:(id)arg2;
- (bool)ms_allowiTunesAccountInHome:(id)arg1;
- (bool)ms_voiceRecognitionEnabledInHome:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DropInCore.framework/DropInCore

- (id)description;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (unsigned long long)hf_getPhotosLibrarySettingsStatus;
- (bool)hf_isImportingPhotosLibraryEnabledForFaceRecognition;
- (bool)hf_isSharingPhotosLibraryEnabledForFaceRecognition;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeDataModel.framework/HomeDataModel

- (id)initWithName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeMessagingUtils.framework/HomeMessagingUtils

+ (id)hmu_uniqueIdentifiersFromUsers:(id)arg1;

- (id)hmu_idsDestination;

@end
