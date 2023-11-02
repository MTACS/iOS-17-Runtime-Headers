
@interface CKSettingsiMessageAppsViewController : PSListController {
    CKSettingsiMessageAppManager * _appManager;
}

@property (nonatomic, retain) CKSettingsiMessageAppManager *appManager;

- (void).cxx_destruct;
- (id)_appsWithiMessageAppsSpecifiers;
- (bool)_canDeleteAppAtIndexPath:(id)arg1;
- (void)_deleteApp:(id)arg1;
- (id)_generateiMessageAppSpecifiers;
- (id)_iMessageOnlyAppsSpecifiers;
- (id)_specifierForApp:(id)arg1;
- (id)appManager;
- (id)getIsMessagesAppShownInSendMenuForSpecifier:(id)arg1;
- (id)initWithAppManager:(id)arg1;
- (void)installediMessageAppsDidChange:(id)arg1;
- (void)setAppManager:(id)arg1;
- (void)setIsMessagesAppShownInSendMenu:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
