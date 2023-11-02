
@interface MFComposeTextColorButton : UIButton {
    UIColor * _color;
    UIView * _colorRingView;
    UIView * _colorView;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UIView *colorRingView;
@property (nonatomic, retain) UIView *colorView;

+ (id)buttonWithColor:(id)arg1;

- (void).cxx_destruct;
- (id)color;
- (id)colorRingView;
- (id)colorView;
- (void)layoutSubviews;
- (void)setColor:(id)arg1;
- (void)setColorRingView:(id)arg1;
- (void)setColorView:(id)arg1;

@end
