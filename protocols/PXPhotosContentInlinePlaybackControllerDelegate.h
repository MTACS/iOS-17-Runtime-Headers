
@protocol PXPhotosContentInlinePlaybackControllerDelegate

@required

- (bool)canPlay:(id <PXDisplayAsset>)arg1;
- (unsigned long long)filterSortedRecordsStrategy;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameFor:(PXGSpriteReference *)arg1 outMinPlayableSize:(struct CGSize { double x1; double x2; }*)arg2;
- (bool)isDisplayAssetEligibleForAutoPlayback:(id <PXDisplayAsset>)arg1;
- (bool)isDisplayAssetEligibleForPlaybackWithSettlingEffect:(id <PXDisplayAsset>)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsFor:(PXPhotosContentInlinePlaybackController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectFor:(PXPhotosContentInlinePlaybackController *)arg1;

@end
