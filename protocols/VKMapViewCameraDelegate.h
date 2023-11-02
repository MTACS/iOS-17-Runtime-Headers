
@protocol VKMapViewCameraDelegate <NSObject>

@optional

- (void)mapLayerCanEnter3DModeDidChange:(bool)arg1;
- (void)mapLayerCanZoomInDidChange:(bool)arg1;
- (void)mapLayerCanZoomOutDidChange:(bool)arg1;
- (void)mapLayerDidBecomePitched:(bool)arg1;
- (void)mapLayerDidChangeRegionAnimated:(bool)arg1;
- (void)mapLayerDidChangeVisibleRegion;
- (void)mapLayerDidFinishInitialTrackingAnimation;
- (void)mapLayerMuninAvailabilityDidChange:(long long)arg1;
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom;
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom;
- (void)mapLayerNavigationCameraHasStartedPanning;
- (void)mapLayerNavigationCameraHasStoppedPanning;
- (<VKTrackableAnnotationPresentation> *)mapLayerPresentationForAnnotation:(id <VKTrackableAnnotation>)arg1;
- (void)mapLayerWasUnableToAnimate;
- (void)mapLayerWillAnimateToLocation:(struct { double x1; double x2; })arg1;
- (void)mapLayerWillChangeRegionAnimated:(bool)arg1;
- (void)mapLayerWillPerformZoomBounceAnimation;

@end
