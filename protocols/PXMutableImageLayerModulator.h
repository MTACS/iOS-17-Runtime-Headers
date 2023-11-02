
@protocol PXMutableImageLayerModulator <NSObject>

@required

- (void)animateChangesWithDuration:(double)arg1;
- (bool)displayingOpaqueContent;
- (bool)displayingVideoComplement;
- (struct CGImage { }*)gainMapImage;
- (float)gainMapValue;
- (CALayer *)layer;
- (void)removeFilterFromUnownedLayer:(CALayer *)arg1;
- (bool)revealsGainMapImage;
- (void)setDisplayingOpaqueContent:(bool)arg1;
- (void)setDisplayingVideoComplement:(bool)arg1;
- (void)setGainMapImage:(struct CGImage { }*)arg1;
- (void)setGainMapImage:(struct CGImage { }*)arg1 animated:(bool)arg2;
- (void)setGainMapValue:(float)arg1;
- (void)setLayer:(CALayer *)arg1;
- (void)setRevealsGainMapImage:(bool)arg1;

@end
