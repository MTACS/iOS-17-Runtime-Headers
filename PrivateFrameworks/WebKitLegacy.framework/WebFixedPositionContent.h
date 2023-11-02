
@interface WebFixedPositionContent : NSObject {
    void * _private;
}

- (void)dealloc;
- (void)didFinishScrollingOrZooming;
- (bool)hasFixedOrStickyPositionLayers;
- (id)initWithWebView:(id)arg1;
- (void)overflowScrollPositionForLayer:(id)arg1 changedTo:(struct CGPoint { double x1; double x2; })arg2;
- (void)scrollOrZoomChanged:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewportConstrainedLayers:(void*)arg1 stickyContainerMap:(const void*)arg2;

@end
