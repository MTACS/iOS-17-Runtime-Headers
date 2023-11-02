
@protocol _UIActivityUserDefaultsDataSourceProxy

@required

- (bool)tableView:(UITableView *)arg1 canEditRowAtIndexPath:(NSIndexPath *)arg2;
- (bool)tableView:(UITableView *)arg1 canMoveRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 moveRowAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;

@end
