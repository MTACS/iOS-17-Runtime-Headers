
@interface TRISQLiteCKDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    NSString * _assetCacheDir;
    NSString * _assetDir;
    CKContainer * _container;
    _PASSqliteDatabase * _db;
    <TRISQLiteCKDatabaseDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _opQueue;
    NSString * _parentDir;
}

@property (nonatomic) CKContainer *container;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <TRISQLiteCKDatabaseDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *operationQueue;
@property (readonly) Class superclass;

+ (id)mockContainerWithIdentifier:(id)arg1 database:(id)arg2;

- (void).cxx_destruct;
- (id)_allRecordTypes;
- (id)_assetForLocallyStoredAssetWithFilename:(id)arg1 forRecordId:(id)arg2 error:(id*)arg3;
- (void)_bindParam:(int)arg1 toScalarValue:(id)arg2 forStatement:(id)arg3 recordId:(id)arg4;
- (id)_createRecordFromSelectRow:(id)arg1 recordType:(id)arg2 unindexedDesiredKeys:(id)arg3 indexedDesiredKeys:(id)arg4 txn:(id)arg5 error:(id*)arg6;
- (id)_createTableForArrayFieldWithKey:(id)arg1 attachedToRecordType:(id)arg2 sqliteContainedType:(id)arg3;
- (id)_createTableForRecordType:(id)arg1 scalarFields:(id)arg2;
- (void)_deleteRecordsWithRecordIds:(id)arg1 recordType:(id)arg2 txn:(id)arg3;
- (id)_errorWithCode:(long long)arg1 message:(id)arg2;
- (id)_evalFetchRecordsOperationWithRecordIds:(id)arg1 recordType:(id)arg2 desiredKeys:(id)arg3 txn:(id)arg4 error:(id*)arg5;
- (bool)_evalQueryOperationWithRecordType:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 offset:(unsigned long long)arg4 resultsLimit:(unsigned long long)arg5 desiredKeys:(id)arg6 txn:(id)arg7 error:(id*)arg8 recordMatchedBlock:(id /* block */)arg9;
- (id)_filenameForLocallyCopiedAsset:(id)arg1 forRecordId:(id)arg2 error:(id*)arg3;
- (id)_keysForFieldsOfRecordType:(id)arg1;
- (id)_loadArrayForRecordType:(id)arg1 recordId:(id)arg2 fieldKey:(id)arg3 indexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 txn:(id)arg5 error:(id*)arg6;
- (bool)_parseArrayExpression:(id)arg1 forRecordType:(id)arg2 usingCTEName:(id)arg3 toSQLCommonTableExpression:(id*)arg4 paramBindings:(id*)arg5 error:(id*)arg6;
- (bool)_parseDecimalString:(id)arg1 value:(unsigned long long*)arg2;
- (bool)_parseDesiredKeys:(id)arg1 recordType:(id)arg2 unindexedFields:(id*)arg3 indexedFields:(id*)arg4 error:(id*)arg5;
- (id)_parseIndexedFieldKey:(id)arg1 indexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (bool)_parseScalarExpression:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5;
- (void)_processFetchRecordsOperation:(id)arg1;
- (void)_processModifyRecordsOperation:(id)arg1;
- (void)_processQueryOperation:(id)arg1;
- (bool)_replaceArrayFieldWithKey:(id)arg1 recordType:(id)arg2 recordId:(id)arg3 values:(id)arg4 txn:(id)arg5 error:(id*)arg6;
- (bool)_translateAnyModifiedArrayRHSComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5;
- (bool)_translateAnyModifiedScalarComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5;
- (bool)_translateArrayRHSComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5;
- (bool)_translateComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5;
- (bool)_translateCompoundPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5;
- (bool)_translateDirectModifiedArrayRHSComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5;
- (bool)_translateDirectModifiedScalarComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5;
- (bool)_translatePredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5;
- (bool)_translateScalarComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id*)arg3 paramBindings:(id*)arg4 error:(id*)arg5;
- (bool)_upsertRecord:(id)arg1 txn:(id)arg2 error:(id*)arg3;
- (id)_valueTypesForFieldsOfRecordType:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)closePermanently;
- (id)container;
- (id)databaseHandle;
- (id)delegate;
- (void)deleteRecordZoneWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithParentDir:(id)arg1 assetCacheDir:(id)arg2;
- (bool)migrateToVersion:(unsigned int)arg1;
- (id)migrations;
- (id)operationQueue;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int*)arg1;
- (void)saveRecordZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setContainer:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
