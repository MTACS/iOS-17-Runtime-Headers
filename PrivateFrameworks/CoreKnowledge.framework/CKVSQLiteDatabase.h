
@interface CKVSQLiteDatabase : NSObject <CKVDatabase> {
    long long  _accessPermission;
    NSMutableDictionary * _cachedSQLiteStatements;
    int  _dataProtectionClass;
    long long  _databaseOptions;
    struct sqlite3 { } * _handle;
    NSString * _path;
    long long  _threadingMode;
}

@property (nonatomic, readonly) long long accessPermission;
@property (nonatomic, readonly) int dataProtectionClass;
@property (nonatomic, readonly) long long databaseOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *path;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long threadingMode;

- (void).cxx_destruct;
- (long long)accessPermission;
- (bool)beginTransactionWithError:(id*)arg1;
- (bool)cleanup:(id*)arg1;
- (bool)closeWithError:(id*)arg1;
- (bool)commitTransactionWithError:(id*)arg1;
- (int)dataProtectionClass;
- (long long)databaseOptions;
- (id)executeCommand:(id)arg1 options:(unsigned long long)arg2;
- (bool)executeCommand:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)executeCommandString:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithPath:(id)arg1 accessPermission:(long long)arg2 threadingMode:(long long)arg3 dataProtectionClass:(int)arg4 databaseOptions:(long long)arg5;
- (bool)openWithError:(id*)arg1;
- (id)path;
- (bool)rollbackTransactionWithError:(id*)arg1;
- (int)rowsModified:(id*)arg1;
- (long long)threadingMode;

@end
