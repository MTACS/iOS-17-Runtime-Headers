
@interface MKPitchButton : UIView {
    unsigned long long  _backgroundStyle;
    UIButton * _button;
    unsigned long long  _controlSize;
    UIVisualEffectView * _effectView;
    MKMapView * _mapView;
    long long  _visibility;
}

@property (getter=_backgroundStyle, setter=_setBackgroundStyle:, nonatomic) unsigned long long backgroundStyle;
@property (getter=_controlSize, setter=_setControlSize:, nonatomic) unsigned long long controlSize;
@property (nonatomic) MKMapView *mapView;
@property (nonatomic) long long visibility;

+ (id)pitchButtonWithMapView:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_backgroundStyle;
- (unsigned long long)_controlSize;
- (void)_performPitchAction:(id)arg1;
- (void)_setBackgroundStyle:(unsigned long long)arg1;
- (void)_setControlSize:(unsigned long long)arg1;
- (void)_updateButtonState;
- (void)_updateControlSize;
- (void)addInteraction:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMapView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)mapView;
- (void)removeInteraction:(id)arg1;
- (void)setMapView:(id)arg1;
- (void)setVisibility:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)visibility;

@end
