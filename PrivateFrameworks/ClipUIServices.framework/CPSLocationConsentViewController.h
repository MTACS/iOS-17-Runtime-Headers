
@interface CPSLocationConsentViewController : OBWelcomeController <MKMapViewDelegate> {
    id /* block */  _actionHandler;
    OBBoldTrayButton * _allowForAllButton;
    OBLinkTrayButton * _allowOnceButton;
    NSString * _appName;
    MKCircle * _circleOverlay;
    NSString * _clipBundleID;
    MKPointAnnotation * _deviceLocationAnnotation;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _deviceLocationCoordinate;
    NSString * _deviceLocationSymbolName;
    MKMapView * _mapView;
    CLCircularRegion * _region;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buttonActionTriggered:(id)arg1;
- (void)_setupContentView;
- (id /* block */)actionHandler;
- (id)initWithRequest:(id)arg1;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (void)setActionHandler:(id /* block */)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
