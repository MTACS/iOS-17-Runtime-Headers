
@protocol CAMVideoThumbnailContentsDelegate <NSObject>

@required

- (void)videoThumbnailOutputWillBeginRenderingThumbnailsWithContents:(id)arg1;
- (void)videoThumbnailOutputWillEndRenderingThumbnails;

@end
