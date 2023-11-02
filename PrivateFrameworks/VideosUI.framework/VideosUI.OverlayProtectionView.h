
@interface VideosUI.OverlayProtectionView : VUIBaseView {
    void $__lazy_storage_$_cornerBlurMaskLayerDelegate;
    void $__lazy_storage_$_legibilityBlurMaskLayerDelegate;
    void $__lazy_storage_$_legibilityGradientLayerDelegate;
    void cornerBlurMaskLayer;
    void cornerBlurView;
    void cornerRadius;
    void legibilityBlurMaskLayer;
    void legibilityBlurView;
    void legibilityGradientLayer;
    void protectionHeight;
}

- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
