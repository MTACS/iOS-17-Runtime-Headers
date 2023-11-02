
@interface HDDatabaseTransaction : NSObject {
    <HDSQLiteDatabaseProvider> * _databaseProvider;
    HDHFDataStore * _highFrequencyDataStore;
    bool  _isActive;
    bool  _isHandlingTransactionEnd;
    bool  _isOutermostTransactionUnprotected;
    NSMutableArray * _onCommitBlocks;
    NSMutableArray * _onRollbackBlocks;
    bool  _performingMigration;
    HDProfile * _profile;
    HDSQLiteDatabase * _protectedDatabase;
    NSDictionary * _protectedResources;
    HDDatabaseTransactionContext * _rootContext;
    HDSQLiteDatabase * _unprotectedDatabase;
}

@property (nonatomic, readonly) long long cacheScope;
@property (nonatomic, readonly) HDHFDataStore *highFrequencyDataStore;
@property (nonatomic, readonly) bool isWriteTransaction;
@property (nonatomic, readonly) HDOntologyDatabase *ontologyDatabase;
@property (nonatomic) bool performingMigration;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) HDSQLiteDatabase *protectedDatabase;
@property (nonatomic, readonly, copy) NSDictionary *protectedResources;
@property (nonatomic, readonly, copy) HDDatabaseTransactionContext *rootContext;
@property (nonatomic, readonly) HDSQLiteDatabase *unprotectedDatabase;

- (void).cxx_destruct;
- (long long)cacheScope;
- (id)databaseForEntity:(id)arg1;
- (id)databaseForEntityClass:(Class)arg1;
- (id)databaseForEntityProtectionClass:(long long)arg1;
- (void)dealloc;
- (id)highFrequencyDataStore;
- (id)initWithDatabaseProvider:(id)arg1 profile:(id)arg2 rootContext:(id)arg3;
- (bool)isWriteTransaction;
- (void)onCommit:(id /* block */)arg1 orRollback:(id /* block */)arg2;
- (id)ontologyDatabase;
- (bool)performWithContext:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3 inaccessibilityHandler:(id /* block */)arg4;
- (bool)performingMigration;
- (id)profile;
- (id)protectedDatabase;
- (id)protectedResources;
- (void)requestTransactionInterruption;
- (void)requireRollback;
- (id)rootContext;
- (void)setPerformingMigration:(bool)arg1;
- (void)transactionDidEndWithError:(id)arg1;
- (id)unprotectedDatabase;

@end
