
@interface DMClientAPIController : NSObject {
    unsigned long long  _connectionMigrationMaximumAttempts;
    double  _connectionMigrationTimeIntervalToLastRetryDate;
}

@property (nonatomic) unsigned long long connectionMigrationMaximumAttempts;
@property (nonatomic) double connectionMigrationTimeIntervalToLastRetryDate;

- (bool)_migrateWithConnection:(id)arg1 checkNecessity:(bool)arg2 lastRelevantPlugin:(id)arg3 testMigrationInfrastructureOnly:(bool)arg4;
- (unsigned long long)connectionMigrationMaximumAttempts;
- (double)connectionMigrationTimeIntervalToLastRetryDate;
- (id)init;
- (void)progressHostIsReady;
- (void)setConnectionMigrationMaximumAttempts:(unsigned long long)arg1;
- (void)setConnectionMigrationTimeIntervalToLastRetryDate:(double)arg1;

@end
