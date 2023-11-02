
@interface FCAVEphemeralAssetKeyCache : NSObject <FCAVAssetKeyCacheType> {
    FCThreadSafeMutableDictionary * _dictionary;
    NSData * _keyServerCertificate;
}

@property (nonatomic, readonly, copy) NSData *keyServerCertificate;

- (void).cxx_destruct;
- (id)assetKeyForURI:(id)arg1;
- (void)clearKeyServerCertificate;
- (void)importAVAssetKey:(id)arg1;
- (id)init;
- (id)interestTokenForKeyURIs:(id)arg1;
- (id)keyServerCertificate;
- (void)removeAllAssetKeys;
- (void)saveAssetKeyData:(id)arg1 creationDate:(id)arg2 expirationDate:(id)arg3 forURI:(id)arg4;
- (void)saveKeyServerCertificate:(id)arg1;

@end
