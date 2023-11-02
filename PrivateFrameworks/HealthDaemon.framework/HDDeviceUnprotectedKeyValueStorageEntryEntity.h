
@interface HDDeviceUnprotectedKeyValueStorageEntryEntity : HDDeviceKeyValueStorageEntryEntity

+ (id)_propertiesForEntity;
+ (void)binderHandlerForBinder:(struct HDSQLiteStatementBinder { }*)arg1 key:(id)arg2 domain:(id)arg3 object:(id)arg4 syncEntityIdentity:(long long)arg5 deviceContext:(long long)arg6 modificationDate:(id)arg7;
+ (void)binderHandlerForBinder:(struct HDSQLiteStatementBinder { }*)arg1 syncEntityIdentity:(long long)arg2 deviceContext:(long long)arg3;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;

@end
