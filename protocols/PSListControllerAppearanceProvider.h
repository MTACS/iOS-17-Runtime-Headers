
@protocol PSListControllerAppearanceProvider <NSObject>

@required

- (PSTableCell *)cellForSpecifier:(PSSpecifier *)arg1 inController:(PSListController *)arg2;
- (void)customizeTableView:(UITableView *)arg1 inContainerView:(UIView *)arg2 hostedInSetupController:(bool)arg3 forListController:(PSListController *)arg4;
- (double)estimatedHeightOfRowForCellWithIndexPath:(NSIndexPath *)arg1 inController:(PSListController *)arg2;
- (void)listController:(void *)arg1 updateSectionContentInsetAnimated:(void *)arg2 isRegularWidth:(void *)arg3 contentInsetInitialized:(void *)arg4 contentInsetInitializedApplicator:(void *)arg5; // needs 5 arg types, found 9: PSListController *, bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (long long)tableViewStyleForListController:(PSListController *)arg1;

@end
