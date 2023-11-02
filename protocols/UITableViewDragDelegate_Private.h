
@protocol UITableViewDragDelegate_Private <UITableViewDragDelegate>

@optional

- (long long)_tableView:(UITableView *)arg1 dataOwnerForDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (_UIDragSessionProperties *)_tableView:(UITableView *)arg1 dragSessionPropertiesForSession:(id <UIDragSession>)arg2;
- (bool)_tableView:(UITableView *)arg1 dragSessionSupportsSystemDrag:(id <UIDragSession>)arg2;

@end
