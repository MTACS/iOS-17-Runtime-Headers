
@interface STManagementState : NSObject <FamilyCircleUI.STManagementStateProtocol> {
    bool  _cachedIsRestrictionsPasscodeSet;
    bool  _cachedShouldRequestMoreTime;
    NSXPCConnection * _connection;
    bool  _contactsEditable;
    STPrivateServiceClient * _privateServiceClient;
}

@property bool cachedIsRestrictionsPasscodeSet;
@property bool cachedShouldRequestMoreTime;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly) bool contactsEditable;
@property (nonatomic, readonly) bool isRestrictionsPasscodeSet;
@property (readonly) bool needsToSetRestrictionsPasscode;
@property (nonatomic, retain) STPrivateServiceClient *privateServiceClient;
@property (nonatomic, readonly) bool shouldRequestMoreTime;

- (void).cxx_destruct;
- (bool)applyDefaultUserPoliciesWithError:(id*)arg1;
- (void)applyIntroductionModel:(id)arg1 forDSID:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)cachedIsRestrictionsPasscodeSet;
- (bool)cachedShouldRequestMoreTime;
- (bool)clearRestrictionsPasscodeWithError:(id*)arg1;
- (void)communicationPoliciesForDSID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)communicationPoliciesWithCompletionHandler:(id /* block */)arg1;
- (id)communicationPoliciesWithError:(id*)arg1;
- (id)connection;
- (void)contactManagementStateForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)contactsEditable;
- (void)dealloc;
- (bool)enableRemoteManagementForDSID:(id)arg1 error:(id*)arg2;
- (bool)enableScreenTimeForDSID:(id)arg1 error:(id*)arg2;
- (id)init;
- (void)isContentPrivacyEnabledForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)isExplicitContentRestricted:(id /* block */)arg1;
- (void)isLocationSharingModificationAllowedForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isRestrictionsPasscodeSet;
- (void)isRestrictionsPasscodeSet:(id /* block */)arg1;
- (void)lastCommunicationLimitsModifcationDateForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)lastModifcationDateForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)needsToSetRestrictionsPasscode;
- (bool)performMigrationFromMCXSettings:(id)arg1 error:(id*)arg2;
- (bool)permitWebFilterURL:(id)arg1 pageTitle:(id)arg2 error:(id*)arg3;
- (id)primaryiCloudCardDAVAccountIdentifierWithError:(id*)arg1;
- (id)privateServiceClient;
- (void)requestToManageContactsForDSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)screenTimeStateWithCompletionHandler:(id /* block */)arg1;
- (void)screenTimeSyncStateWithCompletionHandler:(id /* block */)arg1;
- (void)setCachedIsRestrictionsPasscodeSet:(bool)arg1;
- (void)setCachedShouldRequestMoreTime:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setLocationSharingModificationAllowed:(bool)arg1 forDSID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setManageContactsEnabled:(bool)arg1 forDSID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setPrivateServiceClient:(id)arg1;
- (void)setScreenTimeEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)setScreenTimeEnabled:(bool)arg1 error:(id*)arg2;
- (void)setScreenTimeSyncingEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)arg1 error:(id*)arg2;
- (id)shouldAllowOneMoreMinuteForWebDomain:(id)arg1 error:(id*)arg2;
- (bool)shouldRequestMoreTime;
- (void)shouldRequestMoreTime:(id /* block */)arg1;

@end
