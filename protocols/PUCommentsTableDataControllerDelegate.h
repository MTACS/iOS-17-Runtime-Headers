
@protocol PUCommentsTableDataControllerDelegate <NSObject>

@required

- (void)commentsTableDataController:(PUCommentsTableDataController *)arg1 didChangeEditing:(bool)arg2;
- (void)commentsTableDataController:(PUCommentsTableDataController *)arg1 presentViewController:(UIViewController *)arg2;
- (void)commentsTableDataController:(PUCommentsTableDataController *)arg1 tableViewDidScroll:(UITableView *)arg2;

@end
