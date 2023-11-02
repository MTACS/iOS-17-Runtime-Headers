
@protocol ICDocCamExtractedThumbnailContainerViewDelegate <NSObject>

@required

- (void)thumbnailContainerView:(ICDocCamExtractedThumbnailContainerView *)arg1 moveItemFromIndex:(long long)arg2 toIndex:(long long)arg3;
- (unsigned long long)thumbnailContainerViewCurrentIndex:(ICDocCamExtractedThumbnailContainerView *)arg1;
- (void)thumbnailContainerViewDecrementCurrentIndex:(ICDocCamExtractedThumbnailContainerView *)arg1;
- (void)thumbnailContainerViewIncrementCurrentIndex:(ICDocCamExtractedThumbnailContainerView *)arg1;
- (bool)thumbnailContainerViewIsVisible:(ICDocCamExtractedThumbnailContainerView *)arg1;
- (unsigned long long)thumbnailContainerViewNumberOfItems:(ICDocCamExtractedThumbnailContainerView *)arg1;
- (bool)thumbnailContainerViewSupportsReordering:(ICDocCamExtractedThumbnailContainerView *)arg1;

@end
