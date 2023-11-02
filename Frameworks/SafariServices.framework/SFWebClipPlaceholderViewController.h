
@interface SFWebClipPlaceholderViewController : UITableViewController {
    UITableViewCell * _addressCell;
    UITableViewCell * _titleCell;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_cellInset;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewWillLayoutSubviews;

@end
