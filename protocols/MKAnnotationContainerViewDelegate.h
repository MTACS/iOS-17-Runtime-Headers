
@protocol MKAnnotationContainerViewDelegate <NSObject>

@required

- (void)annotationContainer:(MKAnnotationContainerView *)arg1 annotationView:(MKAnnotationView *)arg2 calloutAccessoryControlTapped:(UIControl *)arg3;
- (void)annotationContainer:(MKAnnotationContainerView *)arg1 calloutPrimaryActionTriggeredForAnnotationView:(MKAnnotationView *)arg2;
- (bool)annotationContainer:(MKAnnotationContainerView *)arg1 isAnnotationView:(MKAnnotationView *)arg2 validForDisplayAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (double)annotationContainer:(MKAnnotationContainerView *)arg1 pinDropDistanceForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 maxDistance:(double*)arg3;
- (MKAnnotationView *)annotationContainer:(MKAnnotationContainerView *)arg1 requestAddingClusterForAnnotationViews:(NSArray *)arg2;
- (void)annotationContainer:(MKAnnotationContainerView *)arg1 requestRemovingClusterAnnotationView:(MKAnnotationView *)arg2 updateVisible:(bool)arg3;
- (void)annotationContainer:(void *)arg1 scrollToRevealCalloutWithOffset:(void *)arg2 annotationCoordinate:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: MKAnnotationContainerView *, struct CGPoint { double x1; double x2; }, struct CLLocationCoordinate2D { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)annotationContainerDidAnimateBubble:(MKAnnotationContainerView *)arg1;
- (void)annotationContainerDidDropPins:(MKAnnotationContainerView *)arg1;
- (bool)annotationContainerIsRotated:(MKAnnotationContainerView *)arg1;
- (bool)annotationContainerShouldAlignToPixels:(MKAnnotationContainerView *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })annotationContainerVisibleRect:(MKAnnotationContainerView *)arg1;
- (void)annotationContainerWillAnimateBubble:(MKAnnotationContainerView *)arg1;
- (void)annotationContainerWillDropPins:(MKAnnotationContainerView *)arg1;
- (void)calloutDidAppearForAnnotationView:(MKAnnotationView *)arg1 inContainer:(MKAnnotationContainerView *)arg2;
- (struct CGPoint { double x1; double x2; })convertCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 toPointToView:(UIView *)arg2;
- (struct CLLocationCoordinate2D { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateFromView:(UIView *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleCenteringRectInView:(UIView *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectInView:(UIView *)arg1;

@optional

- (void)annotationContainerDidFinishMapsTransitionExpanding:(MKAnnotationContainerView *)arg1;

@end
