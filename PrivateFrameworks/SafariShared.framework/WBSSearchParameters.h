
@interface WBSSearchParameters : NSObject <NSSecureCoding> {
    double  _CFSearchTimeout;
    long long  _characterThresholdForAnywhereInTitleOrURL;
    long long  _characterThresholdForStartOfTitle;
    long long  _characterThresholdForStartOfTitleWord;
    long long  _characterThresholdForStartOfTitleWordMatchLongEnoughForTopHit;
    long long  _characterThresholdForStartOfURL;
    long long  _characterThresholdForStartOfURLPathComponent;
    bool  _enableCompletionListHistoryDeduplicationSwitchToTabValue;
    bool  _enableCompletionListHistoryDeduplicationValue;
    bool  _isCFSearch;
    bool  _isDedupeThroughAlternativeURLsEnabled;
    bool  _isForVoiceSearch;
    bool  _isLocalPhantomTophitDisabled;
    bool  _isMoreSearchProviderSuggestionsEnabled;
    bool  _isReflectUserIntentInSearchEnabled;
    bool  _isResponsiveCompletionListEnabled;
    bool  _isResultFilteringDisabled;
    bool  _isStreamlinedCompletionListEnabled;
    long long  _matchingWordsInTitleThreshold;
    long long  _maxBookmarksAndHistoryItems;
    double  _normalizedTopSitesScoreAndVisitCountMultiplier;
    double  _percentageThresholdForAnywhereInTitle;
    double  _percentageThresholdForAnywhereInURL;
    bool  _strengthenAutocompleteTriggerExtensionMatching;
}

@property (nonatomic) double CFSearchTimeout;
@property (nonatomic) long long characterThresholdForAnywhereInTitleOrURL;
@property (nonatomic) long long characterThresholdForStartOfTitle;
@property (nonatomic) long long characterThresholdForStartOfTitleWord;
@property (nonatomic) long long characterThresholdForStartOfTitleWordMatchLongEnoughForTopHit;
@property (nonatomic) long long characterThresholdForStartOfURL;
@property (nonatomic) long long characterThresholdForStartOfURLPathComponent;
@property (nonatomic) bool enableCompletionListHistoryDeduplicationSwitchToTabValue;
@property (nonatomic) bool enableCompletionListHistoryDeduplicationValue;
@property (nonatomic) bool isCFSearch;
@property (nonatomic) bool isDedupeThroughAlternativeURLsEnabled;
@property (nonatomic) bool isForVoiceSearch;
@property (nonatomic) bool isLocalPhantomTophitDisabled;
@property (nonatomic) bool isMoreSearchProviderSuggestionsEnabled;
@property (nonatomic) bool isReflectUserIntentInSearchEnabled;
@property (nonatomic) bool isResponsiveCompletionListEnabled;
@property (nonatomic) bool isResultFilteringDisabled;
@property (nonatomic) bool isStreamlinedCompletionListEnabled;
@property (nonatomic) long long matchingWordsInTitleThreshold;
@property (nonatomic) long long maxBookmarksAndHistoryItems;
@property (nonatomic) double normalizedTopSitesScoreAndVisitCountMultiplier;
@property (nonatomic) double percentageThresholdForAnywhereInTitle;
@property (nonatomic) double percentageThresholdForAnywhereInURL;
@property (nonatomic) bool strengthenAutocompleteTriggerExtensionMatching;

+ (id)getSearchParametersHelper:(id)arg1 withTrial:(id)arg2 withCache:(bool)arg3;
+ (id)searchParameters;
+ (bool)supportsSecureCoding;

- (double)CFSearchTimeout;
- (long long)characterThresholdForAnywhereInTitleOrURL;
- (long long)characterThresholdForStartOfTitle;
- (long long)characterThresholdForStartOfTitleWord;
- (long long)characterThresholdForStartOfTitleWordMatchLongEnoughForTopHit;
- (long long)characterThresholdForStartOfURL;
- (long long)characterThresholdForStartOfURLPathComponent;
- (bool)enableCompletionListHistoryDeduplicationSwitchToTabValue;
- (bool)enableCompletionListHistoryDeduplicationValue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreferences:(id)arg1;
- (id)initWithTrial:(bool)arg1 forPrefs:(id)arg2 forTrial:(id)arg3;
- (bool)isCFSearch;
- (bool)isDedupeThroughAlternativeURLsEnabled;
- (bool)isForVoiceSearch;
- (bool)isLocalPhantomTophitDisabled;
- (bool)isMoreSearchProviderSuggestionsEnabled;
- (bool)isReflectUserIntentInSearchEnabled;
- (bool)isResponsiveCompletionListEnabled;
- (bool)isResultFilteringDisabled;
- (bool)isStreamlinedCompletionListEnabled;
- (long long)matchingWordsInTitleThreshold;
- (long long)maxBookmarksAndHistoryItems;
- (double)normalizedTopSitesScoreAndVisitCountMultiplier;
- (double)percentageThresholdForAnywhereInTitle;
- (double)percentageThresholdForAnywhereInURL;
- (void)setCFSearchTimeout:(double)arg1;
- (void)setCharacterThresholdForAnywhereInTitleOrURL:(long long)arg1;
- (void)setCharacterThresholdForStartOfTitle:(long long)arg1;
- (void)setCharacterThresholdForStartOfTitleWord:(long long)arg1;
- (void)setCharacterThresholdForStartOfTitleWordMatchLongEnoughForTopHit:(long long)arg1;
- (void)setCharacterThresholdForStartOfURL:(long long)arg1;
- (void)setCharacterThresholdForStartOfURLPathComponent:(long long)arg1;
- (void)setEnableCompletionListHistoryDeduplicationSwitchToTabValue:(bool)arg1;
- (void)setEnableCompletionListHistoryDeduplicationValue:(bool)arg1;
- (void)setIsCFSearch:(bool)arg1;
- (void)setIsDedupeThroughAlternativeURLsEnabled:(bool)arg1;
- (void)setIsForVoiceSearch:(bool)arg1;
- (void)setIsLocalPhantomTophitDisabled:(bool)arg1;
- (void)setIsMoreSearchProviderSuggestionsEnabled:(bool)arg1;
- (void)setIsReflectUserIntentInSearchEnabled:(bool)arg1;
- (void)setIsResponsiveCompletionListEnabled:(bool)arg1;
- (void)setIsResultFilteringDisabled:(bool)arg1;
- (void)setIsStreamlinedCompletionListEnabled:(bool)arg1;
- (void)setMatchingWordsInTitleThreshold:(long long)arg1;
- (void)setMaxBookmarksAndHistoryItems:(long long)arg1;
- (void)setNormalizedTopSitesScoreAndVisitCountMultiplier:(double)arg1;
- (void)setPercentageThresholdForAnywhereInTitle:(double)arg1;
- (void)setPercentageThresholdForAnywhereInURL:(double)arg1;
- (void)setStrengthenAutocompleteTriggerExtensionMatching:(bool)arg1;
- (bool)strengthenAutocompleteTriggerExtensionMatching;
- (void)updateUsingPreferenceKeys:(id)arg1;
- (void)updateWithDefaults;
- (void)updateWithTrial:(bool)arg1 forTrial:(id)arg2;

@end
