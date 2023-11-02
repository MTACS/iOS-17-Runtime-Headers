
@interface NIDeviceCapabilities : NSObject <NIInternalDeviceCapability> {
    bool  _supportsCameraAssistance;
    bool  _supportsCoarseDistanceMeasurement;
    bool  _supportsDirectionMeasurement;
    bool  _supportsExtendedDistanceMeasurement;
    bool  _supportsPreciseDistanceMeasurement;
}

@property (nonatomic, readonly) bool supportsCameraAssistance;
@property (nonatomic, readonly) bool supportsCoarseDistanceMeasurement;
@property (nonatomic, readonly) bool supportsDirectionMeasurement;
@property (nonatomic, readonly) bool supportsExtendedDistanceMeasurement;
@property (nonatomic, readonly) bool supportsPreciseDistanceMeasurement;

+ (id)new;

- (id)init;
- (id)initWithBitmap:(unsigned char)arg1;
- (id)initWithFineRangingSupport:(bool)arg1 aoaSupport:(bool)arg2 extendedDistanceMeasurementSupport:(bool)arg3 syntheticApertureSupport:(bool)arg4;
- (id)initWithFineRangingSupport:(bool)arg1 coarseRangingSupport:(bool)arg2 aoaSupport:(bool)arg3 extendedDistanceMeasurementSupport:(bool)arg4 syntheticApertureSupport:(bool)arg5;
- (bool)supportsCameraAssistance;
- (bool)supportsCoarseDistanceMeasurement;
- (bool)supportsDirectionMeasurement;
- (bool)supportsExtendedDistanceMeasurement;
- (bool)supportsPreciseDistanceMeasurement;
- (unsigned char)toBitmap;

@end
