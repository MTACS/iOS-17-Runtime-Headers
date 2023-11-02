
@protocol MCMCommandContext <NSObject>

@required

- (MCMClientIdentity *)clientIdentity;
- (<MCMContainerCache> *)containerCache;
- (<MCMContainerFactory> *)containerFactory;
- (MCMUserIdentityCache *)userIdentityCache;

@end
