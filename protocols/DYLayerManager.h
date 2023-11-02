
@protocol DYLayerManager <NSObject>

@required

- (void)applyLayersVisibility;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForCurrentInterfaceOrientation;
- (CALayer *)createLayerWithID:(unsigned long long)arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentsScale:(double)arg3 properties:(NSDictionary *)arg4 isCoreAnimationSurface:(bool)arg5;
- (CALayer *)currentTopLayer;
- (double)defaultContentsScale;
- (void)deleteLayer:(unsigned long long)arg1;
- (CALayer *)layerForID:(unsigned long long)arg1;
- (void)prepareLayerForPresent:(CALayer *)arg1;
- (void)resetLayersVisibility;
- (void)setAnchorPoint:(const struct Argument { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned short x6; }*)arg1 forLayerID:(unsigned long long)arg2;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setPosition:(const struct Argument { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned short x6; }*)arg1 forLayerID:(unsigned long long)arg2;
- (void)setTransform:(const struct Argument { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned short x6; }*)arg1 forLayerID:(unsigned long long)arg2 withScreenToLayerScale:(const void*)arg3;
- (void)updateLayer:(CALayer *)arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentsScale:(double)arg3 properties:(NSDictionary *)arg4;

@end
