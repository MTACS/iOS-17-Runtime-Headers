
@interface EDGridView : UIView {
    long long  _cellCount;
    UIColor * _strokeColor;
}

@property (nonatomic, retain) UIColor *strokeColor;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithWithCellCount:(long long)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;

@end
