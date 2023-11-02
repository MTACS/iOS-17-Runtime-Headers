
@interface WeatherMaps.HintView : UIView {
    void backgroundEffectView;
    void borderLayer;
    void configuration;
    void contentView;
    void dismissIcon;
    void icon;
    void iconSpacerWidth;
    void image;
    void label;
    void maskLayer;
    void maxContentWidth;
    void onDismissHandler;
    void subtitle;
    void subtitleLabel;
    void title;
    void titleSpacerHeight;
}

- (void).cxx_destruct;
- (void)dismissTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
