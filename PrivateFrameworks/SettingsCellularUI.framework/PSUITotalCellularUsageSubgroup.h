
@interface PSUITotalCellularUsageSubgroup : NSObject {
    <PSBillingPeriodSource> * _billingPeriodSource;
    PSDataUsageStatisticsCache * _statisticsCache;
    PSSpecifier * _totalRoamingUsageSpecifier;
    PSSpecifier * _totalUsageSpecifier;
}

@property (nonatomic) <PSBillingPeriodSource> *billingPeriodSource;
@property (nonatomic, retain) PSDataUsageStatisticsCache *statisticsCache;
@property (nonatomic, retain) PSSpecifier *totalRoamingUsageSpecifier;
@property (nonatomic, retain) PSSpecifier *totalUsageSpecifier;

- (void).cxx_destruct;
- (id)billingPeriodSource;
- (id)getLogger;
- (id)initWithStatisticsCache:(id)arg1 andBillingPeriodSource:(id)arg2;
- (void)setBillingPeriodSource:(id)arg1;
- (void)setStatisticsCache:(id)arg1;
- (void)setTotalRoamingUsageSpecifier:(id)arg1;
- (void)setTotalUsageSpecifier:(id)arg1;
- (id)specifiers;
- (id)statisticsCache;
- (id)totalBytesUsed;
- (id)totalDataUsageForSpecifier:(id)arg1;
- (id)totalRoamingBytesUsed;
- (id)totalRoamingDataUsageForSpecifier:(id)arg1;
- (id)totalRoamingUsageSpecifier;
- (id)totalUsageSpecifier;

@end
