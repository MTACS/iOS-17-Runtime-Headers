
@interface PBFSQLitePreparedStatement : NSObject {
    PBFSQLiteDatabaseConnection * _dbConnection;
    NSObject<OS_os_log> * _loggingCategory;
}

@property (nonatomic) NSObject<OS_os_log> *loggingCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)executeWithBindings:(id)arg1 resultRowHandler:(id /* block */)arg2 error:(out id*)arg3;
- (id)init;
- (id)loggingCategory;
- (void)setLoggingCategory:(id)arg1;

@end
