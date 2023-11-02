
@interface BBXPCSyncService : NSObject <BBSyncServiceInterface, BBSyncServiceRemoteClient> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <BBSyncServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    <BBSyncServiceDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BBSyncServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long pairedDeviceCount;
@property (readonly) Class superclass;

+ (id)clientInterface;

- (void).cxx_destruct;
- (id)_ensureConnection;
- (void)_resetConnection;
- (id)delegate;
- (void)enqueueSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (unsigned long long)pairedDeviceCount;
- (id)serverProxyObject;
- (void)setDelegate:(id)arg1;
- (void)syncServiceDidReceiveMessage:(id)arg1;

@end
