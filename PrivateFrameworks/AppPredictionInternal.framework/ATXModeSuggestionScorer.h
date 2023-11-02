
@interface ATXModeSuggestionScorer : NSObject {
    BMAppLaunchStream * _appLaunchStream;
    DNDModeConfiguration * _cachedDNDMode;
    NSNumber * _cachedIsModeConfigured;
    NSNumber * _cachedIsUserCurrentlyInADifferentMode;
    NSNumber * _cachedIsUserCurrentlyInMode;
    double  _confidenceScore;
    ATXConfiguredModeService * _configuredModeService;
    ATXActivitySuggestionsFeedbackHistogramHelper * _feedbackHistogramHelper;
    NSNumber * _feedbackScore;
    ATXActivitySuggestionFeedbackStream * _feedbackStream;
    BMUserFocusComputedModeStream * _groundTruthModeStream;
    unsigned long long  _modeType;
    NSString * _modeUUID;
    long long  _origin;
    NSString * _originAnchorType;
    NSString * _originBundleId;
    NSNumber * _rejectionsAcrossAllModesInPastDay;
    NSNumber * _rejectionsAcrossAllModesInPastWeek;
    NSNumber * _rejectionsInPastWeek;
    double  _secondsSinceSuggested;
    NSNumber * _timesShown;
    NSNumber * _timesShownAcrossAllModesInPastDay;
    NSNumber * _timesShownAcrossAllModesInPastWeek;
    NSNumber * _timesShownInLastDay;
    NSNumber * _totalIgnores;
    NSNumber * _totalRejections;
    NSArray * _triggers;
}

@property (nonatomic, readonly) bool isModeConfigured;
@property (nonatomic, readonly) bool isUserCurrentlyInADifferentMode;
@property (nonatomic, readonly) bool isUserCurrentlyInMode;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) bool shouldAllowSmartEntry;
@property (nonatomic, readonly) bool shouldSuggestOnLockScreen;
@property (nonatomic, readonly) bool shouldSuggestTriggers;

+ (bool)_areConfiguredTriggers:(id)arg1 conflictingWithSuggestedTriggers:(id)arg2;

- (void).cxx_destruct;
- (bool)_hasHadEarlyExitTodayForModeWithUUID:(id)arg1;
- (bool)_hasLaunchedAppOnAtLeastTwoSeparateDays;
- (bool)_hasUserSetUpModeBefore;
- (bool)_hasUserSetUpSmartActivationForThisModeBefore;
- (bool)_inValidLocaleForDrivingSuggestions;
- (bool)_isSameActivityAndSource:(id)arg1;
- (bool)_isUserCurrentlyInDifferentModeFromSuggestedMode:(id)arg1;
- (bool)_isUserCurrentlyInSuggestedMode:(id)arg1;
- (id)_lockScreenSuggestionThresholds;
- (void)_populateCachedDataAboutUsersCurrentMode;
- (void)_populateFeedbackScores;
- (void)_populateFeedbackScoresIfNeeded;
- (id)_scoringWeights;
- (id)initWithModeUUID:(id)arg1 modeType:(unsigned long long)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 confidenceScore:(double)arg6 secondsSinceSuggested:(double)arg7 serializedTriggers:(id)arg8;
- (id)initWithModeUUID:(id)arg1 modeType:(unsigned long long)arg2 origin:(long long)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 confidenceScore:(double)arg6 secondsSinceSuggested:(double)arg7 serializedTriggers:(id)arg8 configuredModeService:(id)arg9 feedbackStream:(id)arg10 feedbackHistogramHelper:(id)arg11 appLaunchStream:(id)arg12 groundTruthModeStream:(id)arg13;
- (bool)isModeConfigured;
- (bool)isUserCurrentlyInADifferentMode;
- (bool)isUserCurrentlyInMode;
- (double)score;
- (bool)shouldAllowSmartEntry;
- (bool)shouldSuggestOnLockScreen;
- (bool)shouldSuggestTriggers;

@end
