
@interface HKRouteMapGenerator : NSObject {
    UIColor * _endPointColor;
    HKLocationReadings * _locationReadings;
    MKMapSnapshotter * _runningSnapshotter;
    UIColor * _startPointColor;
    bool  _useMarkerAnnotations;
    bool  _useRelativeColorForSpeed;
}

@property (nonatomic, retain) UIColor *endPointColor;
@property (nonatomic, retain) HKLocationReadings *locationReadings;
@property (nonatomic, retain) MKMapSnapshotter *runningSnapshotter;
@property (nonatomic, retain) UIColor *startPointColor;
@property (nonatomic) bool useMarkerAnnotations;
@property (nonatomic) bool useRelativeColorForSpeed;

- (void).cxx_destruct;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_adjustRectForPolyline:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_adjustedMapRectForPolyline:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_adjustedMapRectForPolyline:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 offsets:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)_annotationViewWithIsStartPoint:(bool)arg1;
- (void)_drawLineFromPointA:(struct CGPoint { double x1; double x2; })arg1 toPointB:(struct CGPoint { double x1; double x2; })arg2 atSpeed:(double)arg3 context:(struct CGContext { }*)arg4 drawDashes:(bool)arg5 lineWidth:(double)arg6;
- (id)_imageWithPolyline:(id)arg1 lineWidth:(double)arg2 mapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg3 onSnapshot:(id)arg4;
- (void)_overlayAnnotationView:(id)arg1 point:(struct { double x1; double x2; })arg2 onSnapshot:(id)arg3 context:(struct CGContext { }*)arg4;
- (void)drawLinesWithPolyline:(id)arg1 lineWidth:(double)arg2 mapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(struct CGContext { }*)arg4 pointFromMapPoint:(id /* block */)arg5;
- (id)endPointColor;
- (id)init;
- (id)locationReadings;
- (id)relativeColorForSpeed:(double)arg1;
- (id)runningSnapshotter;
- (void)setEndPointColor:(id)arg1;
- (void)setLocationReadings:(id)arg1;
- (void)setRunningSnapshotter:(id)arg1;
- (void)setStartPointColor:(id)arg1;
- (void)setUseMarkerAnnotations:(bool)arg1;
- (void)setUseRelativeColorForSpeed:(bool)arg1;
- (void)snapshotWithSize:(struct CGSize { double x1; double x2; })arg1 lineWidth:(double)arg2 traitCollection:(id)arg3 completion:(id /* block */)arg4;
- (void)snapshotWithSize:(struct CGSize { double x1; double x2; })arg1 lineWidth:(double)arg2 traitCollection:(id)arg3 offsets:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 completion:(id /* block */)arg5;
- (id)startPointColor;
- (bool)useMarkerAnnotations;
- (bool)useRelativeColorForSpeed;

@end
