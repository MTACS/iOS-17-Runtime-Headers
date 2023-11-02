
@interface STStorageProgressView : UIView {
    UIColor * _blueColor;
    UIColor * _grayColor;
    double  _percent;
}

@property double percent;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)percent;
- (void)setPercent:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateColors;

@end
