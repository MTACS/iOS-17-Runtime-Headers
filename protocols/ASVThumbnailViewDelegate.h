
@protocol ASVThumbnailViewDelegate <NSObject>

@required

- (void)thumbnailView:(ASVThumbnailView *)arg1 wantsToPresentPreviewController:(QLPreviewController *)arg2 forItem:(QLItem *)arg3;

@end
