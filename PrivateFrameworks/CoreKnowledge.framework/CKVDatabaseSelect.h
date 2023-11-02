
@interface CKVDatabaseSelect : CKVDatabaseCommand

+ (id)builderWithTableName:(id)arg1;

- (void)addLimit:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (void)replaceOffset:(unsigned long long)arg1;

@end
