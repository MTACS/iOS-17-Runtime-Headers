
@protocol QLPreviewScrollViewZoomDelegate <NSObject>

@optional

- (void)previewScrollView:(QLPreviewScrollView *)arg1 didEndZoomingAtScale:(double)arg2;
- (double)previewScrollView:(QLPreviewScrollView *)arg1 extraMinimumZoomForMinimumZoomScale:(double)arg2 maximumZoomScale:(double)arg3;
- (void)previewScrollViewDidScroll:(QLPreviewScrollView *)arg1;
- (void)previewScrollViewDidZoom:(QLPreviewScrollView *)arg1;
- (bool)previewScrollViewShouldResizeContentBasedOnPeripheryInsets:(QLPreviewScrollView *)arg1;
- (void)previewScrollViewWillBeginZooming:(QLPreviewScrollView *)arg1;

@end
