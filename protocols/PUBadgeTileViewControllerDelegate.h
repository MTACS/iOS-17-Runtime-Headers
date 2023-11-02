
@protocol PUBadgeTileViewControllerDelegate <NSObject>

@optional

- (void)badgeVisibilityDidChange:(PUBadgeTileViewController *)arg1;
- (void)dismissPresentedViewController:(void *)arg1 presentMenuWithCompletion:(void *)arg2; // needs 2 arg types, found 6: PUBadgeTileViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSUndoManager *)undoManagerForAssetActionPerformer:(PUAssetActionPerformer *)arg1;

@end
