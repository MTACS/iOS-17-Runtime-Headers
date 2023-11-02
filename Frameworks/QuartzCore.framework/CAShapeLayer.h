
@interface CAShapeLayer : CALayer

@property struct CGColor { }*fillColor;
@property (copy) NSString *fillRule;
@property (copy) NSString *lineCap;
@property (copy) NSArray *lineDashPattern;
@property double lineDashPhase;
@property (copy) NSString *lineJoin;
@property double lineWidth;
@property double miterLimit;
@property struct CGPath { }*path;
@property struct CGColor { }*strokeColor;
@property double strokeEnd;
@property double strokeStart;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;

- (void)_colorSpaceDidChange;
- (void*)_copyRenderLayer:(void*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (struct CGColor { }*)fillColor;
- (id)fillRule;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (id)lineCap;
- (id)lineDashPattern;
- (double)lineDashPhase;
- (id)lineJoin;
- (double)lineWidth;
- (double)miterLimit;
- (struct CGPath { }*)path;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setFillRule:(id)arg1;
- (void)setLineCap:(id)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineDashPhase:(double)arg1;
- (void)setLineJoin:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (void)setStrokeEnd:(double)arg1;
- (void)setStrokeStart:(double)arg1;
- (struct CGColor { }*)strokeColor;
- (double)strokeEnd;
- (double)strokeStart;

// Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial

- (void)mt_applyVisualStying:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)horizontalLineLayerWithLength:(double)arg1 lineWidth:(double)arg2;
+ (id)verticalLineLayerWithLength:(double)arg1 lineWidth:(double)arg2;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (Class)tsd_renderableClass;

- (void)setCGLineCap:(int)arg1;
- (void)setCGLineJoin:(int)arg1;

@end
