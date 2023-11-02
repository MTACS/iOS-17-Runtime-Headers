
@interface SBElasticVolumeViewController : SBElasticValueViewController <MRUVolumeHUDRouteDescriptionProviderDelegate> {
    bool  _mediaProvidedRouteDisplayInfoNeedsUpdate;
    NSArray * _physicalButtonSceneTargets;
    MRUVolumeHUDRouteDescriptionProvider * _routeDescriptionProvider;
    UIImageSymbolConfiguration * _routeImageSymbolConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_debugHandleNextRoute;
- (void)_debugHandleResetRoute;
- (id)createSliderView;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;
- (double)interactiveValueUpdateDiscontinuityInterval;
- (unsigned long long)layoutAxisForInterfaceOrientation:(long long)arg1;
- (id)log;
- (id)physicalButtonSceneTargets;
- (id)sliderAccessibilityIdentifier;
- (bool)updateActiveRouteDisplay:(out id*)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)volumeHUDRouteDescriptionProvider:(id)arg1 didChangeOutputDeviceAsset:(id)arg2;

@end
