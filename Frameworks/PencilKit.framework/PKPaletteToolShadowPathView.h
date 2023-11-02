
@interface PKPaletteToolShadowPathView : UIView <PKPaletteEdgeLocating, PKPaletteViewSizeScaling> {
    unsigned long long  _edgeLocation;
    UIView * _largeShadow;
    double  _scalingFactor;
    UIView * _smallShadow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic) double scalingFactor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateUI;
- (unsigned long long)edgeLocation;
- (id)initWithToolConfiguration:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)scalingFactor;
- (void)setEdgeLocation:(unsigned long long)arg1;
- (void)setScalingFactor:(double)arg1;

@end
