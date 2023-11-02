
@interface HKSourceListDataSource : NSObject {
    bool  _deliverUpdates;
    NSMutableArray * _followupTransformers;
    bool  _hasInitiatedFetch;
    HKHealthStore * _healthStore;
    _Atomic bool  _invalidated;
    NSObject<OS_dispatch_queue> * _mainQueue;
    int  _notifyToken;
    HKSynchronousObserverSet * _observers;
    NSArray * _rawSources;
    NSObject<OS_dispatch_queue> * _resultsQueue;
    bool  _shouldFetchAppIcons;
    bool  _shouldFetchAppInstallationStatus;
    bool  _shouldFetchPurposeStrings;
    bool  _shouldIncludeSpecialSources;
    HKSourceListDataModel * _sources;
    NSMutableArray * _transformers;
}

@property (nonatomic) bool deliverUpdates;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic) bool shouldFetchAppIcons;
@property (nonatomic) bool shouldFetchAppInstallationStatus;
@property (nonatomic) bool shouldFetchPurposeStrings;
@property (nonatomic) bool shouldIncludeSpecialSources;
@property (nonatomic, readonly) HKSourceListDataModel *sources;

+ (id /* block */)_builtinIconFetchTransformer;
+ (id /* block */)_builtinInstallationStatusTransformer;
+ (id /* block */)_builtinPurposeStringsFetchTransformer;
+ (void)_performTransformations:(id)arg1 model:(id)arg2 completion:(id /* block */)arg3;
+ (void)_remoteWatchAppPurposeStringsForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)fetchIconForSource:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_didFetchSources:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_fakeSourceForInstalledAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_notifyObserversForDataSourceUpdate;
- (void)_prependBuiltinTransformers;
- (id)_specialAppBundleIdentifiers;
- (void)_throttledNotificationOfDataSourceUpdate;
- (void)addFetchTransformer:(id /* block */)arg1;
- (void)dealloc;
- (bool)deliverUpdates;
- (void)fetchModelForSources:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSources;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithHealthStore:(id)arg1 queue:(id)arg2;
- (id)initWithHealthStore:(id)arg1 sources:(id)arg2 queue:(id)arg3;
- (void)invalidate;
- (void)registerObserver:(id)arg1;
- (void)setDeliverUpdates:(bool)arg1;
- (void)setShouldFetchAppIcons:(bool)arg1;
- (void)setShouldFetchAppInstallationStatus:(bool)arg1;
- (void)setShouldFetchPurposeStrings:(bool)arg1;
- (void)setShouldIncludeSpecialSources:(bool)arg1;
- (bool)shouldFetchAppIcons;
- (bool)shouldFetchAppInstallationStatus;
- (bool)shouldFetchPurposeStrings;
- (bool)shouldIncludeSpecialSources;
- (id)sources;
- (void)unregisterObserver:(id)arg1;

@end
