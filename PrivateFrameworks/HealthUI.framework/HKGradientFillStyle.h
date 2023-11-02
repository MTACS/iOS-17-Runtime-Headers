
@interface HKGradientFillStyle : HKFillStyle {
    UIImage * _cachedImageStorage;
    long long  _fillDirection;
    double  _fillPercentage;
    UIColor * _firstColor;
    NSLock * _gradientFillStyleLock;
    double  _gradientSize;
    UIColor * _secondColor;
}

@property (nonatomic, readonly) UIImage *cachedImageStorage;
@property (nonatomic, readonly) long long fillDirection;
@property (nonatomic, readonly) double fillPercentage;
@property (nonatomic, readonly) UIColor *firstColor;
@property (nonatomic, readonly) NSLock *gradientFillStyleLock;
@property (nonatomic, readonly) double gradientSize;
@property (nonatomic, readonly) UIColor *secondColor;

- (void).cxx_destruct;
- (bool)_needsRenderForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_renderCacheIfNecessaryForHeight:(double)arg1;
- (void)_renderCacheIfNecessaryForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_renderCacheIfNecessaryForWidth:(double)arg1;
- (void)_renderInContext:(struct CGContext { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)cachedImageStorage;
- (void)clearCache;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)fillDirection;
- (id)fillImageWithHeight:(double)arg1;
- (id)fillImageWithWidth:(double)arg1;
- (double)fillPercentage;
- (id)firstColor;
- (id)gradientFillStyleLock;
- (double)gradientSize;
- (id)initWithFirstColor:(id)arg1 secondColor:(id)arg2;
- (id)initWithFirstColor:(id)arg1 secondColor:(id)arg2 fillPercentage:(double)arg3 fillDirection:(long long)arg4 gradientSize:(double)arg5;
- (void)renderPath:(struct CGPath { }*)arg1 context:(struct CGContext { }*)arg2 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 alpha:(double)arg4;
- (id)secondColor;

@end
