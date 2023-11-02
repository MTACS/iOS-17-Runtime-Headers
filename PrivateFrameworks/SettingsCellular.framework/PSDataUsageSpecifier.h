
@interface PSDataUsageSpecifier : PSSpecifier <PSSpecifierDataUsageReporter> {
    <PSBillingPeriodSource> * _billingPeriodSource;
    NSString * _bundleID;
    PSDataUsageStatisticsCache * _statisticsCache;
    unsigned long long  _type;
}

@property (nonatomic) <PSBillingPeriodSource> *billingPeriodSource;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) PSDataUsageStatisticsCache *statisticsCache;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)billingPeriodSource;
- (id)bundleID;
- (unsigned long long)dataUsage;
- (id)dataUsageString;
- (id)initWithType:(unsigned long long)arg1 bundleID:(id)arg2 name:(id)arg3 statisticsCache:(id)arg4;
- (void)setBillingPeriodSource:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setStatisticsCache:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)statisticsCache;
- (unsigned long long)type;

@end
