
@interface PKSettingsTableViewController : UITableViewController {
    PKSettingsTableViewConfiguration * _currentConfiguration;
    PKTableViewDiffableDataSource * _dataSource;
}

- (void).cxx_destruct;
- (void)applyConfiguration:(id)arg1 animated:(bool)arg2;
- (void)applyConfiguration:(id)arg1 reconfigureItems:(bool)arg2 animated:(bool)arg3;
- (long long)indexOfSectionWithIdentifier:(id)arg1;
- (id)sections;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
