
@interface PGUserDefaults : NSObject

+ (void)_registerDefaults;
+ (bool)boundTextFeaturesPerEvent;
+ (id)extendedCurationOptions;
+ (bool)graphConsistencyCheckIsEnabled;
+ (double)graphConsistencyPercentageThresholdForTTR;
+ (void)initialize;
+ (bool)isAlwaysShowingHolidayCalendarEvents;
+ (bool)isAutonamingDisabled;
+ (bool)isAutonamingFilteredOutInferencesIngestAllowed;
+ (bool)isAutonamingSignalPropertiesIngestAllowed;
+ (bool)isBehavioralCurationEnabled;
+ (bool)isMemoriesLivingOnFeedbackEnabled;
+ (bool)isMemoriesNotificationDisabled;
+ (bool)isMemoryElectionDisabled;
+ (bool)isPhotosChallengeEnabled;
+ (bool)isPublicEventsEnabled;
+ (bool)isRelationshipFilteredOutInferencesIngestAllowed;
+ (bool)isRelationshipInferenceDisabled;
+ (bool)isRelationshipSignalPropertiesIngestAllowed;
+ (bool)isShowingHolidayCalendarEvents;
+ (unsigned long long)maximumNumberOfFacesPerAssetForSingleFocusedPersonFacedAssets;
+ (unsigned long long)maximumNumberOfTextFeaturesPerEvent;
+ (unsigned long long)maximumNumberOfVisibleItems;
+ (unsigned long long)maximumNumberOfVisibleRegularItems;
+ (unsigned long long)minimumNumberOfCuratedAssetsForInterestingMoments;
+ (unsigned long long)minimumNumberOfVisibleItems;
+ (double)minimumRatioOfFocusedPersonFacesPerAssetForMultipleFocusedPersonsFacedAssets;
+ (bool)musicCurationAllowAllForExport;
+ (bool)musicCurationAllowExplicitMusicContent;
+ (bool)musicCurationShouldUseOldStylePreviewURL;
+ (bool)onThisDayHighlightKeyAssetRotationIsEnabled;
+ (bool)peopleSuggestionLearningIsEnabled;
+ (double)relationshipTagMinConfidenceThreshold;
+ (void)setExtendedCurationOptions:(id)arg1;
+ (bool)shouldDisableContentClassificationTask;
+ (bool)suppressGraphLiveUpdate;
+ (bool)useExtendedCurationAssetCountForLocationTitles;
+ (bool)useIconicScoreForTrips;
+ (bool)useMeaningEdgeForEventLabelingAlgorithm;
+ (double)usersChildrenInferenceMinimumLifespanYears;
+ (double)usersChildrenInferenceRecencyThresholdFromLatestMomentDateYears;
+ (double)usersPetsInferenceMinimumLifespanYears;
+ (double)usersPetsInferenceRecencyThresholdFromLatestMomentDateYears;
+ (bool)wallpaperSkipSettlingEffectScoreGating;

@end
