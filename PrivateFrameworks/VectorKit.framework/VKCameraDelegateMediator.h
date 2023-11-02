
@interface VKCameraDelegateMediator : NSObject <VKMapViewCameraDelegate> {
    <VKMapViewCameraDelegate> * _cameraDelegate;
    bool  _isChangingMapType;
    unsigned long long  _regionChangeCount;
}

@property (nonatomic) <VKMapViewCameraDelegate> *cameraDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isChangingMapType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cameraDelegate;
- (id)init;
- (bool)isChangingMapType;
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
- (id)mapLayerPresentationForAnnotation:(id)arg1;
- (void)mapLayerWasUnableToAnimate;
- (void)mapLayerWillAnimateToLocation:(struct { double x1; double x2; })arg1;
- (void)mapLayerWillChangeRegionAnimated:(bool)arg1;
- (void)mapLayerWillPerformZoomBounceAnimation;
- (void)setCameraDelegate:(id)arg1;
- (void)setIsChangingMapType:(bool)arg1;

@end
