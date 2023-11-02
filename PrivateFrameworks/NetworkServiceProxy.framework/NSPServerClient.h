
@interface NSPServerClient : NSObject <NSPServerCommands> {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_xpc_object> * _fetchTokenConnection;
    NSObject<OS_dispatch_queue> * _queue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)checkOriginAllowedAsThirdParty:(id)arg1;
- (void)convertPrivacyProxyConfigurationWithCompletionHandler:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dumpPrivacyProxyTokenEventsWithCompletionHandler:(id)arg1 mostRecent:(bool)arg2 limit:(unsigned long long)arg3 dumpStats:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)establishTrustWithEdgeSetForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAppRuleForLabel:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchCurrentConfigurationWithCompletionHandler:(id /* block */)arg1;
- (void)fetchEdgeSetForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchPrivateAccessTokenWithFetcher:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchStateForClient:(id)arg1 withPeerEndpoint:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getForceFallbackWithCompletionHandler:(id /* block */)arg1;
- (void)getGeohashSharingPreferenceWithCompletionHandler:(id /* block */)arg1;
- (void)getOverrideIngressProxyWithCompletionHandler:(id /* block */)arg1;
- (void)getOverrideProxiedContentMapEnabled:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPreferredProxyWithCompletionHandler:(id /* block */)arg1;
- (void)getPreferredResolverWithCompletionHandler:(id /* block */)arg1;
- (void)getPrivacyProxyAccountTypeWithCompletionHandler:(id /* block */)arg1;
- (void)getPrivacyProxyAppStatusesWithCompletionHandler:(id /* block */)arg1;
- (void)getPrivacyProxyConfiguration:(id /* block */)arg1;
- (void)getPrivacyProxyDomainFilters:(id /* block */)arg1;
- (void)getPrivacyProxyEffectiveUserTierWithCompletionHandler:(id /* block */)arg1;
- (void)getPrivacyProxyInfoWithCompletionHandler:(id /* block */)arg1;
- (void)getPrivacyProxyPolicyWithCompletionHandler:(id /* block */)arg1;
- (void)getPrivacyProxyServiceStatusTimelineWithCompletionHandler:(id /* block */)arg1;
- (void)getPrivacyProxyServiceStatusWithCompletionHandler:(id /* block */)arg1;
- (void)getPrivacyProxyStatusWithCompletionHandler:(id /* block */)arg1;
- (void)getPrivacyProxyTrafficStateWithCompletionHandler:(id /* block */)arg1;
- (void)getPrivacyProxyUserTierWithCompletionHandler:(id /* block */)arg1;
- (void)getPrivateAccessTokensEnabledWithCompletionHandler:(id /* block */)arg1;
- (void)locationAuthorizationStatusWithCompletionHandler:(id /* block */)arg1;
- (void)mergePrivacyProxyPolicy:(id /* block */)arg1;
- (void)overrideIngressProxy:(id)arg1 fallbackProxy:(id)arg2 key:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)overridePreferredProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)overridePreferredResolver:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)overrideProxiedContentMap:(id)arg1 enabled:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)privateAccessTokensAllowTools:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)refreshWaldoNowWithCompletionHandler:(id /* block */)arg1;
- (bool)removePrivacyProxyPolicy;
- (void)reportPrivacyProxyNetworkStatus:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reportPrivacyProxyServiceStatus:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)reportUsage:(id)arg1 fromClient:(id)arg2;
- (void)sendRTCReport:(long long)arg1 errorCode:(long long)arg2 url:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setAppRule:(id)arg1 forLabel:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setCurrentConfiguration:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setCurrentLatitude:(double)arg1 longitude:(double)arg2 timestamp:(id)arg3 forClient:(id)arg4;
- (void)setEdgeSet:(id)arg1 forIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setForceFallback:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setFreeUserTierUntilTomorrowWithCompletionHandler:(id /* block */)arg1;
- (void)setGeohashOverride:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setGeohashSharingPreference:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setInProcessFlowDivert:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setLocationMonitorInterval:(double)arg1;
- (void)setPreferredPathRoutingEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setPrivacyProxyAppStatus:(unsigned long long)arg1 bundleIdentifier:(id)arg2 path:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setPrivacyProxyConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPrivacyProxyPolicy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPrivacyProxyStatus:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setPrivacyProxyTokenEventsProactiveTokenFetchParams:(id)arg1 lowerTokenCountThresholdStr:(id)arg2 lowerTokenCountProbabilityStr:(id)arg3 statsDurationStr:(id)arg4 upperLWMCountThresholdStr:(id)arg5 upperLWMCountProbabilityOffsetStr:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)setPrivacyProxyTrafficState:(unsigned long long)arg1 proxyTraffic:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setPrivacyProxyUserTier:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setPrivateAccessTokensEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setProxiedContentMapDoHBootstrapEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setTestLatencyMap:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startLocationMonitor;
- (void)startProxyToMPTCPConverterProxyWithCompletionHandler:(id /* block */)arg1;
- (void)stopLocationMonitor;
- (void)stopProxyToMPTCPConverterProxyWithCompletionHandler:(id /* block */)arg1;

@end
