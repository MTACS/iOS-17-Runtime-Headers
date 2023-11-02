
@interface IOAccessoryUserLdcmParamClass : NSObject {
    unsigned long long  _dryPollingIntervalSec;
    double  _dryTransitionCapacitanceThreshold;
    unsigned long long  _enableHalogenMitigationsAndUI;
    unsigned long long  _enableHalogenSnrTtr;
    int  _fdpBehaviorMask;
    unsigned long long  _ldcmArbiterRetrySec;
    unsigned long long  _ldcmStartMeasurementsDelayMs;
    unsigned long long  _ldcmStartMeasurementsRetryMs;
    unsigned long long  _maxUpFluctuationMv;
    unsigned long long  _maxVhiDurationSec;
    unsigned long long  _minDryReadings;
    unsigned long long  _minVhiDurationSec;
    unsigned long long  _numEisHalogenSamples;
    int  _userBehaviorMask;
    unsigned long long  _wetPollingIntervalSec;
    double  _wetTransitionCapacitanceThreshold;
}

@property unsigned long long dryPollingIntervalSec;
@property double dryTransitionCapacitanceThreshold;
@property unsigned long long enableHalogenMitigationsAndUI;
@property unsigned long long enableHalogenSnrTtr;
@property int fdpBehaviorMask;
@property unsigned long long ldcmArbiterRetrySec;
@property unsigned long long ldcmStartMeasurementsDelayMs;
@property unsigned long long ldcmStartMeasurementsRetryMs;
@property unsigned long long maxUpFluctuationMv;
@property unsigned long long maxVhiDurationSec;
@property unsigned long long minDryReadings;
@property unsigned long long minVhiDurationSec;
@property unsigned long long numEisHalogenSamples;
@property int userBehaviorMask;
@property unsigned long long wetPollingIntervalSec;
@property double wetTransitionCapacitanceThreshold;

- (unsigned long long)dryPollingIntervalSec;
- (double)dryTransitionCapacitanceThreshold;
- (unsigned long long)enableHalogenMitigationsAndUI;
- (unsigned long long)enableHalogenSnrTtr;
- (int)fdpBehaviorMask;
- (id)init;
- (unsigned long long)ldcmArbiterRetrySec;
- (unsigned long long)ldcmStartMeasurementsDelayMs;
- (unsigned long long)ldcmStartMeasurementsRetryMs;
- (unsigned long long)maxUpFluctuationMv;
- (unsigned long long)maxVhiDurationSec;
- (unsigned long long)minDryReadings;
- (unsigned long long)minVhiDurationSec;
- (unsigned long long)numEisHalogenSamples;
- (void)setDryPollingIntervalSec:(unsigned long long)arg1;
- (void)setDryTransitionCapacitanceThreshold:(double)arg1;
- (void)setEnableHalogenMitigationsAndUI:(unsigned long long)arg1;
- (void)setEnableHalogenSnrTtr:(unsigned long long)arg1;
- (void)setFdpBehaviorMask:(int)arg1;
- (void)setLdcmArbiterRetrySec:(unsigned long long)arg1;
- (void)setLdcmStartMeasurementsDelayMs:(unsigned long long)arg1;
- (void)setLdcmStartMeasurementsRetryMs:(unsigned long long)arg1;
- (void)setMaxUpFluctuationMv:(unsigned long long)arg1;
- (void)setMaxVhiDurationSec:(unsigned long long)arg1;
- (void)setMinDryReadings:(unsigned long long)arg1;
- (void)setMinVhiDurationSec:(unsigned long long)arg1;
- (void)setNumEisHalogenSamples:(unsigned long long)arg1;
- (void)setUserBehaviorMask:(int)arg1;
- (void)setWetPollingIntervalSec:(unsigned long long)arg1;
- (void)setWetTransitionCapacitanceThreshold:(double)arg1;
- (int)userBehaviorMask;
- (unsigned long long)wetPollingIntervalSec;
- (double)wetTransitionCapacitanceThreshold;

@end
