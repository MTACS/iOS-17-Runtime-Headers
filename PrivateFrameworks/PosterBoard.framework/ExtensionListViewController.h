
@interface ExtensionListViewController : UITableViewController <PREditingSceneViewControllerDelegate> {
    long long  _extensionItemActivationStyle;
    NSArray * _extensions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long extensionItemActivationStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadExtensions;
- (void)editingSceneViewController:(id)arg1 userDidDismissWithAction:(long long)arg2 updatedConfiguration:(id)arg3 updatedConfiguredProperties:(id)arg4 completion:(id /* block */)arg5;
- (long long)extensionItemActivationStyle;
- (id)init;
- (void)setExtensionItemActivationStyle:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
