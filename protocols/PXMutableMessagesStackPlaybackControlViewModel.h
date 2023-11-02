
@protocol PXMutableMessagesStackPlaybackControlViewModel <NSObject>

@required

- (long long)currentItem;
- (bool)isSettled;
- (void)setCurrentItem:(long long)arg1;
- (void)setSettled:(bool)arg1;
- (void)setVideoController:(PXGDisplayAssetVideoPresentationController *)arg1;
- (PXGDisplayAssetVideoPresentationController *)videoController;

@end
