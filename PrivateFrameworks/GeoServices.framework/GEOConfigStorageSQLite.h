
@interface GEOConfigStorageSQLite : GEOConfigStorageSQLiteBase <GEOConfigStorageExpiry>

- (id)_getExpiringKeyForKey:(id)arg1;
- (id)_instanceSpecificGetKey:(id)arg1;
- (id)_instanceSpecificGetKeyPath:(id)arg1;
- (void)_instanceSpecificSetValue:(id)arg1 forKey:(id)arg2;
- (void)clearConfigKeyExpiry:(id)arg1;
- (id)getAllExpiringKeys;
- (bool)getConfigKeyExpiry:(id)arg1 date:(id*)arg2 osVersion:(id*)arg3;
- (bool)getConfigKeyIsExpired:(id)arg1;
- (void)setConfigKeyExpiry:(id)arg1 date:(id)arg2 osVersion:(id)arg3;

@end
