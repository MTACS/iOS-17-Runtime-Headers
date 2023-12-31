
@interface PRSRankingItemRanker : NSObject {
    NSMapTable * _bundleFeatures;
    NSString * _clientBundle;
    bool  _containsDigitInQuery;
    bool  _containsEnglishAlphabetInQuery;
    double  _currentTime;
    bool  _exact;
    double  _experimentalWeight1;
    double  _experimentalWeight2;
    bool  _hasParsecPolicyPhraseMatch;
    bool  _hasPolicyMultipleTermsPhraseMatch;
    bool  _hasPolicySingleTermPhraseMatch;
    bool  _isAltNamePrefixMatchOnlyTopHitExcludedQuery;
    bool  _isCJK;
    bool  _isCancelled;
    bool  _isContentWord;
    bool  _isFuzzySearch;
    bool  _isInternalDevice;
    bool  _isNLSearch;
    bool  _isPeopleSearch;
    bool  _isSpellCorrectPrefixMatchOnlyTopHitExcludedQuery;
    NSString * _keyboardLanguage;
    float  _lastIsSpaceFeature;
    NSString * _meContactIdentifier;
    bool  _policyDisabled;
    unsigned long long  _queryKind;
    unsigned long long  _queryTermCount;
    unsigned long long  _queryTermLength;
    NSArray * _queryTerms;
    NSArray * _rankCategories;
    PRSQueryRankingConfiguration * _rankingConfiguration;
    NSString * _searchString;
    bool  _sodium;
    unsigned long long  _topHitMaxCount;
    NSString * _userQueryString;
}

@property (nonatomic, retain) NSMapTable *bundleFeatures;
@property (nonatomic, retain) NSString *clientBundle;
@property (nonatomic) bool containsDigitInQuery;
@property (nonatomic) bool containsEnglishAlphabetInQuery;
@property (nonatomic) double currentTime;
@property (nonatomic) bool exact;
@property (nonatomic) double experimentalWeight1;
@property (nonatomic) double experimentalWeight2;
@property (nonatomic) bool hasParsecPolicyPhraseMatch;
@property (nonatomic) bool hasPolicyMultipleTermsPhraseMatch;
@property (nonatomic) bool hasPolicySingleTermPhraseMatch;
@property (nonatomic) bool isAltNamePrefixMatchOnlyTopHitExcludedQuery;
@property bool isCJK;
@property bool isCancelled;
@property (nonatomic) bool isContentWord;
@property bool isInternalDevice;
@property (nonatomic) bool isNLSearch;
@property (nonatomic) bool isPeopleSearch;
@property (nonatomic) bool isSpellCorrectPrefixMatchOnlyTopHitExcludedQuery;
@property (nonatomic, retain) NSString *keyboardLanguage;
@property (nonatomic) float lastIsSpaceFeature;
@property (nonatomic, retain) NSString *meContactIdentifier;
@property (nonatomic) bool policyDisabled;
@property (nonatomic) unsigned long long queryKind;
@property (nonatomic) unsigned long long queryTermCount;
@property (nonatomic) unsigned long long queryTermLength;
@property (nonatomic, retain) NSArray *queryTerms;
@property (nonatomic, retain) NSArray *rankCategories;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic) bool sodium;
@property (nonatomic) unsigned long long topHitMaxCount;
@property (nonatomic, retain) NSString *userQueryString;

+ (void)clearState;
+ (id)embeddingForLanguage:(id)arg1;
+ (id)englishEmbedding;
+ (id)importantAttributesForBundle:(id)arg1;
+ (id)importantAttributesForParsecBundle:(id)arg1;
+ (void)initialize;
+ (bool)isBlendingScoreDemoted:(float)arg1;
+ (bool)isCJK;
+ (bool)isContentWordQuery:(id)arg1 queryTermCount:(long long)arg2 keyboardLanguage:(id)arg3;
+ (bool)isKeywordsHidingEnabled;
+ (id)itemSpecificImportantAttributesForBundle:(id)arg1 withItem:(id)arg2;
+ (struct _LanguageModel { }*)languageModel;
+ (id)phoneFavoritesCopy;
+ (id)preferredEmbedding;
+ (void)preheat;
+ (void)setDockApps:(id)arg1;
+ (bool)shouldFilterResult:(id)arg1 currentTime:(double)arg2;
+ (void)sortResultsInSection:(id)arg1 currentTime:(double)arg2;
+ (id)sortedUniqueBundleFeatureValuesFromBundleFeatures:(id)arg1;
+ (unsigned long long)spellCorrectedAppMinQueryLen;
+ (void)thresholdResultsInSection:(id)arg1 userQuery:(id)arg2 queryID:(long long)arg3 isEntitiesSearch:(bool)arg4 currentTime:(double)arg5;

