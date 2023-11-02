
@interface SpotlightDaemonServer : NSObject

+ (id)sharedDaemonServer;

- (long long)clientTypeForBundleID:(id)arg1 jobType:(long long)arg2;
- (id)connectionForBundleID:(id)arg1 jobType:(long long)arg2;
- (id)connectionForClientType:(long long)arg1 jobType:(long long)arg2;
- (bool)handleJob:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)haveDaemonForBundleID:(id)arg1 jobType:(long long)arg2;
- (void)issueReindexAllItemsForBundleID:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)issueReindexItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 acknowledgementHandler:(id /* block */)arg4;
- (void)provideDataForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(id /* block */)arg6;
- (void)provideFileURLForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(id /* block */)arg6;

@end
