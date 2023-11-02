
@interface ASCBorderView : UIView {
    UIColor * _color;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSString *cornerCurve;
@property (nonatomic) unsigned long long cornerMask;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (id)color;
- (id)cornerCurve;
- (unsigned long long)cornerMask;
- (double)cornerRadius;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColor:(id)arg1;
- (void)setCornerCurve:(id)arg1;
- (void)setCornerMask:(unsigned long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setWidth:(double)arg1;
- (void)updateBorderColor;
- (double)width;

@end
