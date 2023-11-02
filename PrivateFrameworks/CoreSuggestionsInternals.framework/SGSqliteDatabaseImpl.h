
@interface SGSqliteDatabaseImpl : _PASSqliteDatabase {
    SGSqliteDatabase * _sgDb;
}

- (void).cxx_destruct;
- (bool)handleError:(long long)arg1 sqliteError:(int)arg2 forQuery:(id)arg3 onError:(id /* block */)arg4;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3 sgDb:(id)arg4;

@end
