
@interface MTCoreDataKeyRequestStorage : NSObject <MTSecureKeyRequestStorage>

- (id)init;
- (bool)keyExistsInStorageFor:(long long)arg1;
- (void)markOfflineKeyFor:(long long)arg1 pendingDeletion:(bool)arg2;
- (void)removeAllKeyDataWithCompletion:(id /* block */)arg1;
- (void)removeKeyDataFor:(id)arg1;
- (void)removeKeyDataForStoreTrackID:(long long)arg1;
- (id)retrieveKeyDataFor:(id)arg1;
- (bool)saveKeyDataFor:(id)arg1;
- (void)saveKeyDataWithKeyIdentifier:(id)arg1 storeTrackID:(long long)arg2 keyData:(id)arg3 renewalDate:(id)arg4 dsid:(long long)arg5 responseQueue:(id)arg6 completion:(id /* block */)arg7;

@end
