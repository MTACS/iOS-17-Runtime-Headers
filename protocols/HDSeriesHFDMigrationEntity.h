
@protocol HDSeriesHFDMigrationEntity

@required

+ (bool)migrateDataFromDataStore:(const void*)arg1 to:(void*)arg2 database:(HDSQLiteDatabase *)arg3 recoveryAnalytics:(NSMutableDictionary *)arg4 error:(id*)arg5;
+ (bool)migrateDataToSQLFromStore:(const void*)arg1 database:(HDSQLiteDatabase *)arg2 error:(id*)arg3;

@end
