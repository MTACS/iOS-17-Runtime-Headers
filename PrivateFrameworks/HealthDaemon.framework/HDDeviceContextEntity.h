
@interface HDDeviceContextEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteDeviceContextWithSyncIdentity:(long long)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)deviceContextEntityWithSyncIdentity:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)deviceContextForLocalSyncIdentityWithTransaction:(id)arg1 error:(id*)arg2;
+ (bool)enumerateDeviceContextWithTransaction:(id)arg1 error:(id*)arg2 enumerationHandler:(id /* block */)arg3;
+ (id)foreignKeys;
+ (id)insertDeviceContext:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)lookupDeviceContext:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)lookupOrCreateDeviceContextForLocalSyncIdentityWithTransaction:(id)arg1 error:(id*)arg2;
+ (id)lookupOrCreateDeviceContextForSyncIdentity:(id)arg1 WithTransaction:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (bool)updateDeviceContext:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (bool)updateSoftwareVersionForDeviceContext:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
