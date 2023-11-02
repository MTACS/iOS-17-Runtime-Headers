
@protocol SBProximitySensorControlling <NSObject>

@required

- (bool)isProximityDetectionEnabled;
- (void)resetProximityCalibration;
- (void)setProximityDetectionEnabled:(bool)arg1;

@end
