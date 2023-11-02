
@interface VKNavigationPuck : NSObject <VKTrackableAnnotationPresentation> {
    bool  _animatingAccuracy;
    bool  _animatingToCoordinate;
    struct AnimationRunner { struct MapEngine {} *x1; } * _animationRunner;
    <VKAnnotation> * _annotation;
    void * _navigationPuck;
    double  _presentationAccuracy;
    VKTimedAnimation * _puckStyleAnimation;
    bool  _stale;
    bool  _tracking;
}

@property (getter=isAnimatingAccuracy, nonatomic) bool animatingAccuracy;
@property (nonatomic) bool animatingToCoordinate;
@property (nonatomic, retain) <VKAnnotation> *annotation;
@property (nonatomic, readonly) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } annotationTrackingEdgeInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double minimumAccuracy;
@property (nonatomic) int mode;
@property (nonatomic) double presentationAccuracy;
@property (nonatomic) struct { double x1; double x2; } presentationCoordinate;
@property (nonatomic) double presentationCourse;
@property (nonatomic) float scale;
@property (nonatomic) bool showCourse;
@property (nonatomic) bool stale;
@property (readonly) Class superclass;
@property (nonatomic) bool tracking;

- (void).cxx_destruct;
- (bool)animatingToCoordinate;
- (id)annotation;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })annotationTrackingEdgeInsets;
- (void)dealloc;
- (void)destroyAnimationRunner;
- (bool)enabled;
- (id)initWithAnimationRunner:(struct AnimationRunner { struct MapEngine {} *x1; }*)arg1;
- (bool)isAnimatingAccuracy;
- (double)minimumAccuracy;
- (int)mode;
- (double)presentationAccuracy;
- (struct { double x1; double x2; })presentationCoordinate;
- (double)presentationCourse;
- (void*)puck;
- (void)runAnimation:(id)arg1;
- (float)scale;
- (void)setAnimatingAccuracy:(bool)arg1;
- (void)setAnimatingToCoordinate:(bool)arg1;
- (void)setAnnotation:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMode:(int)arg1;
- (void)setPresentationAccuracy:(double)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setScale:(float)arg1;
- (void)setShowCourse:(bool)arg1;
- (void)setStale:(bool)arg1;
- (void)setTracking:(bool)arg1;
- (bool)showCourse;
- (bool)stale;
- (bool)tracking;

@end
