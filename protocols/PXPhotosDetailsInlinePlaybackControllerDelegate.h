
@protocol PXPhotosDetailsInlinePlaybackControllerDelegate <NSObject>

@required

- (struct CGSize { double x1; double x2; })minimumItemSizeForPlaybackInController:(PXPhotosDetailsInlinePlaybackController *)arg1;
- (bool)shouldEnablePlaybackForController:(PXPhotosDetailsInlinePlaybackController *)arg1;

@end
