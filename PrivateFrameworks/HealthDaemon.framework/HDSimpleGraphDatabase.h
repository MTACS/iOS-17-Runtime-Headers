
@interface HDSimpleGraphDatabase : NSObject {
    NSURL * _URL;
    HDSQLiteDatabase * _database;
    id /* block */  _unitTesting_didCreateDatabaseConnectionHandler;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (getter=isOpen, nonatomic, readonly) bool open;
@property (nonatomic, readonly) HDSQLiteDatabase *underlyingDatabase;
@property (nonatomic, copy) id /* block */ unitTesting_didCreateDatabaseConnectionHandler;
@property (nonatomic, retain) HDSQLiteDatabase *unitTesting_underlyingDatabase;

+ (id)graphDatabaseWithURL:(id)arg1 error:(id*)arg2;
+ (void)setUnitTesting_didInitGraphDatabaseHandler:(id /* block */)arg1;
+ (id /* block */)unitTesting_didInitGraphDatabaseHandler;

- (void).cxx_destruct;
- (id)URL;
- (bool)addAttributeForNodeID:(long long)arg1 type:(long long)arg2 value:(id)arg3 version:(long long)arg4 slots:(unsigned long long)arg5 error:(id*)arg6;
- (bool)addRelationshipWithSubjectNodeID:(long long)arg1 type:(long long)arg2 objectNodeID:(long long)arg3 version:(long long)arg4 slots:(unsigned long long)arg5 error:(id*)arg6;
- (void)close;
- (void)dealloc;
- (bool)deleteNodeWithID:(long long)arg1 error:(id*)arg2;
- (bool)deleteWithError:(id*)arg1;
- (id)description;
- (bool)enumerateAttributesForNodeWithID:(long long)arg1 error:(id*)arg2 enumerationHandler:(id /* block */)arg3;
- (bool)enumerateAttributesForNodeWithID:(long long)arg1 includeDeleted:(bool)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
- (bool)enumerateNodesForPredicate:(id)arg1 error:(id*)arg2 enumerationHandler:(id /* block */)arg3;
- (bool)enumerateNodesForPredicate:(id)arg1 includeDeleted:(bool)arg2 limit:(unsigned long long)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
- (bool)enumerateRelationshipsForPredicate:(id)arg1 error:(id*)arg2 enumerationHandler:(id /* block */)arg3;
- (bool)enumerateRelationshipsForPredicate:(id)arg1 includeDeleted:(bool)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
- (bool)enumerateRelationshipsWithSubjectID:(long long)arg1 includeDeleted:(bool)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
- (bool)foreignKeysEnable:(bool)arg1 error:(id*)arg2;
- (id)init;
- (bool)insertNodeWithID:(long long)arg1 version:(long long)arg2 slots:(unsigned long long)arg3 deleted:(bool)arg4 error:(id*)arg5;
- (bool)isOpen;
- (bool)metadataValueForKey:(id)arg1 valueOut:(id*)arg2 error:(id*)arg3;
- (id)nodeForID:(long long)arg1 error:(id*)arg2;
- (void)onCommit:(id /* block */)arg1 orRollback:(id /* block */)arg2;
- (bool)performTransactionWithError:(id*)arg1 write:(bool)arg2 block:(id /* block */)arg3;
- (id)schemaVersionWithError:(id*)arg1;
- (bool)setMetadataValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setUnitTesting_didCreateDatabaseConnectionHandler:(id /* block */)arg1;
- (void)setUnitTesting_underlyingDatabase:(id)arg1;
- (id)underlyingDatabase;
- (bool)unitTesting_addAttributeWithType:(long long)arg1 value:(id)arg2 nodeID:(long long)arg3 error:(id*)arg4;
- (bool)unitTesting_addRelationshipWithType:(long long)arg1 subjectNodeID:(long long)arg2 objectNodeID:(long long)arg3 error:(id*)arg4;
- (id)unitTesting_countOfNodesWithError:(id*)arg1;
- (id)unitTesting_countOfNodesWithRelationshipType:(long long)arg1 error:(id*)arg2;
- (id /* block */)unitTesting_didCreateDatabaseConnectionHandler;
- (id)unitTesting_insertNodeWithID:(long long)arg1 error:(id*)arg2;
- (bool)unitTesting_removeRelationshipWithID:(long long)arg1 subjectNodeID:(long long)arg2 objectNodeID:(long long)arg3 error:(id*)arg4;
- (id)unitTesting_underlyingDatabase;

@end