- (void).cxx_destruct;
- (void)activate;
- (id)bundleFeatures;
- (void)cancel;
- (id)clientBundle;
- (id /* block */)comparatorByJoiningComparator:(id /* block */)arg1 withPredicate:(id)arg2;
- (void)computePolicyFeaturesForBundleItems:(id)arg1 isCJK:(bool)arg2;
- (void)computeRelativeFeatureForContext:(id)arg1 items:(id)arg2;
- (void)computeResultSetDependantFeatures:(id)arg1 allItems:(id)arg2;
- (float*)computeScoresForVectors:(id)arg1;
- (float*)computeScoresForVectors:(id)arg1 withBundleFeatures:(id)arg2;
- (bool)containsDigitInQuery;
- (bool)containsEnglishAlphabetInQuery;
- (double)currentTime;
- (void)deactivate;
- (void)dealloc;
- (bool)exact;
- (double)experimentalWeight1;
- (double)experimentalWeight2;
- (id)filterRankedItems:(id)arg1 bundle:(id)arg2 userQuery:(id)arg3;
- (bool)hasParsecPolicyPhraseMatch;
- (bool)hasPolicyMultipleTermsPhraseMatch;
- (bool)hasPolicySingleTermPhraseMatch;
- (id)initWithSearchString:(id)arg1 language:(id)arg2 currentTime:(double)arg3;
- (id)initWithSearchString:(id)arg1 language:(id)arg2 isCJK:(bool)arg3 experimentalWeight1:(double)arg4 experimentalWeight2:(double)arg5 currentTime:(double)arg6;
- (id)initWithSearchString:(id)arg1 userQueryString:(id)arg2 language:(id)arg3 currentTime:(double)arg4;
- (id)initWithSearchString:(id)arg1 userQueryString:(id)arg2 language:(id)arg3 isCJK:(bool)arg4 experimentalWeight1:(double)arg5 experimentalWeight2:(double)arg6 currentTime:(double)arg7;
- (bool)isAltNamePrefixMatchOnlyTopHitExcludedQuery;
- (bool)isCJK;
- (bool)isCancelled;
- (bool)isContentWord;
- (bool)isFuzzySearch;
- (bool)isInternalDevice;
- (bool)isNLSearch;
- (bool)isPeopleSearch;
- (bool)isSpellCorrectPrefixMatchOnlyTopHitExcludedQuery;
- (id)keyboardLanguage;
- (float)lastIsSpaceFeature;
- (id)meContactIdentifier;
- (void)pickMostRecentDateForItem:(id)arg1 pastItems:(id*)arg2 futureItems:(id*)arg3;
- (bool)policyDisabled;
- (void)populateLocalResultSetDateFeaturesForItems:(id)arg1;
- (void)populateMailContactFeaturesWithMailItems:(id)arg1 contactItems:(id)arg2;
- (void)populateRankResultSetBundleFeaturesWithBundleItems:(id)arg1 withUniqueBundleMaxScores:(id)arg2;
- (void)prepareForPureSodiumL2RankingWithMailItems:(id)arg1 inBundle:(id)arg2;
- (void)prepareItems:(id)arg1 inBundle:(id)arg2;
- (void)prepareParsecResults:(id)arg1 inBundle:(id)arg2;
- (unsigned long long)queryKind;
- (unsigned long long)queryTermCount;
- (unsigned long long)queryTermLength;
- (id)queryTerms;
- (id)rankCategories;
- (id)rankingConfiguration;
- (id)rankingConfigurationWithMeContact:(id)arg1 emailAddresses:(id)arg2 phoneFavorites:(id)arg3 vipList:(id)arg4 clientBundle:(id)arg5 isScopedSearch:(bool)arg6 isAdvancedSyntax:(bool)arg7 spotlightQuery:(id)arg8 userQuery:(id)arg9 tokenString:(id)arg10 queryKind:(unsigned long long)arg11 isPeopleSearch:(bool)arg12 keyboardLanguage:(id)arg13;
- (id)rankingConfigurationWithMeContact:(id)arg1 emailAddresses:(id)arg2 phoneFavorites:(id)arg3 vipList:(id)arg4 clientBundle:(id)arg5 isScopedSearch:(bool)arg6 spotlightQuery:(id)arg7 keyboardLanguage:(id)arg8;
- (id)rankingConfigurationWithMeContact:(id)arg1 emailAddresses:(id)arg2 phoneFavorites:(id)arg3 vipList:(id)arg4 clientBundle:(id)arg5 isScopedSearch:(bool)arg6 spotlightQuery:(id)arg7 userQuery:(id)arg8 tokenString:(id)arg9 queryKind:(unsigned long long)arg10 isPeopleSearch:(bool)arg11 keyboardLanguage:(id)arg12;
- (void)relevantResultSetPRSL2FeaturesFromBundleFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned short*)arg2 relRankFeatureOut:(unsigned short*)arg3;
- (id)requery:(id*)arg1;
- (void)rerankItemsWithPolicyForBundleItems:(id)arg1 isCJK:(bool)arg2;
- (void)resetWithSearchString:(id)arg1;
- (void)resetWithSearchString:(id)arg1 userQueryString:(id)arg2;
- (void)resetbundleFeaturesScratchBuf:(float*)arg1;
- (id)searchString;
- (void)setBundleFeatures:(id)arg1;
- (void)setClientBundle:(id)arg1;
- (void)setContainsDigitInQuery:(bool)arg1;
- (void)setContainsEnglishAlphabetInQuery:(bool)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setExact:(bool)arg1;
- (void)setExperimentalWeight1:(double)arg1;
- (void)setExperimentalWeight2:(double)arg1;
- (void)setHasParsecPolicyPhraseMatch:(bool)arg1;
- (void)setHasPolicyMultipleTermsPhraseMatch:(bool)arg1;
- (void)setHasPolicySingleTermPhraseMatch:(bool)arg1;
- (void)setIsAltNamePrefixMatchOnlyTopHitExcludedQuery:(bool)arg1;
- (void)setIsCJK:(bool)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setIsContentWord:(bool)arg1;
- (void)setIsFuzzySearch:(bool)arg1;
- (void)setIsInternalDevice:(bool)arg1;
- (void)setIsNLSearch:(bool)arg1;
- (void)setIsPeopleSearch:(bool)arg1;
- (void)setIsSpellCorrectPrefixMatchOnlyTopHitExcludedQuery:(bool)arg1;
- (void)setKeyboardLanguage:(id)arg1;
- (void)setLastIsSpaceFeature:(float)arg1;
- (void)setMeContactIdentifier:(id)arg1;
- (void)setPolicyDisabled:(bool)arg1;
- (void)setQueryKind:(unsigned long long)arg1;
- (void)setQueryTermCount:(unsigned long long)arg1;
- (void)setQueryTermLength:(unsigned long long)arg1;
- (void)setQueryTerms:(id)arg1;
- (void)setRankCategories:(id)arg1;
- (void)setRenderEngagementFeaturesForItem:(id)arg1 counts:(id)arg2 isRender:(bool)arg3 bundleDict:(id)arg4;
- (void)setRenderEngagementFeaturesForItemAsShorts:(id)arg1 counts:(short)arg2 isRender:(bool)arg3 bundleDict:(id)arg4;
- (void)setSearchString:(id)arg1;
- (void)setSodium:(bool)arg1;
- (void)setTopHitMaxCount:(unsigned long long)arg1;
- (void)setUserQueryString:(id)arg1;
- (bool)sodium;
- (unsigned long long)topHitMaxCount;
- (void)updateResultSetContext:(struct _resultset_computation_ctx { float *x1; bool x2; bool x3; bool x4; float x5; float x6; float x7; float x8[44]; }*)arg1 andUniqueScores:(id)arg2 withResultSetItems:(id)arg3;
- (void)updateResultSetFeaturesOnItems:(id)arg1 withContext:(struct _resultset_computation_ctx { float *x1; bool x2; bool x3; bool x4; float x5; float x6; float x7; float x8[44]; }*)arg2 uniqueScores:(id)arg3;
- (void)updateScoresForPreparedItems:(id)arg1;
- (void)updateScoresForPreparedItems:(id)arg1 isCJK:(bool)arg2 clientBundleID:(id)arg3 thresholdValue:(double)arg4 queryNodeMatchInfo:(id)arg5;
- (void)updateScoresForPreparedItems:(id)arg1 isCJK:(bool)arg2 clientBundleID:(id)arg3 thresholdValue:(double)arg4 queryNodeMatchInfo:(id)arg5 collectL2Signals:(bool)arg6;
- (id)userQuery;
- (id)userQueryString;
- (bool)wasItemCreatedWithinAWeek:(id)arg1;

@end
