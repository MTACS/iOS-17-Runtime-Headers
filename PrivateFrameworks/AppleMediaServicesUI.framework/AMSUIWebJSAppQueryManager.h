
@interface AMSUIWebJSAppQueryManager : NSObject <ASDAppQueryResultsObserver> {
    <AMSUIWebJSAppQueryManagerDelegate> * _delegate;
    NSMutableDictionary * _observingQueries;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSUIWebJSAppQueryManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *observingQueries;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_encodeApp:(id)arg1;
- (id)_executeAppQuery:(id)arg1;
- (void)_postMediaQueryResultsChangeEventWithApps:(id)arg1;
- (void)appQuery:(id)arg1 resultsDidChange:(id)arg2;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (id)observingQueries;
- (id)queryAppsWithBundleIDs:(id)arg1 startObserving:(bool)arg2;
- (id)queryAppsWithStoreItemIDs:(id)arg1 startObserving:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)stopObservingAllApps;
- (void)stopObservingAppsWithBundleIDs:(id)arg1;
- (void)stopObservingAppsWithStoreItemIDs:(id)arg1;

@end
