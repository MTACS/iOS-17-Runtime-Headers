
@interface MKUserTrackingButton : UIView {
    unsigned long long  _backgroundStyle;
    _MKUserTrackingButton * _button;
    unsigned long long  _controlSize;
    UIVisualEffectView * _effectView;
}

@property (nonatomic) unsigned long long backgroundStyle;
@property (getter=_controlSize, setter=_setControlSize:, nonatomic) unsigned long long controlSize;
@property (nonatomic) MKMapView *mapView;

+ (id)userTrackingButtonWithMapView:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_controlSize;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)_setControlSize:(unsigned long long)arg1;
- (void)addInteraction:(id)arg1;
- (unsigned long long)backgroundStyle;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 button:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)mapView;
- (void)removeInteraction:(id)arg1;
- (void)setBackgroundStyle:(unsigned long long)arg1;
- (void)setMapView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
