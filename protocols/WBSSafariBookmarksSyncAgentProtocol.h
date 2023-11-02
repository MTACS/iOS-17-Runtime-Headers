
@protocol WBSSafariBookmarksSyncAgentProtocol <WBSCyclerCloudBookmarksAssistant>

@required

- (void)beginMigrationFromDAV;
- (void)collectDiagnosticsDataWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)deleteBackgroundImageDirectory;
- (void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteCloudExtensionDevicesWithUUIDStrings:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteCloudExtensionStatesDatabaseWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteDevicesWithUUIDStrings:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deletePerSiteSettingsSyncData;
- (void)fetchCloudSettingsChangesImmediately;
- (void)fetchCloudTabDevicesAndCloseRequests;
- (void)fetchProfileEntitiesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchRemoteMigrationStateWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSString *, NSError *, void*
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*
- (void)fetchTabGroupEntitiesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getCloudExtensionStatesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSArray *, NSError *, void*
- (void)getCloudSettingsContainerManateeStateWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)getCloudTabContainerManateeStateWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)getCloudTabDevicesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)observeRemoteMigrationStateForSecondaryMigration;
- (void)registerForPushNotificationsIfNeeded;
- (void)saveCloudPerSiteSettingWithDictionaryRepresentation:(void *)arg1 successCompletionHandler:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)saveCloudSettingWithDictionaryRepresentation:(void *)arg1 successCompletionHandler:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(void *)arg1 closeRequestUUIDString:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveExtensionDeviceWithDictionaryRepresentation:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveExtensionStatesWithDictionaryRepresentation:(void *)arg1 forDevice:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(void *)arg1 deviceUUIDString:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)scheduleCloudBackgroundImageSaveWithURL:(void *)arg1 isLightAppearance:(void *)arg2 successCompletionHandler:(void *)arg3; // needs 3 arg types, found 7: NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setUsesOpportunisticPushTopic:(bool)arg1;
- (void)syncDownSafariPerSiteSettingsSyncWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)syncDownSafariSettingsSyncWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)syncUpSafariPerSiteSettingsSyncWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)syncUpSafariSettingsSyncWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)triggerImmediateBackgroundImageSaveIfApplicable;
- (void)triggerSafariTabGroupSync;
- (void)userAccountDidChange:(long long)arg1;
- (void)userDidUpdateBookmarkDatabase;

@end
