
@protocol SBDeviceApplicationSceneOverlayView

@required

- (void)addObserver:(id <SBDeviceApplicationSceneOverlayViewObserver>)arg1;
- (long long)hostOrientation;
- (bool)needsCounterRotation;
- (void)removeObserver:(id <SBDeviceApplicationSceneOverlayViewObserver>)arg1;
- (void)setHostOrientation:(long long)arg1;
- (void)setShouldLayoutOverlayImmediatelyForContainerGeometryChange:(bool)arg1;
- (bool)shouldLayoutOverlayImmediatelyForContainerGeometryChange;

@end
