
@interface HDProtectedKeyValueEntity : HDKeyValueEntity

+ (long long)_deviceLocalCategory;
+ (const char *)_insertStatementKey;
+ (id)databaseTable;
+ (id)keyForUserCharacteristicType:(id)arg1;
+ (id)modificationDateForCharacteristicWithType:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (bool)setUserCharacteristic:(id)arg1 forType:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)userCharacteristicForType:(id)arg1 profile:(id)arg2 entity:(id*)arg3 error:(id*)arg4;

@end
