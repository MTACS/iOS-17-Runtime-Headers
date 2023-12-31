
@interface PRSRankingItem : NSObject <SSDataCollectible> {
    PRSL2FeatureVector * _L2FeatureVector;
    unsigned long long  _attrAsTyped;
    unsigned long long * _attrCountsPrefix;
    unsigned long long * _attrCountsPrefix2;
    unsigned long long * _attrCountsPrefix3;
    unsigned long long * _attrCountsPrefixLast;
    unsigned long long * _attrCountsPrefixLast2;
    unsigned long long * _attrCountsPrefixLast3;
    unsigned long long * _attrCountsWord;
    unsigned long long * _attrCountsWord2;
    unsigned long long * _attrCountsWord3;
    unsigned long long  _attrExact;
    unsigned long long  _attrStrong;
    struct { long long x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4[4]; void *x5[0]; } * _attributes;
    unsigned long long  _bundleIDType;
    float * _cachedFeatures;
    double  _closestUpComingDate;
    NSString * _contentType;
    NSString * _displayNameInitials;
    bool  _displayNameInitialsFirstWordAndMoreMatchOnly;
    bool  _displayNameInitialsPrefixMatchOnly;
    bool  _eligibleForDemotion;
    NSArray * _emailAddresses;
    double  _engagementScore;
    NSString * _exactMatchedKeyword;
    bool  _exactMatchedLaunchString;
    float  _feedbackScore;
    NSString * _firstMatchedAltName;
    float  _firstPosition;
    double  _freshnessScore;
    bool  _hasPolicyMultipleTermsNearMatch;
    bool  _hasPolicyMultipleTermsPhraseMatch;
    bool  _hasPolicySingleTermPhraseMatch;
    bool  _hasShortCut;
    NSString * _identifier;
    unsigned long long  _importantPropertiesPrefixMatched;
    unsigned long long  _importantPropertiesWordMatched;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _indexScore;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _inputToModelScore;
    NSDate * _interestingDate;
    bool  _isBundleDemotedForBullseyeCommittedSearch;
    bool  _isInternal;
    bool  _isKeywordMatch;
    bool  _isLocalTopHitCandidate;
    bool  _isNonProgrammedSiriAction;
    bool  _isNotExecutable;
    bool  _isPrepared;
    bool  _isSafariTopHit;
    bool  _isServerAlternativeResult;
    NSDictionary * _l2Features;
    float  _l2Score;
    NSData * _l2Signals;
    NSDate * _lastUsedDate;
    double  _likelihood;
    NSData * _localSuggestionsData;
    NSDate * _mailDate;
    bool  _matchedQueryTerms;
    NSMutableArray * _matchedRecipients;
    NSMutableArray * _matchedSenders;
    NSMutableArray * _matchedVipSenders;
    float  _maxCoverage;
    double  _mostRecentUsedDate;
    bool  _photosExactMatch;
    float  _photosFallbackL2Score;
    bool  _photosMatch;
    float  _pommesL1Score;
    long long  _queryTermCount;
    float  _rawScore;
    bool  _recentForAboveThresholdTopHit;
    bool  _recentForTopHit;
    NSArray * _recentSimilarIntentEngagementDates;
    float  _score;
    NSString * _sectionBundleIdentifier;
    NSData * _serverFeaturesJSON;
    NSData * _serverSuggestionsData;
    bool  _shouldHideUnderShowMore;
    bool  _shouldHideUnderShowMoreIfNotTophit;
    PRSRankingSpanCalculator * _spanCalculator;
    double  _suggestionScore;
    int  _topHitReason;
    double  _topicalityScore;
    bool  _vendorNameIsDisplayNamePrefix;
    bool  _wasEngaged;
    bool  _wasEngagedInSpotlight;
    float  _withinBundleScore;
    bool  _wordMatchedKeyword;
}

