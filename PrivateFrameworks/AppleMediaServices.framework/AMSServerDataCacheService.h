
@interface AMSServerDataCacheService : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (bool)_serverDataCacheFeatureEnabled;

- (void).cxx_destruct;
- (id)_makeRemoteConnectionInterface;
- (id)_newRemoteConnection;
- (void)_removeRemoteConnection;
- (id)connection;
- (id)dataForAccountDSID:(id)arg1 cacheTypeID:(id)arg2 networkPolicy:(long long)arg3;
- (void)dealloc;
- (id)granularNotificationSettingsForAccountDSID:(id)arg1 bundleID:(id)arg2 networkPolicy:(long long)arg3;
- (id)init;
- (id)proxyWithErrorHandler:(id /* block */)arg1;
- (id)queue;
- (id)reminderEventsForAccount:(id)arg1 service:(id)arg2 eventType:(id)arg3 networkPolicy:(long long)arg4;
- (void)setConnection:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)setUpCacheForAccount:(id)arg1;
- (id)setUpCacheForAccountDSID:(id)arg1;
- (id)tearDownCacheForAccountDSID:(id)arg1;
- (id)updateCacheForAccountDSID:(id)arg1 withCachePayload:(id)arg2;
- (id)updateCacheForAccountDSID:(id)arg1 withCacheTypeIDs:(id)arg2;

@end
