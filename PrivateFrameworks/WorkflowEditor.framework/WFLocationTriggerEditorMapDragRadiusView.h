
@interface WFLocationTriggerEditorMapDragRadiusView : UIView {
    <MKAnnotation> * _annotation;
    <WFLocationTriggerEditorMapDragRadiusViewDelegate> * _delegate;
    UIView * _handleEndpointView;
    bool  _isDragging;
    bool  _isMaximum;
    bool  _isMinimum;
    MKMapView * _mapView;
    NSMeasurementFormatter * _measurmentFormatter;
    <MKOverlay> * _overlay;
    unsigned long long  _proximity;
    CAShapeLayer * _shapeLayer;
}

@property (nonatomic, retain) <MKAnnotation> *annotation;
@property (nonatomic) <WFLocationTriggerEditorMapDragRadiusViewDelegate> *delegate;
@property (nonatomic, retain) UIView *handleEndpointView;
@property (nonatomic) bool isDragging;
@property (nonatomic) bool isMaximum;
@property (nonatomic) bool isMinimum;
@property (nonatomic, retain) MKMapView *mapView;
@property (nonatomic, retain) NSMeasurementFormatter *measurmentFormatter;
@property (nonatomic, retain) <MKOverlay> *overlay;
@property (nonatomic) unsigned long long proximity;
@property (nonatomic, retain) CAShapeLayer *shapeLayer;

- (void).cxx_destruct;
- (void)addHandleForAnnotation:(id)arg1 withOverlay:(id)arg2;
- (void)animateHandleIn:(bool)arg1;
- (id)annotation;
- (id)bezierPathWithEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })center;
- (double)currentHandleDistance;
- (double)currentHandleDistanceNormalized;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)feetToMeters:(double)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)handleEndpointView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDragging;
- (bool)isMaximum;
- (bool)isMinimum;
- (id)mapView;
- (struct CGPoint { double x1; double x2; })maxPoint;
- (double)maximumRadiusNormalized;
- (id)measurmentFormatter;
- (struct CGPoint { double x1; double x2; })minPoint;
- (double)minimumInMeters;
- (double)minimumRadiusNormalized;
- (id)overlay;
- (void)popAnimateHandle;
- (unsigned long long)proximity;
- (void)removeHandle:(bool)arg1;
- (void)resizeCircleAfterDelay;
- (void)setAnnotation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHandleEndpointView:(id)arg1;
- (void)setIsDragging:(bool)arg1;
- (void)setIsMaximum:(bool)arg1;
- (void)setIsMinimum:(bool)arg1;
- (void)setMapView:(id)arg1;
- (void)setMeasurmentFormatter:(id)arg1;
- (void)setOverlay:(id)arg1;
- (void)setProximity:(unsigned long long)arg1;
- (void)setShapeLayer:(id)arg1;
- (id)shapeLayer;
- (id)shapeLayerWithEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (bool)usesMetric;

@end