@property (nonatomic, retain) PRSL2FeatureVector *L2FeatureVector;
@property (nonatomic) struct { long long x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4[4]; void *x5[0]; }*attributes;
@property (nonatomic) double closestUpComingDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *displayNameInitials;
@property (nonatomic) bool displayNameInitialsFirstWordAndMoreMatchOnly;
@property (nonatomic) bool displayNameInitialsPrefixMatchOnly;
@property (nonatomic) bool eligibleForDemotion;
@property (nonatomic) double engagementScore;
@property (nonatomic, retain) NSString *exactMatchedKeyword;
@property (nonatomic) bool exactMatchedLaunchString;
@property (nonatomic) float feedbackScore;
@property (nonatomic, retain) NSString *firstMatchedAltName;
@property (nonatomic) double freshnessScore;
@property (nonatomic) bool hasPolicyMultipleTermsNearMatch;
@property (nonatomic) bool hasPolicyMultipleTermsPhraseMatch;
@property (nonatomic) bool hasPolicySingleTermPhraseMatch;
@property (nonatomic) bool hasShortCut;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) NSDate *interestingDate;
@property (nonatomic) bool isBundleDemotedForBullseyeCommittedSearch;
@property (nonatomic) bool isKeywordMatch;
@property (nonatomic) bool isLocalTopHitCandidate;
@property (nonatomic) bool isNotExecutable;
@property (nonatomic) bool isSafariTopHit;
@property (nonatomic) bool isServerAlternativeResult;
@property (nonatomic, retain) NSDictionary *l2Features;
@property (nonatomic) float l2Score;
@property (nonatomic, retain) NSData *l2Signals;
@property (nonatomic, readonly) NSDate *lastAccessDate;
@property (nonatomic, retain) NSDate *lastUsedDate;
@property (nonatomic) double likelihood;
@property (nonatomic, retain) NSData *localSuggestionsData;
@property (nonatomic, retain) NSDate *mailDate;
@property (nonatomic) bool matchedQueryTerms;
@property (nonatomic) double mostRecentUsedDate;
@property (nonatomic) bool photosExactMatch;
@property (nonatomic) float photosFallbackL2Score;
@property (nonatomic) bool photosMatch;
@property (nonatomic) float pommesL1Score;
@property (nonatomic) float rawScore;
@property (nonatomic) bool recentForAboveThresholdTopHit;
@property (nonatomic) bool recentForTopHit;
@property (nonatomic, retain) NSArray *recentSimilarIntentEngagementDates;
@property (nonatomic) float score;
@property (nonatomic, retain) NSString *sectionBundleIdentifier;
@property (nonatomic, retain) NSData *serverFeaturesJSON;
@property (nonatomic, retain) NSData *serverSuggestionsData;
@property (nonatomic) bool shouldHideUnderShowMore;
@property (nonatomic) bool shouldHideUnderShowMoreIfNotTophit;
@property (nonatomic) double suggestionScore;
@property (readonly) Class superclass;
@property (nonatomic) /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*test_indexScore;
@property (nonatomic) /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*test_inputToModelScore;
@property (nonatomic) int topHitReason;
@property (nonatomic) double topicalityScore;
@property (nonatomic) bool vendorNameIsDisplayNamePrefix;
@property (nonatomic) bool wasEngaged;
@property (nonatomic) bool wasEngagedInSpotlight;
@property (nonatomic) float withinBundleScore;
@property (nonatomic) bool wordMatchedKeyword;

+ (id)bundlesExcludedFromRankCategory;
+ (unsigned short)featureFromVirtualIdx:(unsigned long long)arg1;
+ (float)inAppEngagementScoreWithEvaluator:(id)arg1 currentTime:(double)arg2 queriesInApp:(id)arg3 datesInApp:(id)arg4 topicalityScore:(float)arg5;
+ (void)initialize;
+ (float)matchScoreLaunchString:(id)arg1 withEvaluator:(id)arg2;
+ (void)matchScoreTokensFromText:(id)arg1 withEvaluator:(id)arg2 withHandler:(id /* block */)arg3;
+ (id)rankingDescriptorForBundleFeature:(unsigned long long)arg1;
+ (unsigned long long)requiredAttributesCount;
+ (id)tokenizeContactsEmailAddress:(id)arg1 removeTLD:(bool)arg2 usernameTokenCount:(unsigned long long*)arg3 usernameLength:(unsigned long long*)arg4 domainLength:(unsigned long long*)arg5 username:(id*)arg6;
+ (id)tokenizeContactsName:(id)arg1 tokenCount:(unsigned long long*)arg2;
+ (id)tokenizeTitleString:(id)arg1;
+ (id)tokenizeURLString:(id)arg1 removeTLD:(bool)arg2 hostTokenCount:(unsigned long long*)arg3 hostLength:(unsigned long long*)arg4 pathLength:(unsigned long long*)arg5 queryLength:(unsigned long long*)arg6 fragmentLength:(unsigned long long*)arg7;

