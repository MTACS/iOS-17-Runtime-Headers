
@interface WPResources : NSObject {
    NSDictionary * _cachedLinkFilteringData;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _cachedLinkFilteringDataMutex;
}

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_doWithCachedLinkFilteringData:(id /* block */)arg1;
- (void)_installMessageHandlerForTesting:(id /* block */)arg1;
- (void)_makeXPCTimeoutInstantForTesting;
- (void)_resetStateForTesting;
- (void)_waitForCachedLinkFilteringData;
- (void)loadTrackerBlockerRuleListForStore:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestAllowedLinkFilteringData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestLinkFilteringData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestTrackerBlockerContentExtension:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestTrackerDomainNames:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestTrackerDomainNamesData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestTrackerNetworkAddresses:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestTrackerQueryParameters:(id)arg1 completionHandler:(id /* block */)arg2;

@end
