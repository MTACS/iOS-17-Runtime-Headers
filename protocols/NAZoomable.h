
@protocol NAZoomable

@required

- (bool)canDecreaseTextSize;
- (bool)canIncreaseTextSize;
- (bool)canResetZoom;
- (bool)canZoomIn;
- (bool)canZoomOut;
- (void)decreaseTextSize;
- (void)increaseTextSize;
- (void)resetZoom;
- (void)zoomIn;
- (void)zoomOut;

@end
