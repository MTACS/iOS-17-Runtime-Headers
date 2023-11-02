
@interface ADJasperColorInFieldCalibrationTelemetryData : NSObject {
    unsigned long long  _frontEndTime;
    unsigned int  _largeRotationStatusBits;
    unsigned long long  _lastExecutionTime;
    unsigned long long  _lastToleranceDetectedTime;
    unsigned long long  _maxBackEndRunTime;
    unsigned long long  _minBackEndRunTime;
    unsigned int  _telemetryVersion;
    unsigned long long  _timeSincePrevRun;
    unsigned long long  _totalBackEndTime;
    unsigned long long  _totalNumRuns;
    unsigned long long  _validPointsSum;
    unsigned long long  _validPointsSumEventsCount;
}

@property (readonly) unsigned long long frontEndTime;
@property (readonly) unsigned int largeRotationStatusBits;
@property (readonly) unsigned long long lastExecutionTime;
@property unsigned long long lastToleranceDetectedTime;
@property (readonly) unsigned long long maxBackEndRunTime;
@property (readonly) unsigned long long minBackEndRunTime;
@property (readonly) unsigned long long timeSincePrevRun;
@property (readonly) unsigned long long totalBackEndTime;
@property (readonly) unsigned long long totalNumRuns;
@property (readonly) unsigned long long validPointsSum;
@property (readonly) unsigned long long validPointsSumEventsCount;

- (unsigned long long)frontEndTime;
- (float)getAverageNumValidPoints;
- (void)increaseRunTimesByOne;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (unsigned int)largeRotationStatusBits;
- (unsigned long long)lastExecutionTime;
- (unsigned long long)lastToleranceDetectedTime;
- (unsigned long long)maxBackEndRunTime;
- (unsigned long long)minBackEndRunTime;
- (id)persistenceData;
- (void)reportBackendRunTime:(unsigned long long)arg1;
- (void)reportFrontendRunTime:(unsigned long long)arg1;
- (void)reset;
- (void)setLastToleranceDetectedTime:(unsigned long long)arg1;
- (unsigned long long)timeSincePrevRun;
- (unsigned long long)totalBackEndTime;
- (unsigned long long)totalNumRuns;
- (void)updateLargeRotationStatusBits:(unsigned int)arg1;
- (void)updateLastExecutionTime:(unsigned long long)arg1;
- (void)updateValidPointsSum:(unsigned long long)arg1;
- (unsigned long long)validPointsSum;
- (unsigned long long)validPointsSumEventsCount;

@end
