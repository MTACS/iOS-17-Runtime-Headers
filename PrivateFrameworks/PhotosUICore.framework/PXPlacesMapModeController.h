
@interface PXPlacesMapModeController : NSObject {
    PXPlacesMapView * _mapView;
    bool  _prefersRealisticElevationStyle;
}

@property (nonatomic, readonly) bool is3DPerspectiveActive;
@property (nonatomic, readonly) bool is3DPerspectiveActiveByCheckingPitch;
@property (nonatomic) unsigned long long mapStyle;
@property (nonatomic, readonly) PXPlacesMapView *mapView;
@property (nonatomic, readonly) bool prefersRealisticElevationStyle;
@property (nonatomic, readonly) bool supportsPerspectiveToggling;

- (void).cxx_destruct;
- (bool)_toggle3DModeByAdjustingPitch:(bool)arg1;
- (id)init;
- (id)initWithMapView:(id)arg1 prefersRealisticElevationStyle:(bool)arg2;
- (bool)is3DPerspectiveActive;
- (bool)is3DPerspectiveActiveByCheckingPitch;
- (unsigned long long)mapStyle;
- (id)mapView;
- (bool)prefersRealisticElevationStyle;
- (void)setMapStyle:(unsigned long long)arg1;
- (bool)supportsPerspectiveToggling;
- (bool)toggle3DModeIfPossible;
- (bool)togglePerspectiveIfPossible;

@end
