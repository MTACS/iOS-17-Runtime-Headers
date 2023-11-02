
@interface MSVSQLDatabaseTransaction : NSObject <MSVSQLExecutable> {
    _MSVSQLProcessAssertion * _assertion;
    _MSVSQLConnection * _connection;
    bool  _invalid;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_releaseSavepoint:(id)arg1;
- (bool)commit;
- (id)createSavepoint;
- (void)dealloc;
- (id)description;
- (bool)executeStatement:(id)arg1 error:(id*)arg2;
- (bool)executeStatementString:(id)arg1 error:(id*)arg2;
- (id)name;
- (id)resultsForStatement:(id)arg1;
- (bool)rollback;
- (bool)rollbackToSavepoint:(id)arg1;
- (id)statementWithString:(id)arg1 error:(id*)arg2;

@end
