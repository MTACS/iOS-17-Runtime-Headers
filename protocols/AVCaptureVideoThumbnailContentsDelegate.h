
@protocol AVCaptureVideoThumbnailContentsDelegate <NSObject>

@required

- (void)videoThumbnailOutput:(AVCaptureVideoThumbnailOutput *)arg1 willBeginRenderingThumbnailsWithContents:(id)arg2;
- (void)videoThumbnailOutputWillEndRenderingThumbnails:(AVCaptureVideoThumbnailOutput *)arg1;

@end
