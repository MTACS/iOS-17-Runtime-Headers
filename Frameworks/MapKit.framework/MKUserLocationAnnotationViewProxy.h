
@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKRouteMatchedAnnotationPresentation, VKTrackableAnnotationPresentation> {
    MKAnnotationView * _annotationView;
}

@property (getter=isAnimatingAccuracy, nonatomic) bool animatingAccuracy;
@property (nonatomic, readonly) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } annotationTrackingEdgeInsets;
@property (nonatomic) MKAnnotationView *annotationView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } collisionSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double minimumAccuracy;
@property (nonatomic) double presentationAccuracy;
@property (nonatomic) struct { double x1; double x2; } presentationCoordinate;
@property (nonatomic) double presentationCourse;
@property (nonatomic, retain) GEORouteMatch *routeMatch;
@property (readonly) Class superclass;
@property (nonatomic) bool tracking;

- (void).cxx_destruct;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })annotationTrackingEdgeInsets;
- (id)annotationView;
- (struct CGSize { double x1; double x2; })collisionSize;
- (bool)isAnimatingAccuracy;
- (double)minimumAccuracy;
- (double)presentationAccuracy;
- (struct { double x1; double x2; })presentationCoordinate;
- (double)presentationCourse;
- (id)routeMatch;
- (void)setAnimatingAccuracy:(bool)arg1;
- (void)setAnimatingToCoordinate:(bool)arg1;
- (void)setAnnotationView:(id)arg1;
- (void)setPresentationAccuracy:(double)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setTracking:(bool)arg1;
- (bool)tracking;

@end
