
@interface STDrillInDetailListController : STPINListViewController {
    STAllowanceProgressGroupSpecifierProvider * _allowanceProgressGroupSpecifierProvider;
    STCategoryDetailsGroupSpecifierProvider * _categoryDetailsGroupSpecifierProvider;
    STDrillInItemInfoGroupSpecifierProvider * _drillInItemInfoGroupSpecifierProvider;
    STDrillInUsageGroupSpecifierProvider * _screenTimeGroupSpecifierProvider;
    STUsageItem * _usageItem;
}

@property (nonatomic, readonly) STAllowanceProgressGroupSpecifierProvider *allowanceProgressGroupSpecifierProvider;
@property (nonatomic, readonly) STCategoryDetailsGroupSpecifierProvider *categoryDetailsGroupSpecifierProvider;
@property (nonatomic, readonly) STDrillInItemInfoGroupSpecifierProvider *drillInItemInfoGroupSpecifierProvider;
@property (nonatomic, readonly) STDrillInUsageGroupSpecifierProvider *screenTimeGroupSpecifierProvider;
@property (nonatomic, readonly) STUsageItem *usageItem;

- (void).cxx_destruct;
- (void)_didFetchAppInfo:(id)arg1;
- (id)allowanceProgressGroupSpecifierProvider;
- (bool)canBeShownFromSuspendedState;
- (id)categoryDetailsGroupSpecifierProvider;
- (id)drillInItemInfoGroupSpecifierProvider;
- (id)initWithUsageItem:(id)arg1 coordinator:(id)arg2;
- (id)screenTimeGroupSpecifierProvider;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (id)usageItem;
- (void)viewDidLoad;

@end
