
@protocol VKTrackableAnnotationPresentation <NSObject>

@required

- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })annotationTrackingEdgeInsets;
- (bool)isAnimatingAccuracy;
- (double)minimumAccuracy;
- (double)presentationAccuracy;
- (struct { double x1; double x2; })presentationCoordinate;
- (void)setAnimatingAccuracy:(bool)arg1;
- (void)setPresentationAccuracy:(double)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setTracking:(bool)arg1;
- (bool)tracking;

@end
