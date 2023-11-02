
@interface PSAppCellularUsageSpecifier : PSSpecifier <PSSpecifierDataUsageReporter> {
    <PSBillingPeriodSource> * _billingPeriodSource;
    NSString * _bundleID;
    <PSAppCellularUsageSpecifierDelegate> * _delegate;
    bool  _shouldShowUsage;
    PSDataUsageStatisticsCache * _statisticsCache;
}

@property (nonatomic) <PSBillingPeriodSource> *billingPeriodSource;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) <PSAppCellularUsageSpecifierDelegate> *delegate;
@property (nonatomic) bool shouldShowUsage;
@property (nonatomic, retain) PSDataUsageStatisticsCache *statisticsCache;

+ (id)_specifierWithDisplayName:(id)arg1 bundleID:(id)arg2 shouldShowUsage:(bool)arg3 icon:(id)arg4 statisticsCache:(id)arg5;
+ (id)appSpecifierWithBundleID:(id)arg1 name:(id)arg2 statisticsCache:(id)arg3;
+ (void)setIconForSpecifier:(id)arg1 bundleID:(id)arg2;
+ (id)systemPolicySpecifierForAppName:(id)arg1 bundleID:(id)arg2 icon:(id)arg3;
+ (id)systemPolicySpecifierForAppName:(id)arg1 bundleID:(id)arg2 icon:(id)arg3 enabled:(bool)arg4;

- (void).cxx_destruct;
- (id)billingPeriodSource;
- (id)bundleID;
- (id)cellularUsagePolicy;
- (unsigned long long)dataUsage;
- (id)dataUsageString;
- (id)delegate;
- (bool)isRestricted;
- (void)setBillingPeriodSource:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCellularUsagePolicy:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldShowUsage:(bool)arg1;
- (void)setStatisticsCache:(id)arg1;
- (bool)shouldShowUsage;
- (id)statisticsCache;

@end
