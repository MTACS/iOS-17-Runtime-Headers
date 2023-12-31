
@protocol CKRecordKeyValueSetting <NSObject>

@required

- (NSArray *)allKeys;
- (NSArray *)changedKeys;
- (<CKRecordValue> *)objectForKey:(NSString *)arg1;
- (<CKRecordValue> *)objectForKeyedSubscript:(NSString *)arg1;
- (void)setObject:(id <CKRecordValue>)arg1 forKey:(NSString *)arg2;
- (void)setObject:(id <CKRecordValue>)arg1 forKeyedSubscript:(NSString *)arg2;

@end
