
@interface ICDelegateAccountStoreSchema : NSObject

+ (bool)_createDefaultSchemaWithConnection:(id)arg1 error:(id*)arg2;
+ (long long)currentVersion;
+ (id)dateForValue:(double)arg1;
+ (id)defaultDatabasePath;
+ (bool)setupWithConnection:(id)arg1 error:(id*)arg2;
+ (double)valueForDate:(id)arg1;

@end
