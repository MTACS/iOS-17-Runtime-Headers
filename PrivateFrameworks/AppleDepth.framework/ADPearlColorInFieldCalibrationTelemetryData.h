
@interface ADPearlColorInFieldCalibrationTelemetryData : NSObject {
    unsigned long long  _frontEndTime;
    unsigned int  _largeRotationStatusBits;
    unsigned long long  _lastExecutionTime;
    unsigned long long  _lastToleranceDetectedTime;
    unsigned long long  _maxBackendRunTime;
    unsigned long long  _minBackendRunTime;
    unsigned int  _telemetryVersion;
    unsigned long long  _timeSincePrevRun;
    unsigned long long  _totalBackendTime;
    unsigned long long  _totalNumRuns;
}

@property (readonly) unsigned long long frontEndTime;
@property (readonly) unsigned int largeRotationStatusBits;
@property (readonly) unsigned long long lastExecutionTime;
@property unsigned long long lastToleranceDetectedTime;
@property (readonly) unsigned long long maxBackendRunTime;
@property (readonly) unsigned long long minBackendRunTime;
@property (readonly) unsigned long long timeSincePrevRun;
@property (readonly) unsigned long long totalBackendTime;
@property (readonly) unsigned long long totalNumRuns;

- (unsigned long long)frontEndTime;
- (void)increaseRunTimesByOne;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (unsigned int)largeRotationStatusBits;
- (unsigned long long)lastExecutionTime;
- (unsigned long long)lastToleranceDetectedTime;
- (unsigned long long)maxBackendRunTime;
- (unsigned long long)minBackendRunTime;
- (id)persistenceData;
- (void)reportBackendRunTime:(unsigned long long)arg1;
- (void)reportFrontendRunTime:(unsigned long long)arg1;
- (void)reset;
- (void)setLastToleranceDetectedTime:(unsigned long long)arg1;
- (unsigned long long)timeSincePrevRun;
- (unsigned long long)totalBackendTime;
- (unsigned long long)totalNumRuns;
- (void)updateLargeRotationStatusBits:(unsigned int)arg1;
- (void)updateLastExecutionTime:(unsigned long long)arg1;

@end
