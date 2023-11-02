
@protocol UITableViewDataSourcePrivate <UITableViewDataSource>

@optional

- (NSArray *)_tableView:(UITableView *)arg1 sectionIndexTitlesTrimmedToCount:(unsigned long long)arg2;
- (NSString *)tableView:(UITableView *)arg1 detailTextForHeaderInSection:(long long)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 indexPathForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;

@end
