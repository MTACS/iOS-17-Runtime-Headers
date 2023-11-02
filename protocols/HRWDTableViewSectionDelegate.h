
@protocol HRWDTableViewSectionDelegate <NSObject>

@required

- (void)dismissViewControllerAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSIndexPath *)indexPathForCell:(UITableViewCell *)arg1;
- (void)presentViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (HRProfile *)profile;
- (void)pushViewController:(UIViewController *)arg1;
- (void)reloadSection:(unsigned long long)arg1 animated:(bool)arg2;
- (void)reloadTable;
- (void)sectionAddedChildViewController:(UIViewController *)arg1;
- (void)setProfile:(HRProfile *)arg1;
- (void)setTableView:(UITableView *)arg1;
- (UITableView *)tableView;

@end
