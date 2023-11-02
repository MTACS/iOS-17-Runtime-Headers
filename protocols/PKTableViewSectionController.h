
@protocol PKTableViewSectionController <NSObject>

@required

- (NSArray *)sectionIdentifiers;
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForRowAtIndexPath:(NSIndexPath *)arg2 sectionIdentifier:(NSString *)arg3;
- (long long)tableView:(UITableView *)arg1 numberOfRowsInSectionIdentifier:(NSString *)arg2;

@optional

- (long long)editingStyleForRowAtIndexPath:(NSIndexPath *)arg1 sectionIdentifier:(NSString *)arg2;
- (double)estimatedHeightForRowAtIndexPath:(NSIndexPath *)arg1 sectionIdentifier:(NSString *)arg2;
- (bool)shouldDrawBottomSeparatorForSectionIdentifier:(NSString *)arg1;
- (bool)shouldDrawTopSeparatorForSectionIdentifier:(NSString *)arg1;
- (bool)shouldHighlightRowAtIndexPath:(NSIndexPath *)arg1 sectionIdentifier:(NSString *)arg2;
- (bool)tableView:(UITableView *)arg1 canEditRowAtIndexPath:(NSIndexPath *)arg2 sectionIdentifier:(NSString *)arg3;
- (UIContextMenuConfiguration *)tableView:(UITableView *)arg1 contextMenuConfigurationForRowAtIndexPath:(NSIndexPath *)arg2 point:(struct CGPoint { double x1; double x2; })arg3 sectionIdentifier:(NSString *)arg4;
- (void)tableView:(UITableView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2 sectionIdentifier:(NSString *)arg3;
- (double)tableView:(UITableView *)arg1 heightForFooterInSectionIdentifier:(NSString *)arg2;
- (double)tableView:(UITableView *)arg1 heightForHeaderInSectionIdentifier:(NSString *)arg2;
- (double)tableView:(UITableView *)arg1 heightForRowAtIndexPath:(NSIndexPath *)arg2 sectionIdentifier:(NSString *)arg3;
- (UISwipeActionsConfiguration *)tableView:(UITableView *)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(NSIndexPath *)arg2 sectionIdentifier:(NSString *)arg3;
- (UISwipeActionsConfiguration *)tableView:(UITableView *)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(NSIndexPath *)arg2 sectionIdentifier:(NSString *)arg3;
- (UIView *)tableView:(UITableView *)arg1 viewForFooterInSectionIdentifier:(NSString *)arg2;
- (UIView *)tableView:(UITableView *)arg1 viewForHeaderInSectionIdentifier:(NSString *)arg2;
- (NSString *)titleForFooterInSectionIdentifier:(NSString *)arg1;
- (NSString *)titleForHeaderInSectionIdentifier:(NSString *)arg1;

@end
