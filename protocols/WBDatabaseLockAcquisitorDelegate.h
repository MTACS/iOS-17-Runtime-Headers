
@protocol WBDatabaseLockAcquisitorDelegate <NSObject>

@optional

- (void)databaseLockAcquisitor:(WBDatabaseLockAcquisitor *)arg1 acquiredLock:(bool)arg2;

@end
