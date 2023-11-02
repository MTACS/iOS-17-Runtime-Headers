
@interface _PBFSQLitePreparedSimpleStatement : PBFSQLitePreparedStatement <PBFSQLiteDatabaseConnectionObserver> {
    struct sqlite3_stmt { } * _statement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (bool)executeWithBindings:(id)arg1 resultRowHandler:(id /* block */)arg2 error:(out id*)arg3;
- (void)sqliteDatabaseConnectionWillClose:(id)arg1;

@end
