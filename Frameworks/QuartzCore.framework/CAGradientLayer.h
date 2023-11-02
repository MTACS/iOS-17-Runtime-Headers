
@interface CAGradientLayer : CALayer

@property (retain) id colorMap;
@property struct CGColorSpace { }*colorSpace;
@property (copy) NSArray *colors;
@property struct CGPoint { double x1; double x2; } endPoint;
@property (copy) NSArray *interpolations;
@property (copy) NSArray *locations;
@property double noiseScale;
@property bool premultiplied;
@property struct CGPoint { double x1; double x2; } startPoint;
@property (copy) NSString *type;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;

- (bool)CA_validateValue:(id)arg1 forKey:(id)arg2;
- (void)_colorSpaceDidChange;
- (void*)_copyRenderLayer:(void*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (void)_renderBackgroundInContext:(struct CGContext { }*)arg1;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (id)colorMap;
- (struct CGColorSpace { }*)colorSpace;
- (id)colors;
- (void)didChangeValueForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })endPoint;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (id)interpolations;
- (id)locations;
- (double)noiseScale;
- (bool)premultiplied;
- (void)setColorMap:(id)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setColors:(id)arg1;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInterpolations:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)setNoiseScale:(double)arg1;
- (void)setPremultiplied:(bool)arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setType:(id)arg1;
- (struct CGPoint { double x1; double x2; })startPoint;
- (id)type;

// Image: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices

+ (id)cps_grayscaleConicGradientLayer;

@end
