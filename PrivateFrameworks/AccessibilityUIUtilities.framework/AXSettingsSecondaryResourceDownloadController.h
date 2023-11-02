
@interface AXSettingsSecondaryResourceDownloadController : AXSettingsResourceDownloadController

- (id)_dialect;
- (void)_donePressed;
- (void)_editPressed:(id)arg1;
- (id)_footerLabel;
- (id)_internalSpecifiers;
- (id /* block */)getDialectPreferencesCallback;
- (void)manageEditButton;
- (id /* block */)setDialectPreferencesCallback;
- (id)specifiers;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
