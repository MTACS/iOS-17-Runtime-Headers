
@interface WeatherMaps.MapScaleOverlayUIView : UIView {
    void $__lazy_storage_$_backdropLayerVibrancy;
    void $__lazy_storage_$_backgroundEffectManagerVibrancy;
    void $__lazy_storage_$_continuousScaleView;
    void $__lazy_storage_$_discreteScaleView;
    void $__lazy_storage_$_separatorView;
    void $__lazy_storage_$_titleVibrancyEffectView;
    void maximumWidth;
    void minimumWidth;
    void model;
    void padding;
    void subtitleLabel;
    void titleDividerSpacing;
    void titleHeight;
    void titleLabel;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)handleInvertColorsStatusDidChangeWithNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
