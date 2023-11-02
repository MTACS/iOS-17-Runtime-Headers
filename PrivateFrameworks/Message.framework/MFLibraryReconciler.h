
@interface MFLibraryReconciler : NSObject <EDDatabaseChangeHookResponder, EDProtectedDataReconciliationHookResponder> {
    <MFAccountsProvider> * _accountsProvider;
    EDPersistenceHookRegistry * _hookRegistry;
    MFLibraryMessageReconciler * _messageReconciler;
    <EDReconciliationQueryProvider> * _queryProvider;
    <EFScheduler> * _reconciliationCleanupScheduler;
    MFLibraryThreadReconciler * _threadReconciler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithLibrary:(id)arg1 queryProvider:(id)arg2 accountsProvider:(id)arg3;
- (void)persistenceDidReconcileProtectedData;

@end
