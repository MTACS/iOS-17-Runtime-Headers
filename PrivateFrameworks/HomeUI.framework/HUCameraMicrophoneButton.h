
@interface HUCameraMicrophoneButton : UIControl {
    UIImage * _microphoneImage;
    bool  _on;
}

@property (nonatomic, retain) UIImage *microphoneImage;
@property (getter=isOn, nonatomic) bool on;

- (void).cxx_destruct;
- (id)_circleColor;
- (void)_updateAlpha;
- (void)_updateImage;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isOn;
- (id)microphoneImage;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMicrophoneImage:(id)arg1;
- (void)setOn:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end