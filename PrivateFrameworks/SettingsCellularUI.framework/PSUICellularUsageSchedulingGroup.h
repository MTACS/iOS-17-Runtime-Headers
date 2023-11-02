
@interface PSUICellularUsageSchedulingGroup : NSObject <PSAppCellularUsageSpecifierDelegate, PSBillingPeriodSelectorSpecifierDelegate, PSUIResetStatisticsGroupDelegate> {
    PSUIAppDataUsageSpecifierFactory * _appDataUsageSpecifierFactory;
    PSListController * _hostController;
    CTUIListWithHeaderLoadingGroup * _loadingGroup;
    bool  _refreshInProgress;
}

@property (nonatomic, retain) PSUIAppDataUsageSpecifierFactory *appDataUsageSpecifierFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *hostController;
@property (nonatomic, retain) CTUIListWithHeaderLoadingGroup *loadingGroup;
@property bool refreshInProgress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appDataUsageSpecifierFactory;
- (void)calculateUsage;
- (void)didFailToSetPolicyForSpecifier:(id)arg1;
- (void)didModifyStatisticsSetting;
- (void)didResetStatistics;
- (id)getLogger;
- (id)hostController;
- (id)initWithListController:(id)arg1 groupSpecifierTitle:(id)arg2;
- (id)loadingGroup;
- (void)prefetchPoliciesFor:(id)arg1;
- (bool)refreshInProgress;
- (void)selectedBillingPeriodChanged:(unsigned long long)arg1;
- (void)setAppDataUsageSpecifierFactory:(id)arg1;
- (void)setGroupSpecifierTitle:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setLoadingGroup:(id)arg1;
- (void)setRefreshInProgress:(bool)arg1;
- (void)sortGroup;
- (id)specifiers;

@end
