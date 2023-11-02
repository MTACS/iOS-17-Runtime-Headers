
@interface SKAdNetwork : NSObject

+ (void)endImpression:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)registerAppForAdNetworkAttribution;
+ (void)startImpression:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)updateConversionValue:(long long)arg1;
+ (void)updatePostbackConversionValue:(long long)arg1 coarseValue:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)updatePostbackConversionValue:(long long)arg1 coarseValue:(id)arg2 lockWindow:(bool)arg3 completionHandler:(id /* block */)arg4;
+ (void)updatePostbackConversionValue:(long long)arg1 completionHandler:(id /* block */)arg2;

@end
