
@interface VCCompanionSyncSession : NSObject <SYSessionDelegate> {
    <VCCompanionSyncSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    <VCShortcutSyncService> * _service;
    SYSession * _session;
    NSSet * _syncDataHandlers;
    NSObject<OS_os_transaction> * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCCompanionSyncSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) <VCShortcutSyncService> *service;
@property (nonatomic, readonly) SYSession *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSSet *syncDataHandlers;
@property (nonatomic, readonly) NSObject<OS_os_transaction> *transaction;

+ (long long)direction;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)delegate;
- (id)initWithSYSession:(id)arg1 service:(id)arg2 syncDataHandlers:(id)arg3;
- (id)queue;
- (void)resetDataStoreForSyncSession:(id)arg1 completion:(id /* block */)arg2;
- (id)service;
- (id)session;
- (void)setDelegate:(id)arg1;
- (id)syncDataHandlers;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;
- (bool)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;
- (id)transaction;

@end
