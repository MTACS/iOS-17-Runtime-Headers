
@interface APProxyURLUtilities : NSObject

+ (id)_proxyURLForVideoURL:(id)arg1 adIdentifier:(id)arg2 changeScheme:(bool)arg3;
+ (bool)_shouldProxyRequestToHost:(id)arg1;
+ (void)changeSchemeTo:(long long)arg1 forUrlRequest:(id)arg2;
+ (id)composeUserAgentString:(id)arg1 adIdentifier:(id)arg2 maxRequestCount:(long long)arg3;
+ (void)parseUserAgentString:(id)arg1 adIdentifier:(id*)arg2 maxRequestCount:(id*)arg3;
+ (id)proxyURLForVideoURL:(id)arg1 adIdentifier:(id)arg2 changeScheme:(bool)arg3;
+ (bool)shouldProxyRequestToHost:(id)arg1;

@end
