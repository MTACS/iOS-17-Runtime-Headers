
@protocol _UITableViewSubviewManagerDelegate <NSObject>

@required

- (void)_reusePrefetchedCell:(UITableViewCell *)arg1 withIndexPath:(NSIndexPath *)arg2;
- (void)_reuseTableViewCell:(UITableViewCell *)arg1 withIndexPath:(NSIndexPath *)arg2 didEndDisplaying:(bool)arg3;

@end
