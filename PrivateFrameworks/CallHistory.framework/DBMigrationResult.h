
@interface DBMigrationResult : NSObject {
    long long  _dbVersion;
    long long  _errorCode;
}

@property (nonatomic) long long dbVersion;
@property (nonatomic) long long errorCode;

- (long long)dbVersion;
- (long long)errorCode;
- (id)initWithErrorCode:(long long)arg1 andDBVersion:(long long)arg2;
- (void)setDbVersion:(long long)arg1;
- (void)setErrorCode:(long long)arg1;

@end
