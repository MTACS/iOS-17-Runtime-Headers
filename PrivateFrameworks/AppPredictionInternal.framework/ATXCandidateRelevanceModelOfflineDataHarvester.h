
@interface ATXCandidateRelevanceModelOfflineDataHarvester : NSObject {
    NSArray * _configs;
}

+ (float)calculateF1ScoreWithPrecision:(float)arg1 recall:(float)arg2;
+ (id)candidateMetricsFromConfig:(id)arg1;
+ (unsigned int)daysBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (id)evaluationMetricsFromConfig:(id)arg1 startTime:(id)arg2 endTime:(id)arg3;
+ (void)harvestDataUsingConfig:(id)arg1;
+ (id)metricsForConfig:(id)arg1;
+ (id)modelMetricsForConfig:(id)arg1;

- (void).cxx_destruct;
- (void)harvestData;
- (id)init;
- (id)initWithConfigs:(id)arg1;

@end
