
@interface WLKConfigurationRequest : NSObject

+ (id)_configURLString:(id*)arg1;
+ (void)_fetchV3WithOptions:(long long)arg1 cachePolicy:(unsigned long long)arg2 sessionConfiguration:(id)arg3 queryParameters:(id)arg4 completion:(id /* block */)arg5;
+ (void)fetchWithOptions:(long long)arg1 cachePolicy:(unsigned long long)arg2 wlkCachePolicy:(unsigned long long)arg3 extendedCacheExpireDuration:(double)arg4 sessionConfiguration:(id)arg5 queryParameters:(id)arg6 fileStorage:(id)arg7 completion:(id /* block */)arg8;

@end
