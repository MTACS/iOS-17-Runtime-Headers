
@interface WBSDigitalHealthManager : NSObject {
    <WBSDigitalHealthManagerDelegate> * _delegate;
    DMFWebsitePolicyMonitor * _monitor;
    NSMutableDictionary * _trackedUrlsProfileIdentifierPairToUsageState;
}

@property (nonatomic) <WBSDigitalHealthManagerDelegate> *delegate;

+ (void)_updateWebpageUsage:(id)arg1 withDigitalHealthManagerUsageState:(unsigned long long)arg2;
+ (void)deleteAllUsageHistoryWithProfileIdentifier:(id)arg1;
+ (void)deleteUsageHistoryForURLs:(id)arg1 profileIdentifier:(id)arg2;
+ (void)deleteUsageHistoryFromDate:(id)arg1 toDate:(id)arg2 profileIdentifier:(id)arg3;

- (void).cxx_destruct;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyWasCleared:(id)arg1;
- (void)_requestPoliciesForWebsites:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_startObserving;
- (void)_stopObserving;
- (void)_stopUsageTrackingForURL:(id)arg1 profileIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_updateUsageTrackingForURL:(id)arg1 withBundleIdentifier:(id)arg2 profileIdentifier:(id)arg3 toState:(unsigned long long)arg4;
- (void)dealloc;
- (id)delegate;
- (void)getOverlayStateForURLs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;
- (void)startObserving;
- (void)stopObservingWithCompletionHandler:(id /* block */)arg1;
- (void)stopUsageTrackingForURL:(id)arg1 profileIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)updateUsageTrackingForURL:(id)arg1 withBundleIdentifier:(id)arg2 profileIdentifier:(id)arg3 toState:(unsigned long long)arg4;

@end
