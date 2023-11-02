
@interface HKWatchAppAvailability : NSObject <ASDAppQueryResultsObserver> {
    NSArray * __test_apps;
    NSString * _bundleID;
    long long  _installState;
    HKObserverSet<HKWatchAppAvailabilityObserver> * _observers;
    ASDAppQuery * _query;
}

@property (nonatomic, retain) NSArray *_test_apps;
@property (nonatomic, readonly) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long installState;
@property (nonatomic, retain) HKObserverSet<HKWatchAppAvailabilityObserver> *observers;
@property (nonatomic, retain) ASDAppQuery *query;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_test_apps;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (void)appInstallStateOnWatch:(id)arg1 completion:(id /* block */)arg2;
- (void)appQuery:(id)arg1 resultsDidChange:(id)arg2;
- (id)bundleID;
- (void)dealloc;
- (id)findApplicationIn:(id)arg1;
- (id)initWithBundleID:(id)arg1;
- (long long)installState;
- (id)observers;
- (id)query;
- (void)removeObserver:(id)arg1;
- (void)setInstallState:(long long)arg1;
- (void)setObservers:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)set_test_apps:(id)arg1;

@end
