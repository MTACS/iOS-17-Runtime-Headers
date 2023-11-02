
@interface PLClientServerTransaction : NSObject {
    NSSet * _changeScopes;
    PLPhotoLibraryPathManager * _pathManager;
    NSString * _transactionToken;
}

@property (nonatomic, readonly) NSSet *changeScopes;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;
@property (nonatomic, copy) NSString *transactionToken;

+ (id)_allTransactionPathsForPathManager:(id)arg1;
+ (bool)_archiveRecoveryHistoryForPathManager:(id)arg1 error:(id*)arg2;
+ (id)_changeScopesFromXPCDictionary:(id)arg1;
+ (void)_checkForAndHandleExcessiveRecoveryAttemptsForPathManager:(id)arg1 sqliteErrorHandler:(id /* block */)arg2;
+ (void)_cleanupAllTransactionsScopesByPath:(id)arg1;
+ (id)_filePathForTransactionWithToken:(id)arg1 pathManager:(id)arg2;
+ (bool)_hasExcessiveRecoveryAttemptsForPathManager:(id)arg1;
+ (bool)_isOutstandingTransactionAtPath:(id)arg1 getScopeValues:(unsigned long long*)arg2;
+ (id)_libraryURLFromXPCDictionary:(id)arg1;
+ (id)_outstandingTransactionScopesByPathForPathManager:(id)arg1;
+ (unsigned long long)_readScopeValuesFromFileDescriptor:(int)arg1;
+ (void)_recordRecoveryAttemptForPathManager:(id)arg1;
+ (id)_recoveryHistoryFilePathForPathManager:(id)arg1;
+ (id)_scopeValuesByScope;
+ (id)_serverTransactionForPathManager:(id)arg1 isNew:(bool*)arg2 identifier:(const char *)arg3;
+ (id)_transactionTokenFromXPCDictionary:(id)arg1;
+ (void)addTransaction:(id)arg1 toUserInfo:(id)arg2;
+ (void)addTransaction:(id)arg1 toXPCDictionary:(id)arg2;
+ (id)beginClientTransactionWithChangeScopes:(id)arg1 pathManager:(id)arg2 identifier:(const char *)arg3;
+ (id)beginServerTransactionWithClientTransactionFromXPCDictionary:(id)arg1 pathManager:(id)arg2 identifier:(const char *)arg3;
+ (id)beginServerTransactionWithToken:(id)arg1 changeScopes:(id)arg2 pathManager:(id)arg3 identifier:(const char *)arg4;
+ (void)cancelOutstandingTransactionHandlerTimer:(id)arg1;
+ (id)descriptionOfAllTransactionFilesForPathManager:(id)arg1;
+ (id)descriptionOfTransactionScopes:(id)arg1;
+ (id)handleOutstandingTransactionsForPathManager:(id)arg1 sqliteErrorHandler:(id /* block */)arg2 handler:(id /* block */)arg3;
+ (void)removeTransactionFromUserInfo:(id)arg1;
+ (unsigned long long)scopeValuesFromScopes:(id)arg1;
+ (id)scopesFromScopeValues:(unsigned long long)arg1;
+ (id)serverTransactionQueue;
+ (id)transactionFromUserInfo:(id)arg1;

- (void).cxx_destruct;
- (void)abortTransaction;
- (void)addChangeScopes:(id)arg1;
- (id)changeScopes;
- (void)completeTransaction;
- (void)completeTransactionScope:(id)arg1;
- (id)initWithPathManager:(id)arg1;
- (bool)isClientTransaction;
- (id)pathManager;
- (void)popChangeScopesBatch;
- (void)pushChangeScopesBatch;
- (void)setTransactionToken:(id)arg1;
- (void)stillAlive;
- (id)transactionToken;

@end
