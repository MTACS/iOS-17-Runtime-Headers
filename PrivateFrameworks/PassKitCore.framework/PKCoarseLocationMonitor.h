
@interface PKCoarseLocationMonitor : NSObject <CLLocationManagerDelegate> {
    bool  _coarseLocationEnabled;
    CLLocationManager * _locationManager;
}

@property (nonatomic, readonly) bool coarseLocationEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)coarseLocationEnabled;
- (id)init;
- (void)locationManagerDidChangeAuthorization:(id)arg1;

@end
