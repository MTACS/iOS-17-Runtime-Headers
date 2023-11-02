
@interface ATXTimelineRelevanceMetricHarvester : NSObject {
    ATXTimelineAbuseControlConfig * _abuseControlConfig;
    NSUserDefaults * _defaults;
    ATXInformationStore * _informationStore;
    NSDate * _loggingStartDate;
}

+ (int)PBClientModelFromString:(id)arg1;
+ (int)PBTimelineEntrySuggestionMappingReasonFrom:(long long)arg1;
+ (int)PBTimelineRelevanceAbuseControlOutcomeTypeFrom:(long long)arg1;
+ (int)PBTimelineRelevanceEngagementFromATXStackRotationEngagementStatus:(unsigned long long)arg1;
+ (int)PBTimelineRelevanceRotationEventTypeFromReason:(id)arg1;
+ (int)PBWidgetFamilyFromCHSWidgetFamily:(long long)arg1;
+ (double)roundNumber:(id)arg1 toSignificantFigures:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_addAbuseControlOutcomesForSuggestionId:(id)arg1 withPBTimelineRelevanceSuggestion:(id)arg2 anonymizeTimestampsRelativeTo:(double)arg3;
- (void)_addRotationHistoryForWidgetBundleId:(id)arg1 appBundleId:(id)arg2 widgetKind:(id)arg3 widgetSize:(long long)arg4 withPBTimelineRelevanceContainer:(id)arg5 anonymizeTimestampsRelativeTo:(double)arg6;
- (bool)_shouldLogHomeScreenEvent:(id)arg1 widgetBundleId:(id)arg2 appBundleId:(id)arg3 widgetKind:(id)arg4 widgetFamily:(long long)arg5;
- (bool)_shouldProcessEvent:(id)arg1;
- (id)_timeBasedMergePublisher:(id)arg1 withOtherPublishers:(id)arg2;
- (void)_updateMetricsSubmissionDateTo:(id)arg1;
- (void)_updateTimelineEntriesDictionaryWithEntries:(id)arg1 withKey:(id)arg2 withScoreEntry:(id)arg3;
- (void)addFeatureVectorToTimelineRelevanceContainer:(id)arg1;
- (void)addRotationsToContainer:(id)arg1 withStackRotationSesssion:(id)arg2 anonymizeTimestampsRelativeTo:(double)arg3;
- (void)addStackConfigSummaryToTimelineRelevanceContainer:(id)arg1 withStackConfigSummary:(id)arg2;
- (bool)addTimelineRelevanceScoresToTimelineRelevanceContainer:(id)arg1 forWidget:(id)arg2 withDistributionsLogged:(unsigned long long)arg3 updatingDictionary:(id)arg4 anonymizeTimestampsRelativeTo:(double)arg5;
- (void)addTimelineRelevanceSuggestionsToContainer:(id)arg1 withTimelineEntries:(id)arg2 anonymizeTimestampsRelativeTo:(double)arg3;
- (id)fetchStackConfigSummaryForWidgetBundleId:(id)arg1 appBundleId:(id)arg2 widgetKind:(id)arg3 widgetSize:(long long)arg4 withPBTimelineRelevanceContainer:(id)arg5 anonymizeTimestampsRelativeTo:(double)arg6;
- (void)harvestWithActivity:(id)arg1;
- (id)init;
- (id)initWithInformationStore:(id)arg1;
- (bool)isFirstParty:(id)arg1;
- (id)timeOfLatestMetricsSubmission;
- (id)widgetsForDataCollection:(id)arg1;

@end
