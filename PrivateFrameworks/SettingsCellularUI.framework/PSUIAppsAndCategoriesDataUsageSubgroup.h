
@interface PSUIAppsAndCategoriesDataUsageSubgroup : NSObject {
    <PSAppCellularUsageSpecifierDelegate> * _specifierDelegate;
    PSDataUsageStatisticsCache * _statisticsCache;
}

@property (nonatomic) <PSAppCellularUsageSpecifierDelegate> *specifierDelegate;
@property (nonatomic, retain) PSDataUsageStatisticsCache *statisticsCache;

- (void).cxx_destruct;
- (void)addDataUsageCategorySpecifierToSpecifiers:(id)arg1 appType:(unsigned long long)arg2;
- (id)getLogger;
- (id)initWithPolicySpecifierDelegate:(id)arg1 statisticsCache:(id)arg2;
- (void)setSpecifierDelegate:(id)arg1;
- (void)setStatisticsCache:(id)arg1;
- (id)specifierDelegate;
- (id)specifiers;
- (id)statisticsCache;
- (id)usageSpecifiersForAppType:(unsigned long long)arg1 bundleIDs:(id)arg2;

@end
