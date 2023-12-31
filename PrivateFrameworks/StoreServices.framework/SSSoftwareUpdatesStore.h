
@interface SSSoftwareUpdatesStore : NSObject {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    SSXPCConnection * _connection;
    bool  _didMigration;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    void * _mobileCoreServices;
    bool  _useLocalRead;
    bool  _useLocalWrite;
}

- (void).cxx_destruct;
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(id /* block */)arg1;
- (void)dealloc;
- (void)getUpdatesWithCompletionBlock:(id /* block */)arg1;
- (void)hideApplicationBadgeForPendingUpdates;
- (id)init;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)arg1;
- (void)removeUpdateBulletins;
- (void)showApplicationBadgeForPendingUpdates;

@end
