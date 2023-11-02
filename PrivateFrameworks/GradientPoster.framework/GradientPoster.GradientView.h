
@interface GradientPoster.GradientView : UIView {
    void $__lazy_storage_$_gradientLayer;
    void $__lazy_storage_$_gradientLayerView;
    void animTimer;
    void currentStyle;
    void gradient;
    void rollingAnimProgress;
    void rotationAngle;
    void transitionView;
    void transitionViewEndTimestamp;
    void transitionViewRotationAngle;
    void wakeProgress;
    void wakeTimer;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
