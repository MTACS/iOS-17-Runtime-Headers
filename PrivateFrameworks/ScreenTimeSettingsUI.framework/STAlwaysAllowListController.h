
@interface STAlwaysAllowListController : STPINListViewController {
    PSSpecifier * _allowedAppsGroupSpecifier;
    NSArray * _allowedAppsSpecifiers;
    PSSpecifier * _allowedContactsSpecifier;
    STAlwaysAllowList * _alwaysAllowList;
    PSSpecifier * _chooseAppsGroupSpecifier;
    NSArray * _chooseAppsSpecifiers;
    NSArray * _chooseBundleIDs;
    <STAlwaysAllowListControllerDelegate> * _delegate;
    NSSet * _installedBundleIDs;
}

@property (nonatomic, retain) PSSpecifier *allowedAppsGroupSpecifier;
@property (nonatomic, retain) NSArray *allowedAppsSpecifiers;
@property (retain) PSSpecifier *allowedContactsSpecifier;
@property (nonatomic, copy) STAlwaysAllowList *alwaysAllowList;
@property (nonatomic, retain) PSSpecifier *chooseAppsGroupSpecifier;
@property (nonatomic, retain) NSArray *chooseAppsSpecifiers;
@property (nonatomic, copy) NSArray *chooseBundleIDs;
@property (nonatomic) <STAlwaysAllowListControllerDelegate> *delegate;
@property (nonatomic, copy) NSSet *installedBundleIDs;

- (void).cxx_destruct;
- (id)_allowedContactsDuringDowntimeText:(id)arg1;
- (void)_alwaysAllowListDidChange:(id)arg1;
- (void)_communicationLimitsDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_insertAllowedAppSpecifier:(id)arg1;
- (void)_removeAllowedAppSpecifier:(id)arg1;
- (id)allowedAppsGroupSpecifier;
- (id)allowedAppsSpecifiers;
- (id)allowedContactsSpecifier;
- (id)alwaysAllowList;
- (id)appSpecifiersForBundleIDs:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (id)chooseAppsGroupSpecifier;
- (id)chooseAppsSpecifiers;
- (id)chooseBundleIDs;
- (id)createAllowedAppsSpecifiers;
- (id)createChooseAppsSpecifiers;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)installedBundleIDs;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeAllowedIdentifier:(id)arg1 withSpecifier:(id)arg2;
- (id)removeMessagesConfirmationPrompt;
- (void)setAllowedAppsGroupSpecifier:(id)arg1;
- (void)setAllowedAppsSpecifiers:(id)arg1;
- (void)setAllowedContactsSpecifier:(id)arg1;
- (void)setAlwaysAllowList:(id)arg1;
- (void)setChooseAppsGroupSpecifier:(id)arg1;
- (void)setChooseAppsSpecifiers:(id)arg1;
- (void)setChooseBundleIDs:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInstalledBundleIDs:(id)arg1;
- (bool)shouldReloadSpecifiersOnResume;
- (id)specifiers;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)willResignActive;

@end
