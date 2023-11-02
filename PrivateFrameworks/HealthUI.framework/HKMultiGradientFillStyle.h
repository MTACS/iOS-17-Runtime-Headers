
@interface HKMultiGradientFillStyle : HKFillStyle {
    UIImage * _cachedImageStorage;
    NSArray * _colors;
    NSLock * _multiGradientFillStyleLock;
}

@property (nonatomic, readonly) UIImage *cachedImageStorage;
@property (nonatomic, readonly) NSArray *colors;
@property (nonatomic, readonly) NSLock *multiGradientFillStyleLock;

- (void).cxx_destruct;
- (bool)_needsRenderForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_renderCacheIfNecessaryForHeight:(double)arg1;
- (void)_renderCacheIfNecessaryForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_renderCacheIfNecessaryForWidth:(double)arg1;
- (void)_renderInContext:(struct CGContext { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)cachedImageStorage;
- (void)clearCache;
- (id)colors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fillImageWithHeight:(double)arg1;
- (id)fillImageWithWidth:(double)arg1;
- (id)initWithColors:(id)arg1;
- (id)multiGradientFillStyleLock;
- (void)renderPath:(struct CGPath { }*)arg1 context:(struct CGContext { }*)arg2 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 alpha:(double)arg4;

@end
