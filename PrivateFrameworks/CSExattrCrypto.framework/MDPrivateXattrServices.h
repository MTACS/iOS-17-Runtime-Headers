
@interface MDPrivateXattrServices : NSObject

+ (id)defaultServices;

- (void)_restoreAttributesFromDictionary:(id)arg1 intoDictionary:(id)arg2;
- (void)_restoreAttributesFromPlistBytes:(id)arg1 intoDictionary:(id)arg2;
- (id)copyPrivateXattrsDictionary:(id)arg1 cryptoCallback:(id /* block */)arg2;
- (id)copyPrivateXattrsFromData:(id)arg1;
- (id)copyPrivateXattrsFromData:(id)arg1 decryptedXids:(id*)arg2;
- (id)decryptDataArrayWithCryptoCallback:(id /* block */)arg1 dataArray:(id)arg2 existingXIDArray:(id)arg3 uuids:(id)arg4 xpc_uuids:(id)arg5 xids:(id)arg6;
- (id)decryptDataArrayWithCryptoCallback:(id /* block */)arg1 dataArray:(id)arg2 existingXIDArray:(id)arg3 uuids:(id)arg4 xpc_uuids:(id)arg5 xids:(id)arg6 decrypted:(id*)arg7;
- (void)digestUUIDBytesWithKey:(id)arg1 forUUID:(id)arg2 uuidBytes:(unsigned char)arg3;
- (void)digestUUIDBytesWithKey:(id)arg1 forXPCUUID:(id)arg2 uuidBytes:(unsigned char)arg3;
- (void)extractDecryptedDataWith:(id)arg1 cryptoCallback:(id /* block */)arg2 decryptableXids:(id)arg3 intoDict:(id)arg4 keyRing:(id)arg5 xid:(id)arg6;
- (void)updatePrivateXattrParams:(id)arg1 flags:(unsigned long long)arg2 forFileDescriptor:(int)arg3;
- (void)updatePrivateXattrParams:(id)arg1 flags:(unsigned long long)arg2 forFileDescriptor:(int)arg3 completionHandler:(id /* block */)arg4;
- (void)updatePrivateXattrParams:(id)arg1 flags:(unsigned long long)arg2 forFileDescriptor:(int)arg3 mergeCallback:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)xidDictWithUUIDs:(id)arg1 allKeyUUIDs:(id)arg2;
- (id)xidDictWithUUIDs:(id)arg1 fromKeyRing:(id)arg2;
- (id)xidDictWithXPCUUIDs:(id)arg1 allKeyUUIDs:(id)arg2;

@end
