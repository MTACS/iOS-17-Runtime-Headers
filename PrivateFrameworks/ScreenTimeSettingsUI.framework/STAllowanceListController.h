
@interface STAllowanceListController : STPINListViewController <STAllowanceDetailListControllerDelegate> {
    NSArray * _allowanceSpecifiers;
    NSDictionary * _allowanceSpecifiersByBundleIdentifier;
    NSObject<STRootViewModelCoordinator> * _coordinator;
    PSSpecifier * _enableAllAllowancesSpecifier;
    PSSpecifier * _informativeTextGroupSpecifier;
    bool  _shouldShowConfirmDeletionAlert;
}

@property (copy) NSArray *allowanceSpecifiers;
@property (copy) NSDictionary *allowanceSpecifiersByBundleIdentifier;
@property (nonatomic, retain) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PSSpecifier *enableAllAllowancesSpecifier;
@property (readonly) unsigned long long hash;
@property (retain) PSSpecifier *informativeTextGroupSpecifier;
@property bool shouldShowConfirmDeletionAlert;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_adjustCellHeightForAllowanceSpecifier:(id)arg1;
- (id)_allAllowancesEnabled:(id)arg1;
- (void)_allowancesDidChange;
- (void)_devicesDidChange:(id)arg1 coordinator:(id)arg2;
- (void)_didFetchAppInfo:(id)arg1;
- (void)_hasWatchOSDevicesDidChange:(bool)arg1 coordinator:(id)arg2;
- (id)_informativeTextWithDevices:(id)arg1 hasWatchOSDevices:(bool)arg2;
- (void)_reloadInformativeTextGroupSpecifierIfNeeded:(id)arg1;
- (void)_setAllAllowancesEnabled:(id)arg1 specifier:(id)arg2;
- (void)_showAllowanceDetailController:(id)arg1;
- (void)_showConfirmDeletionView:(id)arg1;
- (id)_specifierForAllowance:(id)arg1;
- (id)_subtitleTextForAllowance:(id)arg1;
- (void)addAllowance:(id)arg1;
- (void)allowanceDetailController:(id)arg1 didDeleteAllowance:(id)arg2;
- (void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2;
- (id)allowanceSpecifiers;
- (id)allowanceSpecifiersByBundleIdentifier;
- (bool)canBeShownFromSuspendedState;
- (void)confirmDeletion:(id)arg1;
- (id)coordinator;
- (void)dealloc;
- (void)deleteAllowance:(id)arg1;
- (id)enableAllAllowancesSpecifier;
- (id)informativeTextGroupSpecifier;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAllowanceSpecifiers:(id)arg1;
- (void)setAllowanceSpecifiersByBundleIdentifier:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setEnableAllAllowancesSpecifier:(id)arg1;
- (void)setInformativeTextGroupSpecifier:(id)arg1;
- (void)setShouldShowConfirmDeletionAlert:(bool)arg1;
- (bool)shouldShowConfirmDeletionAlert;
- (void)showStoreDemoAlert;
- (id)specifiers;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
