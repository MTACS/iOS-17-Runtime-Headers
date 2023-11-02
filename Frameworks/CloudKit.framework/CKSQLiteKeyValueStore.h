
@interface CKSQLiteKeyValueStore : CKSQLiteTable

+ (id)dbProperties;
+ (Class)entryClass;

- (id)UUIDValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id*)arg4;
- (id)dataValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id*)arg4;
- (id)dateValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id*)arg4;
- (id)numberValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id*)arg4;
- (id)objectValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id*)arg4;
- (void)purgeOrphanedKeys;
- (void)purgeOrphanedTableGroupKeys;
- (void)purgeOrphanedTableKeys;
- (id)setDataValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;
- (id)setDateValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;
- (id)setNumberValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;
- (id)setObjectValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;
- (id)setStringValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;
- (id)setUUIDValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;
- (id)stringValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id*)arg4;
- (id)wakeFromDatabase;

@end
