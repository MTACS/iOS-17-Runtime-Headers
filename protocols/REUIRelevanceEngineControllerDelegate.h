
@protocol REUIRelevanceEngineControllerDelegate <NSObject>

@required

- (void)engineController:(REUIRelevanceEngineController *)arg1 didInsertContent:(REContent *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)engineController:(REUIRelevanceEngineController *)arg1 didMoveContent:(REContent *)arg2 fromIndexPath:(NSIndexPath *)arg3 toIndexPath:(NSIndexPath *)arg4;
- (void)engineController:(REUIRelevanceEngineController *)arg1 didReloadContent:(REContent *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)engineController:(REUIRelevanceEngineController *)arg1 didRemoveContent:(REContent *)arg2 atIndexPath:(NSIndexPath *)arg3;

@optional

- (void)engineController:(REUIRelevanceEngineController *)arg1 didReloadContent:(REContent *)arg2 withIdentifier:(NSString *)arg3;
- (void)engineController:(REUIRelevanceEngineController *)arg1 didReloadElement:(REElement *)arg2;
- (bool)engineController:(REUIRelevanceEngineController *)arg1 isElementAtIndexPathVisible:(NSIndexPath *)arg2;
- (void)engineController:(void *)arg1 performBatchUpdateBlock:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: REUIRelevanceEngineController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (void)engineControllerDidBeginUpdatingRelevance:(REUIRelevanceEngineController *)arg1;
- (void)engineControllerDidFinishUpdatingRelevance:(REUIRelevanceEngineController *)arg1;

@end
