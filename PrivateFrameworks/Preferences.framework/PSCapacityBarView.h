
@interface PSCapacityBarView : UIView {
    UIColor * _barBackgroundColor;
    PSCapacityBarData * _barData;
    UIColor * _barOtherDataColor;
    UIColor * _barSeparatorColor;
}

@property (nonatomic, retain) UIColor *barBackgroundColor;
@property (nonatomic, retain) PSCapacityBarData *barData;
@property (nonatomic, retain) UIColor *barOtherDataColor;
@property (nonatomic, retain) UIColor *barSeparatorColor;

- (void).cxx_destruct;
- (id)barBackgroundColor;
- (id)barData;
- (id)barOtherDataColor;
- (id)barSeparatorColor;
- (id)bezierPathWithLineFrom:(struct CGPoint { double x1; double x2; })arg1 to:(struct CGPoint { double x1; double x2; })arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBarBackgroundColor:(id)arg1;
- (void)setBarData:(id)arg1;
- (void)setBarOtherDataColor:(id)arg1;
- (void)setBarSeparatorColor:(id)arg1;

@end