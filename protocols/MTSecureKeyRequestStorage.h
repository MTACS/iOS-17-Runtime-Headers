
@protocol MTSecureKeyRequestStorage

@required

- (bool)keyExistsInStorageFor:(long long)arg1;
- (void)markOfflineKeyFor:(long long)arg1 pendingDeletion:(bool)arg2;
- (void)removeAllKeyDataWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)removeKeyDataFor:(MTContentKeyResponse *)arg1;
- (void)removeKeyDataForStoreTrackID:(long long)arg1;
- (MTContentKeyResponse *)retrieveKeyDataFor:(MTContentKeyRequest *)arg1;
- (bool)saveKeyDataFor:(MTContentKeyResponse *)arg1;
- (void)saveKeyDataWithKeyIdentifier:(void *)arg1 storeTrackID:(void *)arg2 keyData:(void *)arg3 renewalDate:(void *)arg4 dsid:(void *)arg5 responseQueue:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 12: NSString *, long long, NSData *, NSDate *, long long, OS_dispatch_queue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
