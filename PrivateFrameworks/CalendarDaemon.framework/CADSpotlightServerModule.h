
@interface CADSpotlightServerModule : NSObject <CADModule, SpotlightDaemonClient> {
    CADSpotlightIndexer * _indexer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CADSpotlightIndexer *indexer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)didRegisterForAlarms;
- (id)indexer;
- (void)protectedDataDidBecomeAvailable;
- (void)provideDataForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(id /* block */)arg6;
- (void)provideFileURLForBundleID:(id)arg1 protectionClass:(id)arg2 itemIdentifier:(id)arg3 typeIdentifier:(id)arg4 options:(long long)arg5 completionHandler:(id /* block */)arg6;
- (void)receivedAlarmNamed:(id)arg1;
- (void)receivedNotificationNamed:(id)arg1;
- (void)reindexAllItemsForBundleID:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)reindexItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 acknowledgementHandler:(id /* block */)arg4;

@end
