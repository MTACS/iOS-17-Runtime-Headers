
@interface SFRingView : UIView {
    double  _radius;
}

@property (nonatomic) double radius;
@property (nonatomic, readonly) CAShapeLayer *shapeLayer;

+ (Class)layerClass;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)radius;
- (void)setRadius:(double)arg1;
- (id)shapeLayer;
- (void)tintColorDidChange;

@end
