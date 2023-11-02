
@interface CKVAdminServiceFactory : NSObject <CKVAdminServiceProvider> {
    CKVIndexManager * _indexManager;
    NSObject<KVDonateServiceProvider> * _serviceProvider;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    CKVSettings * _settings;
    CKVTaskHandler * _taskHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adminService;
- (id)initWithQueue:(id)arg1 indexManager:(id)arg2 settings:(id)arg3 donateTaskProvider:(id)arg4 coalescenceManager:(id)arg5 serviceProvider:(id)arg6;

@end
