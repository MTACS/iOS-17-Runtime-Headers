
@protocol EKUIInviteesViewSection <NSObject>

@required

- (NSArray *)actionsForRow:(NSIndexPath *)arg1;
- (bool)canEditRow:(NSIndexPath *)arg1;
- (bool)canSelectRow:(NSIndexPath *)arg1;
- (void)cancelOutstandingOperations;
- (UITableViewCell *)cellForIndexPath:(NSIndexPath *)arg1 inTableView:(UITableView *)arg2;
- (void)commitEditingStyle:(long long)arg1 forRow:(NSIndexPath *)arg2;
- (EKUIInviteeContextMenuData *)contextMenuDataForIndexPath:(NSIndexPath *)arg1 interaction:(UIContextMenuInteraction *)arg2;
- (NSString *)debugTitle;
- (long long)editingStyleForRow:(NSIndexPath *)arg1;
- (double)estimatedHeightForRow:(NSIndexPath *)arg1;
- (NSString *)headerTitle;
- (unsigned long long)numberOfRows;
- (void)reloadAndRegisterReusableCellsWithTableView:(UITableView *)arg1;
- (bool)sectionShouldBeShown;
- (void)selectRow:(NSIndexPath *)arg1;
- (void)setTableViewCellHook:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, UITableViewCell *, id /* block */, unsigned long long, void*
- (bool)supportsContextMenuForIndexPath:(NSIndexPath *)arg1;
- (NSString *)titleForDeleteConfirmationButtonForRow:(NSIndexPath *)arg1;

@optional

- (UITableViewHeaderFooterView *)customFooterView;
- (UITableViewHeaderFooterView *)customHeaderView;
- (bool)hideDivderLineForindexPath:(NSIndexPath *)arg1;

@end
