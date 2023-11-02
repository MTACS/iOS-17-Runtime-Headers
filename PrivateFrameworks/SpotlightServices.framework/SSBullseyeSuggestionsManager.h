
@interface SSBullseyeSuggestionsManager : NSObject {
    SSCoreMLInterface * _blendingModel;
    NSString * _blendingModelPath;
    NSDictionary * _defaultOptions;
    bool  _enabledAboveFoldResults;
    bool  _enabledFullSuggestionsBlending;
    bool  _enabledSuggestionsBlending;
    bool  _enabledSuggestionsOverrides;
    bool  _ignoreMaxCount;
    unsigned long long  _localDisplayPosition;
    NSNumber * _localSuggestionThreshold;
    long long  _maxLocalSuggestionCount;
    long long  _maxServerSuggestionCount;
    long long  _maxTotalSuggestionCount;
    long long  _maxTotalSuggestionCountForAboveFoldResults;
    NSDictionary * _modelFeatureNames;
    NSObject<OS_dispatch_queue> * _queue;
    SRResources * _resources;
    NSNumber * _serverSuggestionThreshold;
}

@property (nonatomic, readonly) SSCoreMLInterface *blendingModel;
@property (nonatomic, readonly) NSString *blendingModelPath;
@property (nonatomic, readonly) bool enabledAboveFoldResults;
@property (nonatomic, readonly) bool enabledFullSuggestionsBlending;
@property (nonatomic, readonly) bool enabledSuggestionsBlending;
@property (nonatomic, readonly) bool enabledSuggestionsOverrides;
@property (nonatomic, readonly) bool ignoreMaxCount;
@property (nonatomic, readonly) unsigned long long localDisplayPosition;
@property (nonatomic, readonly) NSNumber *localSuggestionThreshold;
@property (nonatomic, readonly) long long maxLocalSuggestionCount;
@property (nonatomic, readonly) long long maxServerSuggestionCount;
@property (nonatomic, readonly) long long maxTotalSuggestionCount;
@property (nonatomic, readonly) long long maxTotalSuggestionCountForAboveFoldResults;
@property (nonatomic, readonly) NSDictionary *modelFeatureNames;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) SRResources *resources;
@property (nonatomic, readonly) NSNumber *serverSuggestionThreshold;

+ (id)sharedSuggestionsManager;

- (void).cxx_destruct;
- (void)_filterSuggestionResultsWithQueryContext:(id)arg1 filters:(id)arg2 entityFilters:(id)arg3 contactFilters:(id)arg4 contactSuggestionResults:(id)arg5 localSuggestionResults:(id)arg6 serverSuggestionResults:(id)arg7 options:(id)arg8;
- (id)_getScoreForSuggestionResult:(id)arg1 options:(id)arg2;
- (id)_rankedSuggestionsResultsWithQueryContext:(id)arg1 serverSuggestionResults:(id)arg2 localSuggestionResults:(id)arg3 options:(id)arg4;
- (id)blendingModel;
- (id)blendingModelPath;
- (void)clearBlendingModel;
- (id)dawnburst_blendingByPolicyWithQueryContext:(id)arg1 filters:(id)arg2 entityFilters:(id)arg3 contactFilters:(id)arg4 userSuggestion:(id)arg5 userWebSuggestion:(id)arg6 actionSuggestionResults:(id)arg7 contactSuggestionResults:(id)arg8 serverSuggestionResults:(id)arg9 localSuggestionResults:(id)arg10 options:(id)arg11;
- (id)dawnburst_blendingWithQueryContext:(id)arg1 filters:(id)arg2 entityFilters:(id)arg3 contactFilters:(id)arg4 userSuggestion:(id)arg5 userWebSuggestion:(id)arg6 shortcutSuggestionResults:(id)arg7 actionSuggestionResults:(id)arg8 contactSuggestionResults:(id)arg9 serverSuggestionResults:(id)arg10 localSuggestionResults:(id)arg11 options:(id)arg12;
- (bool)enabledAboveFoldResults;
- (bool)enabledFullSuggestionsBlending;
- (bool)enabledSuggestionsBlending;
- (bool)enabledSuggestionsOverrides;
- (bool)ignoreMaxCount;
- (id)initWithOptions:(id)arg1;
- (void)loadBlendingModelWithPath:(id)arg1 forceLoad:(bool)arg2;
- (void)loadDefaultsWithOptions:(id)arg1;
- (unsigned long long)localDisplayPosition;
- (id)localSuggestionThreshold;
- (long long)maxLocalSuggestionCount;
- (long long)maxServerSuggestionCount;
- (long long)maxTotalSuggestionCount;
- (long long)maxTotalSuggestionCountForAboveFoldResults;
- (id)modelFeatureNames;
- (id)orderedSuggestionsWithQueryContext:(id)arg1 filters:(id)arg2 entityFilters:(id)arg3 contactFilters:(id)arg4 userSuggestion:(id)arg5 userWebSuggestion:(id)arg6 shortcutSuggestionResults:(id)arg7 actionSuggestionResults:(id)arg8 contactSuggestionResults:(id)arg9 serverSuggestionResults:(id)arg10 localSuggestionResults:(id)arg11 options:(id)arg12;
- (id)queue;
- (id)resources;
- (id)serverSuggestionThreshold;
- (void)setBlendingModel:(id)arg1;
- (id)suggestionKeyWithCompletion:(id)arg1;
- (id)sydro_blendingByPolicyWithQueryContext:(id)arg1 filters:(id)arg2 entityFilters:(id)arg3 contactFilters:(id)arg4 userSuggestion:(id)arg5 userWebSuggestion:(id)arg6 shortcutSuggestionResults:(id)arg7 actionSuggestionResults:(id)arg8 contactSuggestionResults:(id)arg9 serverSuggestionResults:(id)arg10 localSuggestionResults:(id)arg11 options:(id)arg12;
- (void)updateDefaultsWithOptions:(id)arg1;

@end
