
@protocol FBKDraftingDelegate <NSObject>

@optional

- (void)draftingController:(FBKDraftingController *)arg1 didChangeSnapshot:(FBKDraftModelSnapshot *)arg2;
- (void)draftingController:(FBKDraftingController *)arg1 madeVisibilityUpdatesWithSnapshotDiff:(FBKDraftModelSnapshotDiff *)arg2;
- (void)draftingControllerDidBeginLoading:(FBKDraftingController *)arg1;
- (void)draftingControllerDidFinishLoading:(FBKDraftingController *)arg1 withError:(NSError *)arg2;
- (void)questionVisibilityDidUpdateForDraftingController:(FBKDraftingController *)arg1;

@end
