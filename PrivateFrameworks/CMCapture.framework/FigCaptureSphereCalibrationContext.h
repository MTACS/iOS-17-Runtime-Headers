
@interface FigCaptureSphereCalibrationContext : FigCaptureCalibrationContext

+ (id)calibrationDataStringForInternalLogging:(id)arg1;
+ (unsigned int)calibrationStatusFromRawStreamCalibrationData:(id)arg1;
+ (id)createRawStreamCalibrationDataWithFailureReasons:(int)arg1;
+ (void)initialize;
+ (void)printDebugInfoForRawStreamCalibrationData:(id)arg1;

- (id)initWithSupportedDeviceNames:(id)arg1;
- (void)reportLoggingWithCalibrationData:(id)arg1 isValid:(bool)arg2 magneticFieldMagnitude:(double)arg3;

@end
