
@interface FigCaptureAutoFocusPositionSensorCalibrationContext : FigCaptureCalibrationContext {
    NSMutableArray * _calibrationDataHistoryQueue;
    double  _currentAngleDelta;
    bool  _disableHistoryChecking;
    NSMutableDictionary * _iStopZEstimateDeltaHistory;
    bool  _lastSuccessfulCalibrationWasDiscarded;
    int  _maxHistoryBuffer;
    int  _maxIStopZEstimateDifference;
    int  _minCompassHeadingChange;
    double  _previousAngleDelta;
    bool  _shouldDeleteOldVersion;
}

@property (nonatomic) bool disableHistoryChecking;

+ (id)calibrationDataStringForInternalLogging:(id)arg1;
+ (unsigned int)calibrationStatusFromRawStreamCalibrationData:(id)arg1;
+ (id)createRawStreamCalibrationDataWithFailureReasons:(int)arg1;
+ (void)initialize;
+ (void)printDebugInfoForRawStreamCalibrationData:(id)arg1;
+ (void)setStatusForCalibrationData:(id)arg1 status:(int)arg2;

- (bool)_calibrationDataCompassHeadingHasMovedPastMinimum:(id)arg1 basedOnCalibrationHistory:(id)arg2;
- (bool)_calibrationDataIsWithinIStopZEstimateLimits:(id)arg1 basedOnCalibrationHistory:(id)arg2;
- (id)_initForUnitTests;
- (void)_pushToCalibrationHistoryQueue:(id)arg1;
- (bool)_shouldRejectCalibrationData:(id)arg1;
- (id)calibrationDataHistory;
- (double)currentAngleDelta;
- (int)currentIStopZEstimateDeltaForPosition:(id)arg1;
- (bool)disableHistoryChecking;
- (id)initWithSupportedDeviceNames:(id)arg1;
- (int)passingIStopZEstimateDeltaForPosition:(id)arg1;
- (double)previousAngleDelta;
- (int)previousIStopZEstimateDeltaForPosition:(id)arg1;
- (void)pushCalibrationDataToHistory:(id)arg1 isRejected:(bool*)arg2;
- (void)reportLoggingWithCalibrationData:(id)arg1 isValid:(bool)arg2 magneticFieldMagnitude:(double)arg3;
- (void)setDisableHistoryChecking:(bool)arg1;
- (void)setLastSuccessfulCalibrationData:(id)arg1;

@end
