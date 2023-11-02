
@interface CKVDispatcher : NSObject <NSXPCListenerDelegate> {
    NSXPCListener * _adminServiceListener;
    NSObject<CKVAdminServiceProvider> * _adminServiceProvider;
    CKVDonateConnectionFactory * _donateConnectionFactory;
    NSXPCListener * _donateServiceListener;
    CKVDonationManager * _donationManager;
    CKVIndexManager * _indexManager;
    NSObject<OS_dispatch_queue> * _queue;
    CKVSettings * _settings;
    CKVTaskHandler * _taskHandler;
}

@property (nonatomic, readonly) NSXPCListener *adminServiceListener;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListener *donateServiceListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedDispatcher;

- (void).cxx_destruct;
- (bool)_adminServiceShouldAcceptNewConnection:(id)arg1;
- (bool)_donateServiceShouldAcceptNewConnection:(id)arg1;
- (id)_listenerWithMachServiceName:(id)arg1 delegate:(id)arg2;
- (id)adminServiceListener;
- (id)donateServiceListener;
- (void)handleBridgeActivityUpdate:(id)arg1;
- (bool)handleDarwinNotificationEventWithName:(id)arg1;
- (bool)handleDistributedNotificationEventWithName:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1 indexManager:(id)arg2 donateConnectionFactory:(id)arg3 adminServiceProvider:(id)arg4 taskHandler:(id)arg5 settings:(id)arg6;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)registerXPCActivities;
- (void)runMaintenanceWithShouldDefer:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)runMigration:(id /* block */)arg1;
- (void)setupXPCListeners;

@end
