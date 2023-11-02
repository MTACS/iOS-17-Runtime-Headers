
@interface AKAuthorizationEmailEditPaneViewController : AKAuthorizationPaneViewController <UITableViewDataSource, UITableViewDelegate> {
    NSString * _applicationName;
}

@property (nonatomic, retain) NSString *applicationName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AKAuthorizationScopeChoices *editableScopeChoices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applicationName;
- (id)editableScopeChoices;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (id)tableView:(id)arg1 anonymousCellForRow:(unsigned long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 emailCellForRow:(unsigned long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
