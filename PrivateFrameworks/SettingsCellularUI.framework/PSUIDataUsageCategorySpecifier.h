
@interface PSUIDataUsageCategorySpecifier : PSSpecifier {
    <PSBillingPeriodSource> * _billingPeriodSource;
    PSDataUsageStatisticsCache * _statisticsCache;
    NSArray * _subcategorySpecifiers;
    unsigned long long  _type;
}

@property (nonatomic) <PSBillingPeriodSource> *billingPeriodSource;
@property (nonatomic, retain) PSDataUsageStatisticsCache *statisticsCache;
@property (nonatomic, retain) NSArray *subcategorySpecifiers;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)billingPeriodSource;
- (unsigned long long)dataUsage;
- (id)dataUsageString;
- (id)getLogger;
- (id)initWithType:(unsigned long long)arg1 subSpecifiers:(id)arg2;
- (void)setBillingPeriodSource:(id)arg1;
- (void)setStatisticsCache:(id)arg1;
- (void)setSubcategorySpecifiers:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)statisticsCache;
- (id)subcategorySpecifiers;
- (unsigned long long)type;

@end
