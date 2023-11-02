
@protocol HDSQLiteDatabaseProvider <NSObject>

@required

- (void)checkInDatabase:(HDSQLiteDatabase *)arg1 type:(long long)arg2 protectedResources:(NSDictionary *)arg3;
- (HDSQLiteDatabase *)checkOutProtectedDatabase:(HDDatabaseTransaction *)arg1 error:(id*)arg2;
- (NSDictionary *)checkOutProtectedResources:(HDDatabaseTransaction *)arg1 error:(id*)arg2;
- (HDSQLiteDatabase *)checkOutUnprotectedDatabase:(HDDatabaseTransaction *)arg1 error:(id*)arg2;

@end
