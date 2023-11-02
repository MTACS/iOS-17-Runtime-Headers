
@interface HUMediaAccessControlEditorTableViewController : HUItemTableViewController <HUMediaAccessControlEditorModuleControllerDelegate> {
    HUMediaAccessControlEditorModuleController * _accessControlEditorModuleController;
    HMHome * _home;
}

@property (nonatomic, readonly) HUMediaAccessControlEditorModuleController *accessControlEditorModuleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateFooterView:(id)arg1 forSection:(long long)arg2;
- (id)accessControlEditorModuleController;
- (void)accessControlEditorModuleController:(id)arg1 didUpdateAccessControl:(id)arg2;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)itemModuleControllers;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

@end
