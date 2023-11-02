
@interface ATXDigestOnboardingMetrics : _ATXCoreAnalyticsMetric {
    long long  _deliveryTime1;
    long long  _deliveryTime2;
    long long  _deliveryTime3;
    bool  _didSelectShowMore;
    NSString * _digestOnboardingOutcome;
    NSString * _entrySource;
    NSString * _finalUIShown;
    unsigned long long  _numScheduledDeliveries;
    NSString * _sessionUUID;
    double  _timeTaken;
}

@property (nonatomic) long long deliveryTime1;
@property (nonatomic) long long deliveryTime2;
@property (nonatomic) long long deliveryTime3;
@property (nonatomic) bool didSelectShowMore;
@property (nonatomic, retain) NSString *digestOnboardingOutcome;
@property (nonatomic, retain) NSString *entrySource;
@property (nonatomic, retain) NSString *finalUIShown;
@property (nonatomic) unsigned long long numScheduledDeliveries;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) double timeTaken;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (long long)deliveryTime1;
- (long long)deliveryTime2;
- (long long)deliveryTime3;
- (bool)didSelectShowMore;
- (id)digestOnboardingOutcome;
- (id)entrySource;
- (id)finalUIShown;
- (id)metricName;
- (unsigned long long)numScheduledDeliveries;
- (id)sessionUUID;
- (void)setDeliveryTime1:(long long)arg1;
- (void)setDeliveryTime2:(long long)arg1;
- (void)setDeliveryTime3:(long long)arg1;
- (void)setDidSelectShowMore:(bool)arg1;
- (void)setDigestOnboardingOutcome:(id)arg1;
- (void)setEntrySource:(id)arg1;
- (void)setFinalUIShown:(id)arg1;
- (void)setNumScheduledDeliveries:(unsigned long long)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimeTaken:(double)arg1;
- (double)timeTaken;

@end
