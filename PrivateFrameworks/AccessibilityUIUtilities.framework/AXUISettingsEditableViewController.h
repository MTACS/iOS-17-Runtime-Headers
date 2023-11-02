
@interface AXUISettingsEditableViewController : AXUISettingsBaseListController

- (void)_addDoneButton;
- (void)_configureEditButton;
- (void)_donePressed;
- (void)_editPressed;
- (bool)canEditTable;
- (id)makeSpecifiers;
- (void)removeDataForSpecifier:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
