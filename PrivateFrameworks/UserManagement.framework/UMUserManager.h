
@interface UMUserManager : NSObject <UMUserKeybagOpaqueDataManagement_Private, UMUserListUpdateObserver, UMUserManagement, UMUserManagement_Private, UMUserPersonaAttributesList, UMUserPersonaLoginSessionManagement, UMUserPersonaManagement, UMUserSessionProvisioning, UMUserSwitchManagement, UMUserSwitchManagement_Private, UMUserVolumeMigration> {
    NSArray * _allUsers;
    UMGenerationCache * _personaGeneration;
    bool  _switchIsOccurring;
    <UMUserListUpdateObserver> * _userListUpdateObserver;
    <UMUserPersonaUpdateObserver> * _userPersonaUpdateObserver;
}

@property (nonatomic, readonly) NSArray *allUsers;
@property (nonatomic, readonly) NSArray *allUsersUnfiltered;
@property (nonatomic, readonly, copy) UMUserPersona *currentPersona;
@property (nonatomic, readonly, copy) UMUser *currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLoginSession;
@property (nonatomic, readonly) bool isMultiUser;
@property (nonatomic, readonly) bool isSharedIPad;
@property (nonatomic, readonly, copy) UMUser *loginUser;
@property (nonatomic, readonly) unsigned long long maxNumberOfUsers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long userQuotaSize;

// Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)allUsers;
- (id)allUsersUnfiltered;
- (bool)canAccessUserProperties;
- (void)createUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)createUserPersona:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)createUserPersona:(id)arg1 passcodeData:(id)arg2 passcodeDataType:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)currentPersona;
- (id)currentUser;
- (id)currentUserSwitchContext;
- (void)currentUserSwitchContextHasBeenUsed;
- (void)deleteUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteUserPersonaWithIDString:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteUserPersonaWithPersonaUniqueString:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteUserPersonaWithProfileInfo:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteUserPersonaWithType:(int)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)disableUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)disableUserPersonaWithProfileInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAllPersonasForAllUsersWithCompletionHandler:(id /* block */)arg1;
- (void)fetchAllPersonasWithCompletionHandler:(id /* block */)arg1;
- (void)fetchAsidMapOfAllUsersWithCompletionHandler:(id /* block */)arg1;
- (void)fetchBundleIdentifierForPersonaWithIDString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchBundleIdentifierForPersonaWithPersonaUniqueString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchBundleIdentifierForType:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(id /* block */)arg1;
- (void)fetchPersonaWithIDString:(id)arg1 CompletionHandler:(id /* block */)arg2;
- (void)fetchPersonaWithPersonaUniqueString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchPersonaWithType:(int)arg1 CompletionHandler:(id /* block */)arg2;
- (bool)haveValidPersonaContextForIDString:(id)arg1;
- (bool)haveValidPersonaContextForPersonaUniqueString:(id)arg1;
- (id)init;
- (bool)isLoginSession;
- (bool)isMultiUser;
- (bool)isSharedIPad;
- (id)keybagOpaqueDataForUser:(id)arg1 withError:(id*)arg2;
- (id)listAllPersonaAttributesWithError:(id*)arg1;
- (id)listAllPersonaWithAttributes;
- (void)loadUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)loginUICheckInWithCompletionHandler:(id /* block */)arg1;
- (id)loginUser;
- (void)logoutToLoginSessionWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)maxNumberOfUsers;
- (bool)migrateGuestUserVolume:(id)arg1 withError:(id*)arg2;
- (bool)migrateSharedAndPrimaryUserVolumeWithError:(id*)arg1;
- (unsigned long long)personaGenerationIdentifierWithError:(id*)arg1;
- (bool)personaLoginWithUserODuuid:(id)arg1 withUid:(unsigned int)arg2 WithError:(id*)arg3;
- (bool)personaLogoutWithUserODuuid:(id)arg1 withUid:(unsigned int)arg2 WithError:(id*)arg3;
- (void)registerCriticalUserSwitchStakeHolder:(id)arg1;
- (void)registerPersonaListUpdateObserver:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerPersonaListUpdateObserver:(id)arg1 withMachService:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)registerUserListUpdateObserver:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;
- (void)resumeQuotas;
- (void)resumeSync;
- (void)setBundlesIdentifiers:(id)arg1 forPersonaWithPersonaUniqueString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setBundlesIdentifiers:(id)arg1 forUniquePersonaType:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)setBundlesIdentifiers:(id)arg1 forUniquePersonaWithIDString:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)setKeybagOpaqueDataForUser:(id)arg1 withOpaqueData:(id)arg2 withError:(id*)arg3;
- (void)setMultiPersonaBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setupUMUserSessionProvisioning:(id)arg1 WithCompletionHandler:(id /* block */)arg2;
- (void)suspendQuotasWithCompletionHandler:(id /* block */)arg1;
- (void)switchToLoginUserWithCompletionHandler:(id /* block */)arg1;
- (void)switchToLoginUserWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)terminateSyncWithCompletionHandler:(id /* block */)arg1;
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;
- (bool)userExists:(id)arg1;
- (void)userInteractionIsEnabled;
- (void)userListDidUpdate;
- (unsigned long long)userQuotaSize;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (id)br_currentPersonaID;

@end
