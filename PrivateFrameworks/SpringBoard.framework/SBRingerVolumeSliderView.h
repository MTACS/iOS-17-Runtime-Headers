
@interface SBRingerVolumeSliderView : UIView {
    UIView * _backgroundView;
    UIView * _fillView;
    long long  _layoutAxis;
    bool  _roundedStyle;
    unsigned long long  _style;
    double  _value;
    UIViewFloatAnimatableProperty * _valueSpring;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIView *fillView;
@property (nonatomic) long long layoutAxis;
@property (getter=isRoundedStyle, nonatomic) bool roundedStyle;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double value;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *valueSpring;

- (void).cxx_destruct;
- (id)backgroundView;
- (void)dealloc;
- (id)fillView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRoundedStyle;
- (long long)layoutAxis;
- (void)layoutSubviews;
- (void)setBackgroundView:(id)arg1;
- (void)setFillView:(id)arg1;
- (void)setLayoutAxis:(long long)arg1;
- (void)setRoundedStyle:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setValue:(double)arg1;
- (void)setValue:(double)arg1 animated:(bool)arg2;
- (void)setValueSpring:(id)arg1;
- (unsigned long long)style;
- (double)value;
- (id)valueSpring;

@end
