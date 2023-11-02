
@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol> {
    NSXPCConnection * _safariBookmarksSyncAgentConnection;
}

@property (retain) NSXPCConnection *_safariBookmarksSyncAgentConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedProxy;

- (void).cxx_destruct;
- (id)_safariBookmarksSyncAgentConnection;
- (void)beginMigrationFromDAV;
- (void)clearLocalDataIncludingMigrationState:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)collectDiagnosticsDataWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteBackgroundImageDirectory;
- (void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(id /* block */)arg1;
- (void)deleteCloudExtensionDevicesWithUUIDStrings:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteCloudExtensionStatesDatabaseWithCompletionHandler:(id /* block */)arg1;
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteDevicesWithUUIDStrings:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deletePerSiteSettingsSyncData;
- (void)fetchCloudSettingsChangesImmediately;
- (void)fetchCloudTabDevicesAndCloseRequests;
- (void)fetchProfileEntitiesWithCompletion:(id /* block */)arg1;
- (void)fetchRemoteMigrationStateWithCompletionHandler:(id /* block */)arg1;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchTabGroupEntitiesWithCompletion:(id /* block */)arg1;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id /* block */)arg1;
- (void)getCloudExtensionStatesWithCompletionHandler:(id /* block */)arg1;
- (void)getCloudSettingsContainerManateeStateWithCompletionHandler:(id /* block */)arg1;
- (void)getCloudTabContainerManateeStateWithCompletionHandler:(id /* block */)arg1;
- (void)getCloudTabDevicesWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)migrateToCloudKitWithCompletionHandler:(id /* block */)arg1;
- (void)observeRemoteMigrationStateForSecondaryMigration;
- (void)registerForPushNotificationsIfNeeded;
- (void)resetToDAVDatabaseWithCompletionHandler:(id /* block */)arg1;
- (void)saveCloudPerSiteSettingWithDictionaryRepresentation:(id)arg1 successCompletionHandler:(id /* block */)arg2;
- (void)saveCloudSettingWithDictionaryRepresentation:(id)arg1 successCompletionHandler:(id /* block */)arg2;
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg1 closeRequestUUIDString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)saveExtensionDeviceWithDictionaryRepresentation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveExtensionStatesWithDictionaryRepresentation:(id)arg1 forDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg1 deviceUUIDString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)scheduleCloudBackgroundImageSaveWithURL:(id)arg1 isLightAppearance:(bool)arg2 successCompletionHandler:(id /* block */)arg3;
- (void)setUsesOpportunisticPushTopic:(bool)arg1;
- (void)set_safariBookmarksSyncAgentConnection:(id)arg1;
- (void)syncDownSafariPerSiteSettingsSyncWithCompletion:(id /* block */)arg1;
- (void)syncDownSafariSettingsSyncWithCompletion:(id /* block */)arg1;
- (void)syncUpSafariPerSiteSettingsSyncWithCompletion:(id /* block */)arg1;
- (void)syncUpSafariSettingsSyncWithCompletion:(id /* block */)arg1;
- (void)triggerImmediateBackgroundImageSaveIfApplicable;
- (void)triggerSafariTabGroupSync;
- (void)userAccountDidChange:(long long)arg1;
- (void)userDidUpdateBookmarkDatabase;

@end
