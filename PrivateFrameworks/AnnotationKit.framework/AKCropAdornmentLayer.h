
@interface AKCropAdornmentLayer : AKAdornmentLayer {
    CAShapeLayer * _handlesLayer;
}

@property (retain) CAShapeLayer *handlesLayer;

- (void).cxx_destruct;
- (void)_addHandles;
- (void)_removeHandles;
- (bool)_shouldShowHandles;
- (void)_updateHandles;
- (id)handlesLayer;
- (bool)needsUpdateWhenDraggingStartsOrEnds;
- (void)setHandlesLayer:(id)arg1;
- (void)updateAdornmentElements;
- (void)updateSublayersWithScale:(double)arg1;

@end
