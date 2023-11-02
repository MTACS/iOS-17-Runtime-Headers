
@interface ARRemoteLocationSensor : ARRemoteSensor <ARLocationSensorProtocol>

@property (nonatomic, readonly) ARLocationData *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) Class superclass;

+ (id)new;

- (void)configureForReplay;
- (id)currentLocation;
- (id)init;
- (id)initWithServerConnection:(id)arg1;
- (void)lookupAltitudeAtCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)providedDataTypes;
- (void)updateARSessionState:(unsigned long long)arg1;
- (void)updateEstimationFromVIOPose:(id)arg1 imageData:(id)arg2;
- (id)updateFromLocationData:(id)arg1;
- (void)updateFromVisualLocalizationResult:(id)arg1;

@end
