
@protocol NIDeviceCapability

@required

- (bool)supportsCameraAssistance;
- (bool)supportsDirectionMeasurement;
- (bool)supportsExtendedDistanceMeasurement;
- (bool)supportsPreciseDistanceMeasurement;

@end
