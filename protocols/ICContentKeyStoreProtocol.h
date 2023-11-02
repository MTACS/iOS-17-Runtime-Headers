
@protocol ICContentKeyStoreProtocol

@required

- (bool)containsKeyForIdentifier:(NSString *)arg1 error:(id*)arg2;
- (void)enumerateKeyEntriesUsingBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ICContentKeyStoreEntry *, bool*, void*
- (NSError *)incrementFailureCountForKeyWithIdentifier:(NSString *)arg1;
- (ICContentKeyStoreEntry *)loadKeyForIdentifier:(NSString *)arg1 error:(id*)arg2;
- (NSError *)removeAllKeys;
- (NSError *)removeKeyForIdentifier:(NSString *)arg1;
- (NSError *)saveKey:(NSData *)arg1 forIdentifier:(NSString *)arg2 adamID:(NSNumber *)arg3 withRenewalDate:(NSDate *)arg4 accountDSID:(NSNumber *)arg5 keyServerProtocolType:(long long)arg6;
- (NSError *)saveKeyEntry:(ICContentKeyStoreEntry *)arg1;

@end
