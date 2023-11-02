
@interface CHSToolServiceConnection : NSObject <CHSToolServiceClient> {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _queue_clients;
    BSServiceConnection * _queue_connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)_queue_addClient:(id)arg1;
- (void)_queue_createConnection;
- (void)_queue_invalidateConnection;
- (id)_queue_remoteTarget;
- (void)_queue_removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (oneway void)cacheDescriptorsForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)contentURLForActivityID:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)expireLocationGracePeriods;
- (oneway void)extensionInfo:(id /* block */)arg1;
- (oneway void)extensionInfoForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)fetchStateForItemWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)fetchStateWithCompletion:(id /* block */)arg1;
- (id)init;
- (oneway void)listStateCaptureIdentifiersWithCompletion:(id /* block */)arg1;
- (oneway void)reloadTimelinesOfKind:(id)arg1 containedIn:(id)arg2 reason:(id)arg3 completion:(id /* block */)arg4;
- (void)removeClient:(id)arg1;
- (oneway void)resetCaches:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (oneway void)runReaper;
- (oneway void)timelineForWidgetKey:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)widgetsWithTimelines:(id /* block */)arg1;

@end