- (void).cxx_destruct;
- (id)L2FeatureVector;
- (unsigned long long)attrCountPrefix2:(unsigned long long)arg1;
- (unsigned long long)attrCountPrefix3:(unsigned long long)arg1;
- (unsigned long long)attrCountPrefix:(unsigned long long)arg1;
- (unsigned long long)attrCountPrefixLast2:(unsigned long long)arg1;
- (unsigned long long)attrCountPrefixLast3:(unsigned long long)arg1;
- (unsigned long long)attrCountPrefixLast:(unsigned long long)arg1;
- (unsigned long long)attrCountWord2:(unsigned long long)arg1;
- (unsigned long long)attrCountWord3:(unsigned long long)arg1;
- (unsigned long long)attrCountWord:(unsigned long long)arg1;
- (unsigned long long)attrType:(id)arg1 seenAuthorEmail:(bool)arg2 seenPrimaryRecipientEmail:(bool)arg3;
- (struct { long long x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4[4]; void *x5[0]; }*)attributes;
- (unsigned long long)bundleIDType;
- (double)closestUpComingDate;
- (long long)compare:(id)arg1 currentTime:(double)arg2;
- (long long)compareAppsTopHitCandidate:(id)arg1;
- (long long)compareContactsTopHitCandidate:(id)arg1;
- (long long)compareLocalTopHitCandidate:(id)arg1;
- (long long)compareParsecTopHitCandidate:(id)arg1;
- (long long)comparePeopleItemTopHitCandidate:(id)arg1;
- (long long)compareSafariTopHitCandidate:(id)arg1;
- (long long)compareShortcutTopHitCandidate:(id)arg1;
- (long long)compareWithCCCDTopHitCandidate:(id)arg1;
- (id)contentType;
- (id)dataCollectionBundle;
- (void)dealloc;
- (id)description;
- (bool)didMatchRankingDescriptor:(id)arg1;
- (id)displayName;
- (id)displayNameInitials;
- (bool)displayNameInitialsFirstWordAndMoreMatchOnly;
- (bool)displayNameInitialsPrefixMatchOnly;
- (id)dueDate;
- (bool)eligibleForDemotion;
- (double)engagementScore;
- (float)engagementScoreWithEvaluator:(id)arg1 currentTime:(double)arg2 launchString:(id)arg3 topicalityScore:(float)arg4;
- (id)exactMatchedKeyword;
- (bool)exactMatchedLaunchString;
- (float)feedbackScore;
- (id)firstMatchedAltName;
- (double)freshnessScore;
- (id)getBundleSpecificValue:(id)arg1 forPropertyName:(id)arg2 withQueryString:(id)arg3 isCJK:(bool)arg4 isBullseyeSearch:(bool)arg5 withEvaluator:(id)arg6 keyboardLanguage:(id)arg7 seenAuthorEmail:(bool)arg8 seenPrimaryRecipientEmail:(bool)arg9;
- (bool)hasPolicyMultipleTermsNearMatch;
- (bool)hasPolicyMultipleTermsPhraseMatch;
- (bool)hasPolicySingleTermPhraseMatch;
- (bool)hasShortCut;
- (id)identifier;
- (float)inSpotlightEngagementScoreWithEvaluator:(id)arg1 currentTime:(double)arg2 queriesInSpotlight:(id)arg3 datesInSpotlight:(id)arg4 queriesInSpotlightNonUnique:(id)arg5 datesInSpotlightNonUnique:(id)arg6 launchString:(id)arg7 lastUsedDate:(id)arg8 topicalityScore:(float)arg9;
- (void)inferDateBinsFromDates:(id)arg1 intoBins:(int*)arg2;
- (id)initForParsecResultWithBundleID:(id)arg1;
- (id)initWithAttrs:(struct { long long x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4[4]; void *x5[0]; }*)arg1;
- (id)initWithAttrs:(struct { long long x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4[4]; void *x5[0]; }*)arg1 isServerAlternativeResult:(bool)arg2;
- (id)interestingDate;
- (bool)isAssociatedWithTophitContactsFromItems:(id)arg1;
- (bool)isBundleDemotedForBullseyeCommittedSearch;
- (bool)isCCCD;
- (bool)isGoodMatchAppAlternateName:(id)arg1 withEvaluator:(id)arg2;
- (bool)isGoodPhotosMatch;
- (bool)isInSectionWithRankCategory:(id)arg1;
- (bool)isKeywordMatch;
- (bool)isLocalTopHitCandidate;
- (bool)isNotExecutable;
- (bool)isPerfectMatch;
- (bool)isSafariTopHit;
- (bool)isSearchResultPage:(id)arg1;
- (bool)isServerAlternativeResult;
- (bool)isTopHit;
- (id)l2Features;
- (float)l2Score;
- (id)l2Signals;
- (id)lastAccessDate;
- (id)lastUsedDate;
- (double)likelihood;
- (id)likelyDisplayTitle;
- (id)localSuggestionsData;
- (id)mailDate;
- (id)mailFreshnessDate;
- (float)matchScoreAppName:(id)arg1 withEvaluator:(id)arg2;
- (float)matchScoreAppName:(id)arg1 withEvaluator:(id)arg2 matchOption:(unsigned char)arg3;
- (float)matchScoreContactsEmailAddress:(id)arg1 withEvaluator:(id)arg2;
- (float)matchScoreContactsName:(id)arg1 withEvaluator:(id)arg2;
- (float)matchScoreFileName:(id)arg1 withEvaluator:(id)arg2;
- (float)matchScoreForApplicationsWithEvaluator:(id)arg1;
- (float)matchScoreForBooksWithEvaluator:(id)arg1;
- (float)matchScoreForCalendarWithEvaluator:(id)arg1;
- (float)matchScoreForContactsWithEvaluator:(id)arg1;
- (float)matchScoreForDictionaryWithEvaluator:(id)arg1;
- (float)matchScoreForFilesWithEvaluator:(id)arg1;
- (float)matchScoreForHelpWithEvaluator:(id)arg1;
- (float)matchScoreForMailWithEvaluator:(id)arg1;
- (float)matchScoreForMusicWithEvaluator:(id)arg1;
- (float)matchScoreForNotesWithEvaluator:(id)arg1;
- (float)matchScoreForPeopleItemsWithEvaluator:(id)arg1;
- (float)matchScoreForPreferencesWithEvaluator:(id)arg1;
- (float)matchScoreForPreferencesWithEvaluator:(id)arg1 subject:(id)arg2 isFirstParty:(bool)arg3 preferencePriority:(int)arg4;
- (float)matchScoreForPreferencesWithEvaluator:(id)arg1 subject:(id)arg2 preferenceType:(id)arg3 preferenceId:(id)arg4;
- (float)matchScoreForSafariWithEvaluator:(id)arg1;
- (float)matchScoreForShortcutsAppWithEvaluator:(id)arg1;
- (float)matchScoreForShortcutsSettingWithEvaluator:(id)arg1 name:(id)arg2 preferencePriority:(int)arg3;
- (float)matchScoreForShortcutsWithEvaluator:(id)arg1;
- (float)matchScoreForTipsWithEvaluator:(id)arg1;
- (float)matchScoreForWalletWithEvaluator:(id)arg1;
- (float)matchScoreSettings:(id)arg1 withEvaluator:(id)arg2 matchOption:(unsigned char)arg3;
- (float)matchScoreTitle:(id)arg1 withEvaluator:(id)arg2;
- (float)matchScoreTitle:(id)arg1 withEvaluator:(id)arg2 matchOption:(unsigned char)arg3;
- (float)matchScoreURLString:(id)arg1 withEvaluator:(id)arg2;
- (bool)matchedQueryTerms;
- (id)moreRecentDateFromDate1:(id)arg1 date2:(id)arg2;
- (float)mostRecentTimeToQueryInMinutesWithCurrentTime:(double)arg1 topicality:(float)arg2;
- (double)mostRecentUsedDate;
- (void)parsePreferenceIdentity:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)photosExactMatch;
- (float)photosFallbackL2Score;
- (bool)photosMatch;
- (float)pommesL1Score;
- (void)populateBundleSpecificFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2;
- (void)populateContactFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2;
- (void)populateCrossAttributeDerivedFeaturesWithContext:(struct prs_feature_population_ctx_t { struct __CFArray {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; unsigned char x4; float x5[28]; float x6; float x7; float x8; float x9; unsigned int x10; unsigned long long x11; unsigned long long x12; long long x13; unsigned long long x14; }*)arg1 featureScoreInfo:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg2;
- (void)populateMailFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1;
- (void)populateOnlySodiumMailFeatures;
- (void)populateOtherFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 withEvaluator:(id)arg2 currentTime:(double)arg3;
- (void)populateParsecAlbumFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecAnyFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecAppFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecBundleSpecificFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecEPubBookFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecMovieFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecPodcastFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecProfileFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecRemainingFeatures;
- (void)populateParsecRoundTripFeatures:(id)arg1 forParsecResult:(id)arg2;
- (void)populateParsecSongFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecTvShowFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecWebVideoFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populatePortraitScore:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 scorer:(id)arg2 attributeHolder:(id)arg3;
- (void)populateRemainingFeaturesWithRanker:(id)arg1;
- (void)populateSMSFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1;
- (void)populateTextContentDistanceMeasures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1;
- (void)populateTextFeatureValuesForProperty:(id)arg1 updatingBundleFeatureValues:(float*)arg2 propertyIndex:(unsigned long long)arg3 withEvaluator:(id)arg4 withContext:(struct prs_feature_population_ctx_t { struct __CFArray {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; unsigned char x4; float x5[28]; float x6; float x7; float x8; float x9; unsigned int x10; unsigned long long x11; unsigned long long x12; long long x13; unsigned long long x14; }*)arg5 featureScoreInfo:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg6 propertyCanFuzzyMatch:(bool)arg7 keyboardLanguage:(id)arg8 isCJK:(bool)arg9 featureList:(const unsigned short*)arg10 propertyName:(id)arg11 seenAuthorEmail:(bool)arg12 seenPrimaryRecipientEmail:(bool)arg13;
- (void)populateTextFeatureValuesForProperty:(id)arg1 updatingBundleFeatureValues:(float*)arg2 propertyIndex:(unsigned long long)arg3 withEvaluator:(id)arg4 withContext:(struct prs_feature_population_ctx_t { struct __CFArray {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; unsigned char x4; float x5[28]; float x6; float x7; float x8; float x9; unsigned int x10; unsigned long long x11; unsigned long long x12; long long x13; unsigned long long x14; }*)arg5 featureScoreInfo:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg6 propertyCanFuzzyMatch:(bool)arg7 keyboardLanguage:(id)arg8 isCJK:(bool)arg9 propertyName:(id)arg10 seenAuthorEmail:(bool)arg11 seenPrimaryRecipientEmail:(bool)arg12;
- (int)preferencePriorityFromIdentity:(id)arg1;
- (id)rankingFeedbackBundleID;
- (float)rawScore;
- (bool)recentForAboveThresholdTopHit;
- (bool)recentForTopHit;
- (id)recentSimilarIntentEngagementDates;
- (void)resetScoreForShortcutsSetting:(id)arg1;
- (float)score;
- (id)sectionBundleIdentifier;
- (bool)serializeToJSON:(void*)arg1 valuesOnly:(bool)arg2;
- (id)serverFeaturesJSON;
- (id)serverSuggestionsData;
- (void)setAttributes:(struct { long long x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4[4]; void *x5[0]; }*)arg1;
- (void)setBundleIDType:(unsigned long long)arg1;
- (void)setClosestUpComingDate:(double)arg1;
- (void)setDisplayNameInitials:(id)arg1;
- (void)setDisplayNameInitialsFirstWordAndMoreMatchOnly:(bool)arg1;
- (void)setDisplayNameInitialsPrefixMatchOnly:(bool)arg1;
- (void)setEligibleForDemotion:(bool)arg1;
- (void)setEngagementScore:(double)arg1;
- (void)setExactMatchedKeyword:(id)arg1;
- (void)setExactMatchedLaunchString:(bool)arg1;
- (void)setFeedbackScore:(float)arg1;
- (void)setFirstMatchedAltName:(id)arg1;
- (void)setFreshnessScore:(double)arg1;
- (void)setHasPolicyMultipleTermsNearMatch:(bool)arg1;
- (void)setHasPolicyMultipleTermsPhraseMatch:(bool)arg1;
- (void)setHasPolicySingleTermPhraseMatch:(bool)arg1;
- (void)setHasShortCut:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsBundleDemotedForBullseyeCommittedSearch:(bool)arg1;
- (void)setIsKeywordMatch:(bool)arg1;
- (void)setIsLocalTopHitCandidate:(bool)arg1;
- (void)setIsNotExecutable:(bool)arg1;
- (void)setIsSafariTopHit:(bool)arg1;
- (void)setIsServerAlternativeResult:(bool)arg1;
- (void)setL2FeatureVector:(id)arg1;
- (void)setL2Features:(id)arg1;
- (void)setL2Score:(float)arg1;
- (void)setL2Signals:(id)arg1;
- (void)setLastUsedDate:(id)arg1;
- (void)setLikelihood:(double)arg1;
- (void)setLocalSuggestionsData:(id)arg1;
- (void)setMailDate:(id)arg1;
- (void)setMatchedQueryTerms:(bool)arg1;
- (void)setMostRecentUsedDate:(double)arg1;
- (void)setPhotosExactMatch:(bool)arg1;
- (void)setPhotosFallbackL2Score:(float)arg1;
- (void)setPhotosMatch:(bool)arg1;
- (void)setPommesL1Score:(float)arg1;
- (void)setRawScore:(float)arg1;
- (void)setRecentForAboveThresholdTopHit:(bool)arg1;
- (void)setRecentForTopHit:(bool)arg1;
- (void)setRecentSimilarIntentEngagementDates:(id)arg1;
- (void)setScore:(float)arg1;
- (void)setSectionBundleIdentifier:(id)arg1;
- (void)setServerFeaturesJSON:(id)arg1;
- (void)setServerSuggestionsData:(id)arg1;
- (void)setShouldHideUnderShowMore:(bool)arg1;
- (void)setShouldHideUnderShowMoreIfNotTophit:(bool)arg1;
- (void)setSuggestionBundleIDType;
- (void)setSuggestionScore:(double)arg1;
- (void)setTest_indexScore:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setTest_inputToModelScore:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setTopHitReason:(int)arg1;
- (void)setTopicalityScore:(double)arg1;
- (void)setVendorNameIsDisplayNamePrefix:(bool)arg1;
- (void)setWasEngaged:(bool)arg1;
- (void)setWasEngagedInSpotlight:(bool)arg1;
- (void)setWithinBundleScore:(float)arg1;
- (void)setWordMatchedKeyword:(bool)arg1;
- (int)shortcutPriorityFromIdentifier:(id)arg1;
- (bool)shouldHideUnderShowMore;
- (bool)shouldHideUnderShowMoreIfNotTophit;
- (float)staleDemotionWithCurrentTime:(double)arg1 topicality:(float)arg2;
- (double)suggestionScore;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)test_indexScore;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)test_inputToModelScore;
- (int)topHitReason;
- (double)topicalityScore;
- (float)topicalityScoreWithEvaluator:(id)arg1;
- (void)updateAccumulatedBundleFeatures:(float*)arg1 values:(float*)arg2 feature:(unsigned long long)arg3;
- (void)updateAttrCountsPrefix2:(unsigned short*)arg1 queryTermCount:(unsigned long long)arg2 attrType:(unsigned long long)arg3;
- (void)updateAttrCountsPrefix3:(unsigned short*)arg1 queryTermCount:(unsigned long long)arg2 attrType:(unsigned long long)arg3;
- (void)updateAttrCountsPrefix:(unsigned short*)arg1 queryTermCount:(unsigned long long)arg2 attrType:(unsigned long long)arg3;
- (void)updateAttrCountsPrefixLast2:(unsigned short*)arg1 termsDidMatchPrefix:(unsigned short*)arg2 queryTermCount:(unsigned long long)arg3 attrType:(unsigned long long)arg4;
- (void)updateAttrCountsPrefixLast3:(unsigned short*)arg1 termsDidMatchPrefix:(unsigned short*)arg2 queryTermCount:(unsigned long long)arg3 attrType:(unsigned long long)arg4;
- (void)updateAttrCountsPrefixLast:(unsigned short*)arg1 termsDidMatchPrefix:(unsigned short*)arg2 queryTermCount:(unsigned long long)arg3 attrType:(unsigned long long)arg4;
- (void)updateAttrCountsWord2:(unsigned short*)arg1 queryTermCount:(unsigned long long)arg2 attrType:(unsigned long long)arg3;
- (void)updateAttrCountsWord3:(unsigned short*)arg1 queryTermCount:(unsigned long long)arg2 attrType:(unsigned long long)arg3;
- (void)updateAttrCountsWord:(unsigned short*)arg1 queryTermCount:(unsigned long long)arg2 attrType:(unsigned long long)arg3;
- (void)updateBundleFeatures:(float*)arg1 withArrValues:(float*)arg2 featureScoreInfo:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg3;
- (void)updateNumScoreDescriptorBundleFeatures:(float*)arg1 feature:(unsigned long long)arg2 featureScoreInfo:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg3;
- (void)updateScoreDescriptorBundleFeatures:(float*)arg1 feature:(unsigned long long)arg2;
- (bool)vendorNameIsDisplayNamePrefix;
- (bool)wasEngaged;
- (bool)wasEngagedInSpotlight;
- (float)withinBundleScore;
- (bool)wordMatchedKeyword;

@end
