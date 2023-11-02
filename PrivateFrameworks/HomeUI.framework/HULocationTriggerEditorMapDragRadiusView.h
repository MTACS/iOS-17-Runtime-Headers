
@interface HULocationTriggerEditorMapDragRadiusView : UIView <MKMapViewDelegate> {
    void delegate;
    void mapView;
    void normalizedSliderValue;
    void proximity;
    void radiusInMeters;
    void radiusLabel;
    void radiusSlider;
}

@property (nonatomic) <HULocationTriggerEditorMapDragRadiusViewDelegate> *delegate;
@property (nonatomic) MKMapView *mapView;
@property (nonatomic) unsigned long long proximity;

- (void).cxx_destruct;
- (id)delegate;
- (void)dragHandleDidMove:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 radiusInMeters:(double)arg2 delegate:(id)arg3;
- (id)mapView;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (unsigned long long)proximity;
- (void)setDelegate:(id)arg1;
- (void)setMapView:(id)arg1;
- (void)setProximity:(unsigned long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
