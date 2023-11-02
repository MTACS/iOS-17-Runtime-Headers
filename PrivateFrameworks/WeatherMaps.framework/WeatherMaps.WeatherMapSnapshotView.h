
@interface WeatherMaps.WeatherMapSnapshotView : UIView {
    void $__lazy_storage_$_borderLayer;
    void $__lazy_storage_$_showDebugConsole;
    void $__lazy_storage_$_snapshotDisplayView;
    void annotationView;
    void annotationViewFractionalCenter;
    void annotationViewModelFactory;
    void cornerRadius;
    void debugLabel;
    void delegate;
    void errorEffectView;
    void errorLabel;
    void errorLabelEffect;
    void errorPlatterView;
    void isTransitioningToSnapshotView;
    void loadingIndicator;
    void mapLocationAccessibilityModelManager;
    void needsBuild;
    void overlaySonifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  status;
}

- (void).cxx_destruct;
- (void)darkerSystemColorsStatusDidChange:(id)arg1;
- (void)didTransitionToSnapshotMap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)willTransitionToSnapshotMap:(id)arg1;

@end
