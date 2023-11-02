
@protocol MPServerObjectDatabaseOperations <NSObject>

@required

- (bool)importAssetSinf:(NSData *)arg1 type:(long long)arg2 forIdentifier:(NSString *)arg3 hashedPersonID:(NSString *)arg4 flavor:(long long)arg5 sinfPayload:(NSArray *)arg6;
- (bool)importAssetURL:(NSURL *)arg1 forIdentifiers:(MPIdentifierSet *)arg2 flavor:(long long)arg3 expirationDate:(NSDate *)arg4;
- (bool)importHLSAssetURL:(NSURL *)arg1 keyCertificateURL:(NSURL *)arg2 keyServerURL:(NSURL *)arg3 redeliveryId:(long long)arg4 protocolType:(NSString *)arg5 isiTunesStoreStream:(bool)arg6 forIdentifiers:(MPIdentifierSet *)arg7 expirationDate:(NSDate *)arg8;
- (bool)importObject:(NSDictionary *)arg1 type:(NSString *)arg2 identifiers:(MPIdentifierSet *)arg3 source:(long long)arg4 expiration:(NSDate *)arg5;
- (bool)importPlaybackAuthorizationToken:(NSDictionary *)arg1 identifiers:(MPIdentifierSet *)arg2 source:(long long)arg3 type:(NSString *)arg4 expirationDate:(NSDate *)arg5 trustID:(id <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider>)arg6;
- (bool)relateIdentifiers:(MPIdentifierSet *)arg1 toParentIdentifiers:(MPIdentifierSet *)arg2 parentVersionHash:(NSString *)arg3 childKey:(NSString *)arg4 order:(long long)arg5;
- (bool)removeRelationshipsForParentIdentifiers:(MPIdentifierSet *)arg1 childKey:(NSString *)arg2;

@end
