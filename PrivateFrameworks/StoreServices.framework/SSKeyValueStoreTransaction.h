
@interface SSKeyValueStoreTransaction : SSKeyValueStoreSession

- (void)removeAccountFromDomain:(id)arg1;
- (bool)setData:(id)arg1 forDomain:(id)arg2 key:(id)arg3;
- (bool)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3;

@end
