
@interface PBFConfigViewController : UITableViewController <PBFPosterExtensionDataStoreObserver, PREditingSceneViewControllerDelegate> {
    NSArray * _configurations;
    PBFPosterExtensionDataStoreXPCServiceGlue * _glue;
    PRSwitcherConfiguration * _switcherConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_posterConfigurationAtIndexPath:(id)arg1;
- (id)_posterPathAtIndexPath:(id)arg1;
- (void)_presentPath:(id)arg1 mode:(long long)arg2;
- (id)_previewForPathAtIndexPath:(id)arg1;
- (void)_reloadData;
- (void)_selectConfiguration:(id)arg1;
- (void)_toggleEdit:(id)arg1;
- (void)_updateEditing:(bool)arg1;
- (void)editingSceneViewController:(id)arg1 userDidDismissWithAction:(long long)arg2 updatedConfiguration:(id)arg3 updatedConfiguredProperties:(id)arg4 completion:(id /* block */)arg5;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)posterExtensionDataStore:(id)arg1 didUpdateSelectedConfiguration:(id)arg2 associatedConfiguration:(id)arg3;
- (void)posterExtensionDataStoreDidUpdateConfigurations:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })topButtonLayoutForEditingSceneViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
