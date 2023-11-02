
@protocol REElementDataSourceControllerDelegate <NSObject>

@required

- (void)elementDataSourceController:(REElementDataSourceController *)arg1 didAddElement:(REElement *)arg2 toSection:(NSString *)arg3;
- (void)elementDataSourceController:(REElementDataSourceController *)arg1 didRefreshElement:(REElement *)arg2;
- (void)elementDataSourceController:(REElementDataSourceController *)arg1 didReloadElement:(REElement *)arg2;
- (void)elementDataSourceController:(REElementDataSourceController *)arg1 didRemoveElement:(REElement *)arg2;
- (bool)elementDataSourceController:(REElementDataSourceController *)arg1 isElementVisible:(REElement *)arg2;
- (void)elementDataSourceController:(void *)arg1 performBatchUpdates:(void *)arg2; // needs 2 arg types, found 6: REElementDataSourceController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
