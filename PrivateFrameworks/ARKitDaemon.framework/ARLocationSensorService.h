
@interface ARLocationSensorService : ARSensorService <ARRemoteLocationSensorService>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serviceName;

- (void)configureForReplay;
- (void)currentLocationWithReply:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1;
- (void)lookupAltitudeAtCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)sensor:(id)arg1 didOutputSensorData:(id)arg2;
- (void)updateARSessionState:(unsigned long long)arg1;
- (void)updateEstimationFromVIOPose:(id)arg1 imageData:(id)arg2;
- (id)updateFromDeviceOrientationData:(id)arg1;
- (id)updateFromLocationData:(id)arg1;
- (void)updateFromVisualLocalizationResult:(id)arg1;

@end
