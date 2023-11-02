
@protocol MapEngineDelegate <NSObject>

@required

- (bool)canChangeVenueFocus;
- (void)didFinishDaVinciTransition;
- (void)didFinishLoadingData;
- (void)didFinishLoadingDataWithError:(NSError *)arg1;
- (void)didPresent;
- (void)didStartLoadingData;
- (void)didUpdateSceneStatus:(unsigned char)arg1;
- (void)didUpdateVerticalYawTo:(double)arg1;
- (bool)isChangingRegionWithoutAnimating;
- (void)labelManagerDidLayout;
- (void)labelMarkerDidChangeState:(const void*)arg1;
- (void)locationInHikingToolTipRegion:(unsigned long long)arg1;
- (void)nearestVenueDidChange:(const void*)arg1 building:(const void*)arg2;
- (void)selectedLabelMarkerWillDisappear:(const void*)arg1;
- (bool)wantsTimerTick;
- (void)willBecomeFullyDrawn;
- (void)willLayoutWithTimestamp:(double)arg1 withContext:(void*)arg2;

@optional

- (void)activeARWalkingFeatureDidUpdate:(VKARWalkingFeatureDidUpdateInfo *)arg1;
- (void)arWalkingElevationRequestFailure:(VKARWalkingElevationRequestFailureInfo *)arg1;
- (void)arWalkingFeatureSetStateDidUpdate:(VKARWalkingFeatureSet *)arg1;
- (void)injectDebugARFeatures:(NSArray *)arg1;
- (void)injectDebugARUserRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)muninJunctionDidChange:(const struct MuninJunction { }*)arg1 currentRoad:(const struct MuninRoadEdge { }*)arg2 localize:(bool)arg3;
- (void)puckLocationTracingEvent:(VKNavigationPuckLocationTracingEvent *)arg1;

@end
