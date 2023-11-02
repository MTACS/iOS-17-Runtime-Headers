
@interface SeymourUI.PlaybackControl : UIControl {
    void imageView;
    void imageViewWidthConstraint;
    void layout;
    void style;
    void transitionView;
    void type;
    void width;
    void widthConstraint;
}

@property (nonatomic) bool enabled;
@property (nonatomic) bool highlighted;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isEnabled;
- (bool)isHighlighted;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;

@end
