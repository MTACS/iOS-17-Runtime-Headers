
@protocol VKMapViewDelegate <NSObject>

@optional

- (void)mapLayer:(VKMapView *)arg1 activeARWalkingFeatureDidUpdate:(VKARWalkingFeatureDidUpdateInfo *)arg2;
- (void)mapLayer:(VKMapView *)arg1 arSessionWasInterrupted:(unsigned long long)arg2;
- (void)mapLayer:(VKMapView *)arg1 arTrackingStateDidChange:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)mapLayer:(VKMapView *)arg1 arWalkingElevationRequestFailure:(VKARWalkingElevationRequestFailureInfo *)arg2;
- (void)mapLayer:(VKMapView *)arg1 arWalkingFeatureSetStateDidUpdate:(VKARWalkingFeatureSet *)arg2;
- (void)mapLayer:(VKMapView *)arg1 canShowFlyoverDidChange:(bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 didEncounterARError:(NSError *)arg2;
- (void)mapLayer:(VKMapView *)arg1 didFinishChangingMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg2;
- (void)mapLayer:(VKMapView *)arg1 didStopFlyoverTourCompleted:(bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 didUpdateVerticalYawTo:(double)arg2;
- (void)mapLayer:(VKMapView *)arg1 flyoverModeDidChange:(int)arg2;
- (void)mapLayer:(VKMapView *)arg1 flyoverModeWillChange:(int)arg2;
- (void)mapLayer:(VKMapView *)arg1 flyoverTourLabelDidChange:(NSString *)arg2;
- (void)mapLayer:(VKMapView *)arg1 labelMarkerDidChangeState:(VKLabelMarker *)arg2;
- (void)mapLayer:(VKMapView *)arg1 locationInHikingToolTipRegion:(unsigned long long)arg2;
- (void)mapLayer:(VKMapView *)arg1 nearestJunctionDidChange:(VKMuninJunction *)arg2 currentRoad:(VKMuninRoad *)arg3;
- (void)mapLayer:(VKMapView *)arg1 puckLocationTracingEvent:(VKNavigationPuckLocationTracingEvent *)arg2;
- (void)mapLayer:(VKMapView *)arg1 selectedLabelMarkerDidChangeState:(VKLabelMarker *)arg2;
- (void)mapLayer:(VKMapView *)arg1 selectedLabelMarkerWillDisappear:(VKLabelMarker *)arg2;
- (void)mapLayer:(VKMapView *)arg1 showingFlyoverDidChange:(bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 venueWithFocusDidChange:(VKVenueFeatureMarker *)arg2 building:(VKVenueBuildingFeatureMarker *)arg3;
- (void)mapLayer:(VKMapView *)arg1 willTransitionTo:(long long)arg2;
- (void)mapLayerARSessionInterruptionEnded:(VKMapView *)arg1;
- (void)mapLayerDidChangeSceneState:(VKMapView *)arg1 withState:(unsigned long long)arg2;
- (void)mapLayerDidDraw:(VKMapView *)arg1;
- (void)mapLayerDidEnterAR:(VKMapView *)arg1;
- (void)mapLayerDidExitAR:(VKMapView *)arg1;
- (void)mapLayerDidFailLoadingTiles:(VKMapView *)arg1 withError:(NSError *)arg2;
- (void)mapLayerDidFinishLoadingTiles:(VKMapView *)arg1;
- (void)mapLayerDidReloadStylesheet:(VKMapView *)arg1;
- (void)mapLayerDidStartLoadingTiles:(VKMapView *)arg1;
- (void)mapLayerLabelsDidLayout:(VKMapView *)arg1;
- (void)mapLayerWillEnterAR:(VKMapView *)arg1;
- (void)mapLayerWillExitAR:(VKMapView *)arg1;
- (void)mapLayerWillStartFlyoverTour:(VKMapView *)arg1;

@end
