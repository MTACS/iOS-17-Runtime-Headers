
@interface EDProtectedDatabasePersistence : NSObject <EFLoggable, EFSignpostable> {
    EDPersistenceDatabase * _database;
    EDPersistenceHookRegistry * _hookRegistry;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _initializationLock;
    bool  _isInitialized;
    bool  _isReconciling;
    EDPersistenceDatabaseJournalManager * _journalManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _reconciliationLock;
    EFLocked * _reconciliationMergeHandlers;
    NSObject<OS_dispatch_queue> * _reconciliationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (nonatomic) bool isInitialized;
@property (nonatomic) bool isReconciling;
@property (nonatomic, readonly) EDPersistenceDatabaseJournalManager *journalManager;
@property (nonatomic, readonly) bool protectedDataAvailable;
@property (nonatomic, readonly) EFLocked *reconciliationMergeHandlers;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *reconciliationQueue;
@property (readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsJournaling;

+ (bool)_isRecoverableError:(id)arg1;
+ (unsigned long long)_resultForConnection:(id)arg1 success:(bool)arg2 error:(id)arg3 errorMessage:(id)arg4;
+ (id)journalDatabaseName;
+ (id)log;
+ (id)protectedDatabaseName;
+ (id)signpostLog;

- (void).cxx_destruct;
- (id)_allReferencingColumnsForTable:(id)arg1;
- (void)_attachJournalDatabaseToConnection:(id)arg1 withSchema:(id)arg2;
- (bool)_attachProtectedDatabaseToConnection:(id)arg1 withSchema:(id)arg2 error:(id*)arg3;
- (id)_databaseIDsToDeleteForTable:(id)arg1;
- (void)_deleteDatabaseIDs:(id)arg1 fromTable:(id)arg2;
- (unsigned long long)_deleteRowIDs:(id)arg1 fromJournal:(id)arg2 withConnection:(id)arg3;
- (void)_detachJournalDatabaseFromConnection:(id)arg1;
- (void)_detachProtectedDatabaseFromConnection:(id)arg1;
- (void)_ensureJournalIsAttachedToConnection:(id)arg1 withSchema:(id)arg2;
- (void)_ensureProtectedDatabaseOrJournalIsAttachedToConnection:(id)arg1 withSchema:(id)arg2;
- (unsigned long long)_executeStatementString:(id)arg1 onConnection:(id)arg2 errorMessage:(id)arg3;
- (unsigned long long)_executeUpdateStatement:(id)arg1 onConnection:(id)arg2 errorMessage:(id)arg3;
- (bool)_initializeDatabase:(id)arg1 withConnection:(id)arg2 schema:(id)arg3 error:(id*)arg4;
- (bool)_isJournalMalformedForSchema:(id)arg1 connection:(id)arg2;
- (long long)_maxRowIDForColumn:(id)arg1 withConnection:(id)arg2;
- (unsigned long long)_mergeSchema:(id)arg1 connection:(id)arg2 journaledRows:(unsigned long long*)arg3 newRows:(unsigned long long*)arg4;
- (unsigned long long)_mergeTable:(id)arg1 connection:(id)arg2 journaledRows:(unsigned long long*)arg3 newRows:(unsigned long long*)arg4;
- (bool)_performOnDemandReconciliationForConnection:(id)arg1 withSchema:(id)arg2;
- (unsigned long long)_reconcileJournalsWithSchema:(id)arg1 connection:(id)arg2;
- (bool)_removeExistingDatabaseIDs:(id)arg1 withColumn:(id)arg2 connection:(id)arg3;
- (unsigned long long)_runReconciliationWithSchema:(id)arg1 connection:(id)arg2;
- (bool)_updateSqliteSequenceForDatabase:(id)arg1 schema:(id)arg2 withConnection:(id)arg3 error:(id*)arg4;
- (bool)_upgradeJournalWithConnection:(id)arg1 schema:(id)arg2 error:(id*)arg3;
- (void)addAdditionalCriteriaToCleanupActivity:(id)arg1;
- (void)attachProtectedOrJournalDatabaseToConnectionIfNecessary:(id)arg1 withSchema:(id)arg2;
- (id)database;
- (void)detachProtectedOrJournalDatabaseFromConnectionIfNecessary:(id)arg1;
- (void)finishJournalReconciliation:(unsigned long long)arg1;
- (id)hookRegistry;
- (id)initWithBasePath:(id)arg1 hookRegistry:(id)arg2;
- (id)initWithJournalManager:(id)arg1 hookRegistry:(id)arg2;
- (bool)isInitialized;
- (bool)isReconciling;
- (id)journalManager;
- (bool)protectedDataAvailable;
- (void)reconcileJournalsWithSchema:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)reconciliationMergeHandlers;
- (id)reconciliationQueue;
- (void)registerMergeHandler:(id)arg1 forTable:(id)arg2;
- (void)scheduleRecurringActivity;
- (void)setDatabase:(id)arg1;
- (void)setIsInitialized:(bool)arg1;
- (void)setIsReconciling:(bool)arg1;
- (unsigned long long)signpostID;
- (bool)supportsJournaling;

@end
