
@protocol JUPlaceable <NSObject>

@required

- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measureToFit:(struct CGSize { double x1; double x2; })arg1 withTraitCollection:(UITraitCollection *)arg2;
- (void)placeAtRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTraitCollection:(UITraitCollection *)arg2;

@end
