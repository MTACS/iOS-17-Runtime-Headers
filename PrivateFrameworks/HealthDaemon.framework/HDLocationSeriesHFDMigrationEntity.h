
@interface HDLocationSeriesHFDMigrationEntity : NSObject <HDSeriesHFDMigrationEntity>

+ (bool)migrateDataFromDataStore:(const void*)arg1 to:(void*)arg2 database:(id)arg3 recoveryAnalytics:(id)arg4 error:(id*)arg5;
+ (bool)migrateDataToSQLFromStore:(const void*)arg1 database:(id)arg2 error:(id*)arg3;

@end
