
@interface CRKNonCatalystStudentDaemonProxy : NSObject <CRKStudentDaemonXPCInterface> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    CRKValidXPCConnectionProvider * _connectionProvider;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) CRKValidXPCConnectionProvider *connectionProvider;

- (void).cxx_destruct;
- (void)_fetchAdHocConfiguration:(id /* block */)arg1;
- (void)_fetchConfiguration:(id /* block */)arg1;
- (void)_fetchConfigurationType:(id /* block */)arg1;
- (void)_fetchResourceFromURL:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchSetOfActiveRestrictionUUIDsForClientType:(id)arg1 completion:(id /* block */)arg2;
- (void)_setActiveStudentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_setAdHocConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)_setConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)_studentDidAuthenticate:(id)arg1 completion:(id /* block */)arg2;
- (id)callbackQueue;
- (id)connectionProvider;
- (void)fetchAdHocConfiguration:(id /* block */)arg1;
- (void)fetchConfiguration:(id /* block */)arg1;
- (void)fetchConfigurationType:(id /* block */)arg1;
- (void)fetchResourceFromURL:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSetOfActiveRestrictionUUIDsForClientType:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithCallbackQueue:(id)arg1;
- (void)setActiveStudentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setAdHocConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)setConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)setOfActiveRestrictionUUIDs:(id)arg1;
- (void)studentDidAuthenticate:(id)arg1 completion:(id /* block */)arg2;

@end
