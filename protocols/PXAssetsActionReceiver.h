
@protocol PXAssetsActionReceiver <NSObject>

@optional

- (void)addAssetsToAlbum:(id)arg1;
- (void)addAssetsToLastUsedAlbum:(id)arg1;
- (void)autoEnhanceAssets:(id)arg1;
- (void)copyAdjustments:(id)arg1;
- (void)duplicateAssets:(id)arg1;
- (void)favoriteAssets:(id)arg1;
- (void)hideAssets:(id)arg1;
- (void)pasteAdjustments:(id)arg1;
- (void)printAssets:(id)arg1;
- (void)rotateAssetsClockwise:(id)arg1;
- (void)rotateAssetsCounterclockwise:(id)arg1;
- (void)shareAssets:(id)arg1;
- (void)toggleEditor:(id)arg1;
- (void)toggleInspector:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)toggleViewer:(id)arg1;
- (void)trashAssets:(id)arg1;
- (void)trashAssetsWithoutConfirmation:(id)arg1;

@end
