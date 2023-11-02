
@interface PrivacyProxyClient : NSObject

+ (bool)currentProcessShouldUseOpaqueProxying;
+ (void)getAppStatuses:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getEffectiveUserTier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getForceFallback:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getGeohashSharingPreference:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getOverriddeIngressProxy:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getPreferredProxy:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getPreferredResolver:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getPrivacyProxyAccountType:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getPrivacyProxyAccountTypeExtended:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getPrivateAccessTokensEnabled:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getServiceStatus:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getServiceStatusTimeline:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getStatus:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getTrafficState:(id)arg1 completionandler:(id /* block */)arg2;
+ (void)getUserTier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getUserTierExtended:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)overrideIngressProxy:(id)arg1 fallbackProxy:(id)arg2 key:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)overridePreferredProxy:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)overridePreferredResolver:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)reportCellularNetworkStatus:(bool)arg1 networkName:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)reportWiFiNetworkStatus:(bool)arg1 networkName:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)setAppStatus:(unsigned long long)arg1 bundleIdentifier:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)setAppStatus:(unsigned long long)arg1 path:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)setEnabled:(bool)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)setForceFallback:(bool)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)setFreeUserTierUntilTomorrow:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)setGeohashSharingPreference:(bool)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)setPrivateAccessTokensEnabled:(bool)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)setTrafficState:(unsigned long long)arg1 proxyTraffic:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)setUserTier:(unsigned long long)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;

@end
