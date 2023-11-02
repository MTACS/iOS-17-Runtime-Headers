
@interface LCFDatabaseConnection : NSObject {
    NSURL * _databaseBaseURL;
    NSString * _databaseName;
    NSString * _databaseNamePath;
    LCFDatabaseColumnConnection * _dbColumnConnection;
    NSString * _tableName;
}

@property (nonatomic, readonly) NSURL *databaseBaseURL;
@property (nonatomic, readonly) NSString *databaseName;
@property (nonatomic, readonly) NSString *databaseNamePath;
@property (nonatomic, readonly) LCFDatabaseColumnConnection *dbColumnConnection;
@property (nonatomic, readonly) NSString *tableName;

- (void).cxx_destruct;
- (bool)addColumn:(id)arg1;
- (id)databaseBaseURL;
- (id)databaseName;
- (id)databaseNamePath;
- (id)dbColumnConnection;
- (bool)doQueryEachStep:(id)arg1 statementStepHandler:(id /* block */)arg2;
- (bool)doQueryExec:(id)arg1;
- (void)dumpDatabase;
- (void)ensureDatabaseTable;
- (id)getColumns;
- (id)init:(id)arg1 databaseName:(id)arg2 tableName:(id)arg3;
- (id)isDoubleArray:(id)arg1;
- (bool)pruneFrom:(id)arg1 endDate:(id)arg2;
- (id)query:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 reversed:(bool)arg4;
- (id)tableName;
- (bool)writeFeatures:(id)arg1;

@end
