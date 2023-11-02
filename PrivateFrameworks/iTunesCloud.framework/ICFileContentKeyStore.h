
@interface ICFileContentKeyStore : NSObject <ICContentKeyStoreProtocol> {
    NSString * _filePath;
}

@property (nonatomic, readonly, copy) NSString *filePath;

- (void).cxx_destruct;
- (id)_filePathForKeyIdentifier:(id)arg1;
- (id)_keyEntryForIdentifier:(id)arg1 error:(id*)arg2;
- (bool)containsKeyForIdentifier:(id)arg1 error:(id*)arg2;
- (void)enumerateKeyEntriesUsingBlock:(id /* block */)arg1;
- (id)filePath;
- (id)incrementFailureCountForKeyWithIdentifier:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)loadKeyForIdentifier:(id)arg1 error:(id*)arg2;
- (id)removeAllKeys;
- (id)removeKeyForIdentifier:(id)arg1;
- (id)saveKey:(id)arg1 forIdentifier:(id)arg2 adamID:(id)arg3 withRenewalDate:(id)arg4 accountDSID:(id)arg5 keyServerProtocolType:(long long)arg6;
- (id)saveKeyEntry:(id)arg1;

@end
