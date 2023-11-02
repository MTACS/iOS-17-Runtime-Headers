
@interface MSDLocationViewController : OBWelcomeController <CLLocationManagerDelegate, OBSetupAssistantSupport> {
    CLLocationManager * _locationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_locationButtonTapped:(id)arg1;
- (id)init;
- (id)locationManager;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)viewDidLoad;

@end
