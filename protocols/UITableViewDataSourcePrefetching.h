
@protocol UITableViewDataSourcePrefetching <NSObject>

@required

- (void)tableView:(UITableView *)arg1 prefetchRowsAtIndexPaths:(NSArray *)arg2;

@optional

- (void)tableView:(UITableView *)arg1 cancelPrefetchingForRowsAtIndexPaths:(NSArray *)arg2;

@end
