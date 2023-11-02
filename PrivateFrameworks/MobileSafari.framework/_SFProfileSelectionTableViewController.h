
@interface _SFProfileSelectionTableViewController : UITableViewController {
    NSArray * _profiles;
    long long  _selectedRow;
}

@property (nonatomic, copy) NSArray *profiles;
@property (nonatomic, readonly) WBProfile *selectedProfile;

- (void).cxx_destruct;
- (id)init;
- (id)profiles;
- (id)selectedProfile;
- (void)setProfiles:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
