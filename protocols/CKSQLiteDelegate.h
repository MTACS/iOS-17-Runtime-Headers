
@protocol CKSQLiteDelegate

@required

- (bool)migrateDatabase:(CKSQLite *)arg1 fromVersion:(int)arg2;
- (int)userVersion;

@end
