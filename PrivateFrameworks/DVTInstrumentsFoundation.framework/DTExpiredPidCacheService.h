
@interface DTExpiredPidCacheService : XRExpiredPidCacheServiceProtected

+ (id)defaultCache;
+ (void)disableExpiredPidCaching;

- (id)allExpiredSignatures;
- (void)dealloc;
- (void)enableCaching:(bool)arg1;
- (id)init;
- (id)signatureForExpiredPid:(id)arg1;

@end
