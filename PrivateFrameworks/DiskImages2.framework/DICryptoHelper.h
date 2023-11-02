
@interface DICryptoHelper : NSObject

+ (bool)BigToHostWithPubKeyHeader:(void*)arg1;
+ (bool)createPublicKeyHeaderWithBackendXPC:(id)arg1 publicKeyHeader:(void*)arg2 error:(id*)arg3;
+ (struct unique_ptr<crypto::auth_table_entry, std::default_delete<crypto::auth_table_entry>> { struct __compressed_pair<crypto::auth_table_entry *, std::default_delete<crypto::auth_table_entry>> { struct auth_table_entry {} *x_1_1_1; } x1; })getAuthEntryWithBackend:(struct shared_ptr<Backend> { struct Backend {} *x1; struct __shared_weak_count {} *x2; })arg1 authTableNumEntries:(int)arg2 mechanism:(int)arg3 error:(id*)arg4;
+ (struct unique_ptr<char, std::function<void (char *)>>={__compressed_pair<char *, std::function<void (char *)>>=*{function<void (char *)>={__value_func<void (char *)>={type=[24C] {})getAuthValueWithBackend:(struct shared_ptr<Backend> { struct Backend {} *x1; struct __shared_weak_count {} *x2; })arg1 authTableNumEntries:(int)arg2 mechanism:(int)arg3 error:(id*)arg4;
+ (bool)getPassphraseUsingSaksWithBackendXPC:(id)arg1 passPhrase:(char *)arg2 error:(id*)arg3;
+ (bool)getPrivateKeyWithHeader:(void*)arg1 privateKey:(struct __SecKey {}**)arg2 error:(id*)arg3;
+ (bool)getPublicKeyWithCertificate:(id)arg1 key:(struct __SecKey {}**)arg2 error:(id*)arg3;
+ (bool)validateWithPubKeyHeader:(void*)arg1;

@end
