
@protocol PXFeedActionPerformer <NSObject>

@optional

- (UIMenu *)contextMenuForObjectReference:(PXSectionedObjectReference *)arg1 inDataSource:(PXSectionedDataSource *)arg2 suggestedActions:(NSArray *)arg3 fromViewController:(UIViewController<PXActionPerformerDelegate> *)arg4;
- (void)deleteItemsInSelection:(PXSelectionSnapshot *)arg1 undoManager:(NSUndoManager *)arg2;
- (bool)handlePrimaryActionOnItemAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 inDataSource:(PXSectionedDataSource *)arg2 fromViewController:(UIViewController *)arg3;
- (bool)navigateToObjectReference:(void *)arg1 originalSource:(void *)arg2 fromViewController:(void *)arg3 animated:(void *)arg4 willPresentHandler:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 16: PXSectionedObjectReference *, NSString *, UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*, id /* block */, void*, void, id /* block */, UIViewController *, void*

@end
