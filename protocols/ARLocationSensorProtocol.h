
@protocol ARLocationSensorProtocol <ARSensor>

@required

- (void)configureForReplay;
- (ARLocationData *)currentLocation;
- (<ARSensorDelegate> *)delegate;
- (void)lookupAltitudeAtCoordinate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: struct CLLocationCoordinate2D { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _CLLocationGroundAltitude *, void*
- (void)setDelegate:(id <ARSensorDelegate>)arg1;
- (void)updateARSessionState:(unsigned long long)arg1;
- (void)updateEstimationFromVIOPose:(ARWorldTrackingPoseData *)arg1 imageData:(ARImageData *)arg2;
- (ARLocationData *)updateFromLocationData:(ARLocationData *)arg1;
- (void)updateFromVisualLocalizationResult:(ARVisualLocalizationResultData *)arg1;

@end
