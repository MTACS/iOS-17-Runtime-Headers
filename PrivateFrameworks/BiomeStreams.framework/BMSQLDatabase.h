
@interface BMSQLDatabase : NSObject {
    NSMutableArray * _accessedColumns;
    struct sqlite3 { } * _db;
    bool  _isColumnAccessLoggingEnabled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _privileges;
    NSArray * _virtualTables;
}

@property (nonatomic, readonly) NSArray *accessedColumns;
@property (nonatomic, readonly) struct sqlite3 { }*db;
@property (nonatomic, readonly) bool isColumnAccessLoggingEnabled;
@property (nonatomic, readonly, copy) NSArray *privileges;
@property (nonatomic, readonly) NSArray *virtualTables;

- (void).cxx_destruct;
- (id)SQLSchemaString;
- (id)_executeQuery:(id)arg1;
- (id)accessedColumns;
- (bool)attachDatabase:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (struct sqlite3 { }*)db;
- (void)dealloc;
- (id)description;
- (id)executeQuery:(id)arg1;
- (bool)executeStatement:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithAdditionalVirtualTables:(id)arg1 privileges:(id)arg2 isColumnAccessLoggingEnabled:(bool)arg3;
- (id)initWithAdditionalVirtualTables:(id)arg1 privileges:(id)arg2 isColumnAccessLoggingEnabled:(bool)arg3 useCase:(id)arg4;
- (id)initWithPrivileges:(id)arg1 isColumnAccessLoggingEnabled:(bool)arg2;
- (id)initWithStreams:(id)arg1 library:(id)arg2 privileges:(id)arg3 isColumnAccessLoggingEnabled:(bool)arg4 error:(id*)arg5;
- (id)initWithUseCase:(id)arg1;
- (id)initWithVirtualTables:(id)arg1 privileges:(id)arg2 isColumnAccessLoggingEnabled:(bool)arg3 enableAuthorizer:(bool)arg4 error:(id*)arg5;
- (bool)isColumnAccessLoggingEnabled;
- (void)logColumnAccess:(id)arg1 tableName:(id)arg2;
- (id)privileges;
- (bool)registerFunctionWithName:(id)arg1 numArgs:(int)arg2 function:(id /* block */)arg3 error:(id*)arg4;
- (void)resetColumnAccessLog;
- (id)virtualTableForName:(id)arg1;
- (id)virtualTables;

@end
