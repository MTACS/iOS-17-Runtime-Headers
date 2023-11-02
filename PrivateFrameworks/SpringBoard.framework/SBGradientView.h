
@interface SBGradientView : UIView {
    NSArray * _colors;
}

@property (nonatomic, copy) NSArray *colors;
@property struct CGPoint { double x1; double x2; } endPoint;
@property (nonatomic, copy) NSArray *locations;
@property struct CGPoint { double x1; double x2; } startPoint;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)color;
- (id)colors;
- (struct CGPoint { double x1; double x2; })endPoint;
- (id)locations;
- (void)setColors:(id)arg1;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLocations:(id)arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })startPoint;

@end
