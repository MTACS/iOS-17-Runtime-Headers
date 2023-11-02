
@interface MSAuthTokenProvider : NSObject

+ (void)fetchAuthTokensForMediaService:(id)arg1 networkActivity:(id)arg2 completion:(id /* block */)arg3;
+ (void)validateConfigurationResourceForMediaService:(id)arg1 networkActivity:(id)arg2 completion:(id /* block */)arg3;

@end
