
@interface EmojiPoster.GradientColorSlider : UIView {
    void delegate;
    void gradientLayer;
    void leftColor;
    void leftColorOffset;
    void leftColorPanGesture;
    void leftColorTapGesture;
    void leftColorView;
    void rightColor;
    void rightColorOffset;
    void rightColorPanGesture;
    void rightColorTapGesture;
    void rightColorView;
    void startLeftColorOffset;
    void startRightColorOffset;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)leftColorDidPanWithGr:(id)arg1;
- (void)leftColorWasTappedWithGr:(id)arg1;
- (void)rightColorDidPanWithGr:(id)arg1;
- (void)rightColorWasTappedWithGr:(id)arg1;

@end
