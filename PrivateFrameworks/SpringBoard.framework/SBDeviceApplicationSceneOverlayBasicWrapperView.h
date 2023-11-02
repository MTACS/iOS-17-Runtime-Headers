
@interface SBDeviceApplicationSceneOverlayBasicWrapperView : UIView <SBDeviceApplicationSceneOverlayView> {
    long long  _hostOrientation;
    bool  _needsCounterRotation;
    bool  _shouldLayoutOverlayImmediatelyForContainerGeometryChange;
}

@property (nonatomic) long long hostOrientation;
@property (nonatomic, readonly) bool needsCounterRotation;
@property (nonatomic) bool shouldLayoutOverlayImmediatelyForContainerGeometryChange;

- (void)addObserver:(id)arg1;
- (long long)hostOrientation;
- (id)initWithCounterRotationRequirement:(bool)arg1;
- (bool)needsCounterRotation;
- (void)removeObserver:(id)arg1;
- (void)setHostOrientation:(long long)arg1;
- (void)setShouldLayoutOverlayImmediatelyForContainerGeometryChange:(bool)arg1;
- (bool)shouldLayoutOverlayImmediatelyForContainerGeometryChange;

@end
