
@interface NAWeakZoomable : NSObject <NAZoomable> {
    void zoomable;
}

- (void).cxx_destruct;
- (bool)canDecreaseTextSize;
- (bool)canIncreaseTextSize;
- (bool)canResetZoom;
- (bool)canZoomIn;
- (bool)canZoomOut;
- (void)decreaseTextSize;
- (void)increaseTextSize;
- (id)init;
- (id)initWithZoomable:(id)arg1;
- (void)resetZoom;
- (void)zoomIn;
- (void)zoomOut;

@end
