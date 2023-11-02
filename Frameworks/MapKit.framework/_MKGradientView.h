
@interface _MKGradientView : UIView {
    UIColor * _accessibilityColor;
    NSArray * _colors;
    struct CGPoint { 
        double x; 
        double y; 
    }  _endPoint;
    NSArray * _locations;
    bool  _shouldReduceTransparency;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
}

@property (nonatomic, copy) UIColor *accessibilityColor;
@property (nonatomic, copy) NSArray *colors;
@property (nonatomic) struct CGPoint { double x1; double x2; } endPoint;
@property (nonatomic, copy) NSArray *locations;
@property (nonatomic) bool shouldReduceTransparency;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPoint;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_setup;
- (void)_transparencyStatusDidChange;
- (void)_update;
- (id)accessibilityColor;
- (id)colors;
- (struct CGPoint { double x1; double x2; })endPoint;
- (id)gradientLayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)locations;
- (void)setAccessibilityColor:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLocations:(id)arg1;
- (void)setShouldReduceTransparency:(bool)arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldReduceTransparency;
- (struct CGPoint { double x1; double x2; })startPoint;

@end
