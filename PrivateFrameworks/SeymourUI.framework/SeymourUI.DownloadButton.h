
@interface SeymourUI.DownloadButton : UIControl {
    void alphaAnimator;
    void backgroundLayer;
    void configuration;
    void configurationFactory;
    void contentLayer;
    void contentView;
    void contentWidthConstraint;
    void currentState;
    void delegate;
    void fromWidth;
    void iconLayer;
    void propertyAnimator;
    void toWidth;
}

@property (nonatomic, readonly) long long accessibilityState;
@property (nonatomic) bool highlighted;

- (void).cxx_destruct;
- (long long)accessibilityState;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end
