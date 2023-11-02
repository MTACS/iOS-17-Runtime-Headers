
@protocol ARRemoteLocationSensorService <ARRemoteSensorService>

@required

- (void)configureForReplay;
- (void)currentLocationWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ARLocationData *, NSError *, void*
- (void)lookupAltitudeAtCoordinate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: struct CLLocationCoordinate2D { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _CLLocationGroundAltitude *, void*
- (void)updateARSessionState:(unsigned long long)arg1;
- (void)updateEstimationFromVIOPose:(ARWorldTrackingPoseData *)arg1 imageData:(ARImageData *)arg2;

@end
