
@protocol FCAVAssetKeyCacheType

@required

- (<FCAVAssetKeyType> *)assetKeyForURI:(NSURL *)arg1;
- (void)clearKeyServerCertificate;
- (void)importAVAssetKey:(NTPBAVAssetKey *)arg1;
- (FCInterestToken *)interestTokenForKeyURIs:(NSArray *)arg1;
- (NSData *)keyServerCertificate;
- (void)removeAllAssetKeys;
- (void)saveAssetKeyData:(NSData *)arg1 creationDate:(NSDate *)arg2 expirationDate:(NSDate *)arg3 forURI:(NSURL *)arg4;
- (void)saveKeyServerCertificate:(NSData *)arg1;

@end
