
@interface ATXTimelineAbuseControlConfig : NSObject {
    NSDictionary * _config;
    unsigned long long  _defaultDurationForFallbackTimelineSuggestions;
    unsigned long long  _defaultDurationForTimelineSuggestions;
    long long  _defaultDurationLimit;
    long long  _defaultDurationLimitForDiverseSchemas;
    long long  _defaultDurationLimitForLikelyDiverseSchemas;
    long long  _defaultDurationLimitForSingleScoreSchemas;
    long long  _defaultHardRotationQuota;
    long long  _defaultHardRotationQuotaForDiverseSchemas;
    long long  _defaultHardRotationQuotaForLikelyDiverseSchemas;
    long long  _defaultHardRotationQuotaForSingleScoreSchemas;
    long long  _defaultSoftRotationQuota;
    long long  _defaultSoftRotationQuotaForDiverseSchemas;
    long long  _defaultSoftRotationQuotaForLikelyDiverseSchemas;
    long long  _defaultSoftRotationQuotaForSingleScoreSchemas;
    NSArray * _denyList;
    unsigned long long  _minimumSecondsBetweenMetadataUpdatesPerSource;
    ATXTimelineRelevancePersonalizedConfig * _personalizedConfig;
    NSString * _timelineRelevanceABGroup;
    unsigned long long  _timelineUpdateLimitPerAppBundleId;
    unsigned long long  _timelineUpdateLimitPerSource;
    NSArray * _widgetsExcludedFromPersonalizedQuotaUpdate;
}

@property (nonatomic, readonly) unsigned long long defaultDurationForFallbackTimelineSuggestions;
@property (nonatomic, readonly) unsigned long long defaultDurationForTimelineSuggestions;
@property (nonatomic, readonly) long long defaultDurationLimit;
@property (nonatomic, readonly) long long defaultDurationLimitForDiverseSchemas;
@property (nonatomic, readonly) long long defaultDurationLimitForLikelyDiverseSchemas;
@property (nonatomic, readonly) long long defaultDurationLimitForSingleScoreSchemas;
@property (nonatomic, readonly) long long defaultHardRotationQuota;
@property (nonatomic) long long defaultHardRotationQuotaForDiverseSchemas;
@property (nonatomic, readonly) long long defaultHardRotationQuotaForLikelyDiverseSchemas;
@property (nonatomic, readonly) long long defaultHardRotationQuotaForSingleScoreSchemas;
@property (nonatomic, readonly) long long defaultSoftRotationQuota;
@property (nonatomic) long long defaultSoftRotationQuotaForDiverseSchemas;
@property (nonatomic, readonly) long long defaultSoftRotationQuotaForLikelyDiverseSchemas;
@property (nonatomic, readonly) long long defaultSoftRotationQuotaForSingleScoreSchemas;
@property (nonatomic, readonly) NSArray *denyList;
@property (nonatomic, readonly) unsigned long long minimumSecondsBetweenMetadataUpdatesPerSource;
@property (nonatomic, retain) NSString *timelineRelevanceABGroup;
@property (nonatomic, readonly) unsigned long long timelineUpdateLimitPerAppBundleId;
@property (nonatomic, readonly) unsigned long long timelineUpdateLimitPerSource;
@property (nonatomic, retain) NSArray *widgetsExcludedFromPersonalizedQuotaUpdate;

- (void).cxx_destruct;
- (double)coolDownIntervalForWidgetWithIdentifier:(id)arg1 kind:(id)arg2;
- (unsigned long long)defaultDurationForFallbackTimelineSuggestions;
- (unsigned long long)defaultDurationForTimelineSuggestions;
- (long long)defaultDurationLimit;
- (long long)defaultDurationLimitForDiverseSchemas;
- (long long)defaultDurationLimitForLikelyDiverseSchemas;
- (long long)defaultDurationLimitForSingleScoreSchemas;
- (long long)defaultHardRotationQuota;
- (long long)defaultHardRotationQuotaForDiverseSchemas;
- (long long)defaultHardRotationQuotaForLikelyDiverseSchemas;
- (long long)defaultHardRotationQuotaForSingleScoreSchemas;
- (long long)defaultSoftRotationQuota;
- (long long)defaultSoftRotationQuotaForDiverseSchemas;
- (long long)defaultSoftRotationQuotaForLikelyDiverseSchemas;
- (long long)defaultSoftRotationQuotaForSingleScoreSchemas;
- (id)denyList;
- (double)durationLimitForWidgetWithIdentifier:(id)arg1 kind:(id)arg2;
- (long long)hardRotationQuotaForWidgetWithIdentifier:(id)arg1 kind:(id)arg2;
- (id)init;
- (unsigned long long)minimumSecondsBetweenMetadataUpdatesPerSource;
- (bool)randomizationDisabledForWidgetWithIdentifier:(id)arg1 kind:(id)arg2;
- (long long)resolvedValueForConfigWithKey:(id)arg1 forWidgetWithIdentifier:(id)arg2 kind:(id)arg3;
- (void)setDefaultHardRotationQuotaForDiverseSchemas:(long long)arg1;
- (void)setDefaultSoftRotationQuotaForDiverseSchemas:(long long)arg1;
- (void)setTimelineRelevanceABGroup:(id)arg1;
- (void)setWidgetsExcludedFromPersonalizedQuotaUpdate:(id)arg1;
- (bool)shouldUsePersonalizedBudgets;
- (long long)softRotationQuotaForWidgetWithIdentifier:(id)arg1 kind:(id)arg2;
- (bool)stalenessDisabledForWidgetWithIdentifier:(id)arg1 kind:(id)arg2;
- (id)timelineRelevanceABGroup;
- (unsigned long long)timelineUpdateLimitPerAppBundleId;
- (unsigned long long)timelineUpdateLimitPerSource;
- (id)widgetsExcludedFromPersonalizedQuotaUpdate;

@end
