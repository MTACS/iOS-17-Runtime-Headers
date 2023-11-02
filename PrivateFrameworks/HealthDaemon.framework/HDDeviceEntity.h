
@interface HDDeviceEntity : HDHealthEntity

+ (id)_codableDeviceWithRow:(struct HDSQLiteRow { }*)arg1;
+ (id)_insertDeviceWithUUID:(id)arg1 creationDate:(double)arg2 name:(id)arg3 manufacturer:(id)arg4 model:(id)arg5 hardwareVersion:(id)arg6 firmwareVersion:(id)arg7 softwareVersion:(id)arg8 localIdentifier:(id)arg9 UDIDeviceIdentifier:(id)arg10 syncProvenance:(long long)arg11 syncIdentity:(long long)arg12 database:(id)arg13 error:(id*)arg14;
+ (id)_propertiesForDevice;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)deviceEntitiesWithDevice:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)deviceEntitiesWithProperty:(id)arg1 matchingValues:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (id)deviceEntityWithDevice:(id)arg1 syncIdentity:(long long)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (id)deviceEntityWithUUID:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (bool)insertCodableDevices:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)uniquedColumns;

- (id)creationDateInHealthDatabase:(id)arg1 error:(id*)arg2;
- (id)deviceInHealthDatabase:(id)arg1 error:(id*)arg2;
- (id)deviceUUIDInDatabase:(id)arg1 error:(id*)arg2;
- (id)deviceUUIDInHealthDatabase:(id)arg1 error:(id*)arg2;

@end
