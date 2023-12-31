
@protocol UITableViewFocusDelegateLegacy <UITableViewDelegate>

@optional

- (bool)_tableView:(UITableView *)arg1 canFocusRowAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)indexPathForPreferredFocusedItemForTableView:(UITableView *)arg1;
- (void)tableView:(UITableView *)arg1 didFocusRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didUnfocusRowAtIndexPath:(NSIndexPath *)arg2;
- (bool)tableView:(UITableView *)arg1 shouldUpdateFocusFromRowAtIndexPath:(NSIndexPath *)arg2 toView:(UIView *)arg3 heading:(unsigned long long)arg4;

@end
