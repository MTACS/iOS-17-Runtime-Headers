
@interface MFLibraryMessageReconciler : NSObject {
    <MFAccountsProvider> * _accountsProvider;
    EDPersistenceDatabase * _database;
    EDPersistenceHookRegistry * _hookRegistry;
    EDMessagePersistence * _messagePersistence;
    MFMailMessageLibraryQueryTransformer * _transformer;
}

@property (nonatomic, readonly) unsigned long long numberOfUnreconciledMessages;

+ (unsigned long long)numberOfUnreconciledMessagesWithLibrary:(id)arg1;

- (void).cxx_destruct;
- (id)initWithLibrary:(id)arg1 accountsProvider:(id)arg2;
- (unsigned long long)numberOfUnreconciledMessages;
- (void)reconcileAllObjectsWithWindow:(id)arg1;
- (id)reconcileInboxMessagesWithWindow:(id)arg1;
- (id)reconcileWithMessageReconciliationQueries:(id)arg1 window:(id)arg2;
- (id)reconcileWithThreadReconciliationQueries:(id)arg1 window:(id)arg2;

@end
