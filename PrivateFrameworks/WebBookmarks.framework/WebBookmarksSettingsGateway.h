
@interface WebBookmarksSettingsGateway : NSObject {
    WebBookmarksXPCConnection * _connection;
}

- (void).cxx_destruct;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 profileIdentifiers:(id)arg3 options:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)deleteAllSafariSecurityOriginsForProfileWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(id /* block */)arg1;
- (void)deleteSafariWebsiteDataRecord:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSafariDataUsageByteCountWithCompletionHandler:(id /* block */)arg1;
- (void)getSafariWebDataUsageWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)scheduleBookmarksDatabaseMaintenance;
- (void)scheduleBookmarksDatabaseMigrationTask;
- (void)scheduleHSTSSuperCookieCleanup;
- (void)schedulePasswordIconsCleanup;

@end
