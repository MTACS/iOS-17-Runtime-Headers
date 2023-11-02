
@interface CKEncryptedRecordValueStore : CKRecordValueStore

- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (bool)isEncrypted;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setCompatibilityModeObjectNoValidate:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
