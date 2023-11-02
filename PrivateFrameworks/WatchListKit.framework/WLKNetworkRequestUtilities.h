
@interface WLKNetworkRequestUtilities : NSObject

+ (id)_defaultAppSessionConfiguration;
+ (id)_sharedCacheSessionConfiguration;
+ (id)configurationBaseURLString;
+ (id)defaultSessionConfiguration;
+ (bool)isGDPRAccepted;
+ (void)startNetworkRequest:(id)arg1 account:(id)arg2 sessionConfiguration:(id)arg3 options:(long long)arg4 completion:(id /* block */)arg5;

@end
