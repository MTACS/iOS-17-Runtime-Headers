
@interface PSUIAppDataUsageGroup : NSObject <PSAppCellularUsageSpecifierDelegate, PSSpecifierGroup> {
    PSSpecifier * _groupSpecifier;
    PSListController * _hostController;
    CTUIListLoadingGroup * _loadingGroup;
    NSArray * _specifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *hostController;
@property (nonatomic, retain) CTUIListLoadingGroup *loadingGroup;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)calculateUsage;
- (void)didFailToSetPolicyForSpecifier:(id)arg1;
- (id)getLogger;
- (id)groupSpecifier;
- (id)hostController;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)loadingGroup;
- (void)prefetchResourcesFor:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setLoadingGroup:(id)arg1;
- (id)specifiers;

@end
