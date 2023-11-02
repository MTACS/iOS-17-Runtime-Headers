
@interface TUSegmentedColorView : UIView {
    void direction;
    void endColor;
    void numberOfSegments;
    void startColor;
}

@property (nonatomic) long long direction;
@property (nonatomic, retain) UIColor *endColor;
@property (nonatomic) long long numberOfSegments;
@property (nonatomic, retain) UIColor *startColor;

- (void).cxx_destruct;
- (long long)direction;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)endColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)numberOfSegments;
- (void)setDirection:(long long)arg1;
- (void)setEndColor:(id)arg1;
- (void)setNumberOfSegments:(long long)arg1;
- (void)setStartColor:(id)arg1;
- (id)startColor;

@end
