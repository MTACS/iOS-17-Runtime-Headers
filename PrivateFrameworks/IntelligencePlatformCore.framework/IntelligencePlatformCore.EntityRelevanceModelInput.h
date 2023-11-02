
@interface IntelligencePlatformCore.EntityRelevanceModelInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void behaviorPopularityGivenContext_coarseGeoHash;
    void behaviorPopularityGivenContext_coarseTimeOfDay;
    void behaviorPopularityGivenContext_dayOfWeek;
    void behaviorPopularityGivenContext_loi;
    void behaviorPopularityGivenContext_specificGeoHash;
    void behaviorPopularityGivenSequence;
    void contextPopularityGivenBehavior_coarseGeoHash;
    void contextPopularityGivenBehavior_coarseTimeOfDay;
    void contextPopularityGivenBehavior_dayOfWeek;
    void contextPopularityGivenBehavior_loi;
    void contextPopularityGivenBehavior_specificGeoHash;
    void contextPopularityGivenBehavior_wifi;
    void dailyDoseL1Error;
    void dailyDoseL2Error;
    void lastExecutionAge;
    void longTermTrendingPopularity;
    void medianTimeIntervalBetweenExecution;
    void posteriorProbabilityGivenContext_coarseGeoHash_coarseTimeOfDay;
    void posteriorProbabilityGivenContext_coarseTimeOfDay;
    void posteriorProbabilityGivenContext_coarseTimeOfDay_dayOfWeek;
    void posteriorProbabilityGivenContext_coarseTimeOfDay_specificGeoHash;
    void posteriorProbabilityGivenContext_coarseTimeOfDay_wifi;
    void posteriorProbabilityGivenContext_dayOfWeek;
    void posteriorProbabilityGivenContext_dayOfWeek_wifi;
    void posteriorProbabilityGivenContext_loi;
    void posteriorProbabilityGivenContext_specificGeoHash;
    void posteriorProbabilityGivenContext_wifi;
    void sequencePopularityGivenBehavior;
    void shortTermTrendingPopularity;
    void trendingPopularity;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
