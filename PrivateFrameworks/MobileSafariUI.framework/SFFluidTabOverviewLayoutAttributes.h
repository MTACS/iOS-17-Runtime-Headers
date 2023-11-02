
@interface SFFluidTabOverviewLayoutAttributes : SFFluidCollectionViewLayoutAttributes {
    double  _alphaMultiplierForScroll;
}

@property (nonatomic) double alphaMultiplierForScroll;
@property (nonatomic) double blurRadius;
@property (nonatomic) double borrowedContentAlpha;
@property (nonatomic) double controlsAlpha;
@property (nonatomic) double cornerRadius;

- (double)alphaMultiplierForScroll;
- (double)blurRadius;
- (double)borrowedContentAlpha;
- (double)controlsAlpha;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setAlphaMultiplierForScroll:(double)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setBorrowedContentAlpha:(double)arg1;
- (void)setControlsAlpha:(double)arg1;
- (void)setCornerRadius:(double)arg1;

@end
