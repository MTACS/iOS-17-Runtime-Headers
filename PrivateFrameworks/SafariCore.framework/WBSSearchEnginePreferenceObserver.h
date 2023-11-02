
@interface WBSSearchEnginePreferenceObserver : NSObject {
    <WBSSearchEnginePreferenceObserverDelegate> * _delegate;
    bool  _duckDuckGoDefaultSearchEngine;
    bool  _googleIsDefaultSearchEngine;
    bool  _isGoogleEnabledSearchEngine;
    <WBSSearchProviderContext> * _searchProviderContext;
}

@property (nonatomic, readonly) bool defaultSearchEngineMatchesExperiment;
@property (nonatomic, readonly, copy) NSString *defaultSearchEngineShortName;
@property (nonatomic) <WBSSearchEnginePreferenceObserverDelegate> *delegate;
@property (nonatomic, readonly) bool duckDuckGoDefaultSearchEngine;
@property (nonatomic, readonly) bool googleIsDefaultSearchEngine;
@property (nonatomic, readonly) bool isABTestingEnabled;
@property (nonatomic, readonly) bool isGoogleEnabledSearchEngine;

+ (void)setUpSharedObserverWithSearchProviderContext:(id)arg1;
+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)_updateSearchEnginePreference:(id)arg1;
- (bool)defaultSearchEngineMatchesExperiment;
- (id)defaultSearchEngineShortName;
- (id)delegate;
- (bool)duckDuckGoDefaultSearchEngine;
- (bool)googleIsDefaultSearchEngine;
- (id)initWithSearchProviderContext:(id)arg1;
- (bool)isABTestingEnabled;
- (bool)isGoogleEnabledSearchEngine;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;

@end
