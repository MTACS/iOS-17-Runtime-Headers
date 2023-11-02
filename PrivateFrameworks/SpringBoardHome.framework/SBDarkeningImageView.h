
@interface SBDarkeningImageView : UIImageView {
    double  _brightness;
    CAFilter * _multiplyFilter;
}

@property (nonatomic) double brightness;

- (void).cxx_destruct;
- (double)brightness;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBrightness:(double)arg1;

@end
