
@interface ABBurdenResult : NSObject {
    NSNumber * _burdenPercentage;
    NSDictionary * _metricsForCoreAnalytics;
    unsigned long long  _unavailabilityReason;
}

@property (nonatomic, retain) NSNumber *burdenPercentage;
@property (nonatomic, retain) NSDictionary *metricsForCoreAnalytics;
@property (nonatomic) unsigned long long unavailabilityReason;

- (void).cxx_destruct;
- (id)burdenPercentage;
- (id)init;
- (id)metricsForCoreAnalytics;
- (void)setBurdenPercentage:(id)arg1;
- (void)setMetricsForCoreAnalytics:(id)arg1;
- (void)setUnavailabilityReason:(unsigned long long)arg1;
- (unsigned long long)unavailabilityReason;

@end
