
@interface BSSqlitePreparedStatement : NSObject {
    BSSqliteDatabaseConnection * _dbConnection;
}

- (void).cxx_destruct;
- (void)dealloc;
- (bool)executeWithBindings:(id)arg1 resultRowHandler:(id /* block */)arg2 error:(out id*)arg3;
- (id)init;

@end
