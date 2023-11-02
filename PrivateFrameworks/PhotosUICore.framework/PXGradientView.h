
@interface PXGradientView : UIView {
    NSArray * _colors;
}

@property (nonatomic, copy) NSArray *colors;
@property (nonatomic) struct CGPoint { double x1; double x2; } endPoint;
@property (nonatomic, readonly) CAGradientLayer *gradientLayer;
@property (nonatomic, copy) NSArray *locations;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPoint;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_updateGradientLayerColors;
- (id)colors;
- (struct CGPoint { double x1; double x2; })endPoint;
- (id)gradientLayer;
- (id)locations;
- (void)setColors:(id)arg1;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLocations:(id)arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })startPoint;
- (void)traitCollectionDidChange:(id)arg1;

@end
