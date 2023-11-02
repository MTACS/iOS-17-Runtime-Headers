
@interface ML3DatabaseRecoveryOperation : NSOperation {
    NSError * _error;
    NSString * _path;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (id)_createSQLiteErrorWithCode:(int)arg1 description:(id)arg2;
- (id)_lastCorruptionRestoreAttemptDate;
- (void)_recreateDatabaseWithCompletion:(id /* block */)arg1;
- (void)_updateLastCorruptionRestoreAttemptDate;
- (id)error;
- (id)initWithDatabaseFilePath:(id)arg1;
- (void)main;
- (id)path;

@end
