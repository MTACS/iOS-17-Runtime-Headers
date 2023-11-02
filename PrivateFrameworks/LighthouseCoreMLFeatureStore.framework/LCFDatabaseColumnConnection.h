
@interface LCFDatabaseColumnConnection : NSObject {
    NSURL * _databaseBaseURL;
    NSString * _databaseName;
    NSString * _databaseNamePath;
    NSArray * _nameTypesCache;
    NSString * _tableName;
}

@property (nonatomic, readonly) NSURL *databaseBaseURL;
@property (nonatomic, readonly) NSString *databaseName;
@property (nonatomic, readonly) NSString *databaseNamePath;
@property (nonatomic, retain) NSArray *nameTypesCache;
@property (nonatomic, readonly) NSString *tableName;

- (void).cxx_destruct;
- (id)databaseBaseURL;
- (id)databaseName;
- (id)databaseNamePath;
- (bool)doQueryEachStep:(id)arg1 statementStepHandler:(id /* block */)arg2;
- (bool)doQueryExec:(id)arg1;
- (void)dumpDatabase;
- (void)ensureDatabaseTable;
- (id)init:(id)arg1 databaseName:(id)arg2 tableName:(id)arg3;
- (id)nameTypesCache;
- (id)query;
- (void)setNameTypesCache:(id)arg1;
- (id)tableName;
- (bool)writeFeatures:(id)arg1 featureValueType:(long long)arg2;

@end
