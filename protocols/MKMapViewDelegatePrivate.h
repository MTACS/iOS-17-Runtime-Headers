
@protocol MKMapViewDelegatePrivate <MKMapViewDelegate>

@optional

- (void)_mapView:(MKMapView *)arg1 calloutDidAppearForAnnotationView:(MKAnnotationView *)arg2;
- (void)_mapView:(MKMapView *)arg1 willDeselectAnnotationView:(MKAnnotationView *)arg2;
- (void)_mapView:(MKMapView *)arg1 willDeselectLabelMarker:(VKLabelMarker *)arg2;
- (bool)_mapViewCanChangeUserTrackingModeWhenRegionDidChange:(MKMapView *)arg1;
- (void)mapView:(MKMapView *)arg1 arSessionWasInterrupted:(unsigned long long)arg2;
- (void)mapView:(MKMapView *)arg1 arTrackingStateDidChange:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)mapView:(MKMapView *)arg1 calloutPrimaryActionTriggeredForAnnotationView:(MKAnnotationView *)arg2;
- (void)mapView:(MKMapView *)arg1 calloutPrimaryActionTriggeredForLabelMarker:(VKLabelMarker *)arg2;
- (void)mapView:(MKMapView *)arg1 canEnter3DModeDidChange:(bool)arg2;
- (void)mapView:(MKMapView *)arg1 canShowFlyoverDidChange:(bool)arg2;
- (void)mapView:(MKMapView *)arg1 canZoomInDidChange:(bool)arg2;
- (void)mapView:(MKMapView *)arg1 canZoomOutDidChange:(bool)arg2;
- (void)mapView:(MKMapView *)arg1 didBecomePitched:(bool)arg2;
- (void)mapView:(MKMapView *)arg1 didChangeDisplayedFloorOrdinal:(short)arg2 forVenue:(VKVenueFeatureMarker *)arg3;
- (void)mapView:(MKMapView *)arg1 didChangeFocusedVenue:(VKVenueFeatureMarker *)arg2 focusedBuilding:(VKVenueBuildingFeatureMarker *)arg3;
- (void)mapView:(MKMapView *)arg1 didChangeLookAroundAvailability:(long long)arg2;
- (void)mapView:(MKMapView *)arg1 didChangeMapType:(unsigned long long)arg2;
- (void)mapView:(MKMapView *)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(bool)arg3 fromTrackingButton:(bool)arg4;
- (void)mapView:(MKMapView *)arg1 didDeselectLabelMarker:(VKLabelMarker *)arg2;
- (void)mapView:(MKMapView *)arg1 didEncounterARError:(NSError *)arg2;
- (void)mapView:(MKMapView *)arg1 didGetHikingToolTipRegionId:(unsigned long long)arg2;
- (void)mapView:(MKMapView *)arg1 didPerformPitchAction:(bool)arg2;
- (void)mapView:(MKMapView *)arg1 didSelectLabelMarker:(VKLabelMarker *)arg2;
- (void)mapView:(MKMapView *)arg1 didStopFlyoverTourCompleted:(bool)arg2;
- (void)mapView:(MKMapView *)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 didDecelerate:(bool)arg4 tiltDirection:(long long)arg5;
- (void)mapView:(MKMapView *)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 zoomGestureType:(long long)arg4 didDecelerate:(bool)arg5 tiltDirection:(long long)arg6;
- (void)mapView:(MKMapView *)arg1 didUpdateYaw:(double)arg2;
- (void)mapView:(MKMapView *)arg1 flyoverModeDidChange:(int)arg2;
- (void)mapView:(MKMapView *)arg1 flyoverModeWillChange:(int)arg2;
- (void)mapView:(MKMapView *)arg1 flyoverTourLabelDidChange:(NSString *)arg2;
- (struct CGPoint { double x1; double x2; })mapView:(MKMapView *)arg1 focusPointForPoint:(struct CGPoint { double x1; double x2; })arg2 gesture:(long long)arg3;
- (void)mapView:(MKMapView *)arg1 labelMarker:(VKLabelMarker *)arg2 calloutAccessoryControlTapped:(UIControl *)arg3;
- (void)mapView:(MKMapView *)arg1 puckLocationTracingEvent:(VKNavigationPuckLocationTracingEvent *)arg2;
- (double)mapView:(MKMapView *)arg1 shouldDelayTapResponse:(UITouch *)arg2 onAnnotationView:(MKAnnotationView *)arg3 forDuration:(double)arg4;
- (bool)mapView:(MKMapView *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (bool)mapView:(MKMapView *)arg1 shouldSelectLabelMarker:(VKLabelMarker *)arg2;
- (void)mapView:(MKMapView *)arg1 showingFlyoverDidChange:(bool)arg2;
- (void)mapView:(MKMapView *)arg1 willSelectLabelMarker:(VKLabelMarker *)arg2;
- (void)mapView:(MKMapView *)arg1 willStartRespondingToGesture:(long long)arg2 animated:(bool)arg3;
- (void)mapViewARSessionInterruptionEnded:(MKMapView *)arg1;
- (bool)mapViewCompass3DButtonEnabled:(MKMapView *)arg1;
- (void)mapViewCompass3DButtonTapped:(MKMapView *)arg1;
- (GEORouteMatch *)mapViewCurrentRouteMatch:(MKMapView *)arg1;
- (void)mapViewDidAnimateInAnnotationViews:(MKMapView *)arg1;
- (void)mapViewDidEnterAR:(MKMapView *)arg1;
- (void)mapViewDidExitAR:(MKMapView *)arg1;
- (void)mapViewDidFinishCalloutExpansion:(MKMapView *)arg1;
- (void)mapViewDidFinishInitialUserTrackingModeAnimation:(MKMapView *)arg1;
- (void)mapViewDidStartUserInteraction:(MKMapView *)arg1;
- (void)mapViewDidStopUserInteraction:(MKMapView *)arg1;
- (void)mapViewNavigationCameraDidLeaveDefaultZoom:(MKMapView *)arg1;
- (void)mapViewNavigationCameraDidReturnToDefaultZoom:(MKMapView *)arg1;
- (void)mapViewNavigationCameraHasStartedPanning:(MKMapView *)arg1;
- (void)mapViewNavigationCameraHasStoppedPanning:(MKMapView *)arg1;
- (bool)mapViewShouldHandleTapToDeselect:(MKMapView *)arg1;
- (void)mapViewWillAnimateInAnnotationViews:(MKMapView *)arg1;
- (void)mapViewWillEnterAR:(MKMapView *)arg1;
- (void)mapViewWillStartFlyoverTour:(MKMapView *)arg1;

@end
