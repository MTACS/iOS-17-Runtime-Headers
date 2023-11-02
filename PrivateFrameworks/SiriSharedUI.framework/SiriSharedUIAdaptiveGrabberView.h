
@interface SiriSharedUIAdaptiveGrabberView : UIControl {
    long long  _style;
}

@property (nonatomic) long long style;

+ (Class)layerClass;

- (void)_commonInit;
- (struct CGPath { }*)_pathForStyle:(long long)arg1;
- (void)_setupWithStyle:(long long)arg1 animated:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setStyle:(long long)arg1;
- (void)setStyle:(long long)arg1 animated:(bool)arg2;
- (id)shapeLayer;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;

@end
