
@interface MKCompassButton : UIView {
    long long  _compassSize;
    UIView<MKCompassView> * _compassView;
    long long  _compassVisibility;
    MKMapView * _mapView;
    bool  _visible;
}

@property (nonatomic) long long compassSize;
@property (nonatomic) long long compassVisibility;
@property (nonatomic) MKMapView *mapView;

+ (id)compassButtonWithMapView:(id)arg1;

- (void).cxx_destruct;
- (void)_updateVisibility;
- (void)addInteraction:(id)arg1;
- (long long)compassSize;
- (long long)compassVisibility;
- (void)dealloc;
- (void)didTapCompassGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mapView:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)mapView;
- (void)mapViewDidUpdateYawNotification:(id)arg1;
- (void)removeInteraction:(id)arg1;
- (void)setCompassSize:(long long)arg1;
- (void)setCompassVisibility:(long long)arg1;
- (void)setMapView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
