
@interface NTKNightModeTriggerManager : NSObject <NTKAmbientIlluminationMonitorDelegate> {
    NTKAmbientIlluminationMonitor * _ambientIlluminationMonitor;
    CLKClockTimerToken * _clockTimerToken;
    double  _currentFaceAPL;
    bool  _isN199;
    double  _lastCurrentNits;
    bool  _lastIsTriggered;
    unsigned long long  _lastSampleSize;
    double  _lastSensorLux;
    double  _lastSmoothedLux;
    double  _lastSmoothedNits;
    bool  _lastTargetTrigger;
    double  _lastThresholdHigh;
    double  _lastThresholdLow;
    double  _lastThresholdOffset;
    bool  _luxIsLive;
    <NTKMovingStatistic> * _luxStatistic;
    bool  _nightModeDetectionEnabled;
    bool  _nightModeTriggered;
    <NTKMovingStatistic> * _nitsStatistic;
    NSHashTable * _observers;
    NTKNightModeTriggerSettings * _settings;
    unsigned long long  _skippedLogs;
    double  _thresholdLuxHigh;
    double  _thresholdLuxLow;
    double  _thresholdOffset;
}

@property (nonatomic) double currentFaceAPL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isNightModeDetectionEnabled, nonatomic) bool nightModeDetectionEnabled;
@property (getter=isNightModeTriggered, setter=_setNightModeTriggered:, nonatomic) bool nightModeTriggered;
@property (readonly) Class superclass;
@property (nonatomic) double thresholdLuxHigh;
@property (nonatomic) double thresholdLuxLow;
@property (nonatomic) double thresholdOffset;

- (void).cxx_destruct;
- (void)_notifyObservers;
- (void)_setNightModeTriggered:(bool)arg1;
- (double)_smoothedLux;
- (double)_smoothedNits;
- (void)_startClockTimer;
- (void)_stopClockTimer;
- (void)_updateAverageWithCurrentLux;
- (void)_updateAverageWithCurrentNits;
- (void)_updateAverageWithLux:(double)arg1;
- (void)_updateAverageWithNits:(double)arg1;
- (void)_updateTriggerState;
- (void)addObserver:(id)arg1;
- (void)ambientIlluminationMonitor:(id)arg1 receivedAmbientLux:(double)arg2;
- (void)ambientIlluminationMonitor:(id)arg1 receivedDisplayNits:(double)arg2;
- (double)currentFaceAPL;
- (void)dealloc;
- (id)init;
- (bool)isNightModeDetectionEnabled;
- (bool)isNightModeTriggered;
- (void)removeObserver:(id)arg1;
- (void)sampleSizeChanged:(id)arg1;
- (void)setCurrentFaceAPL:(double)arg1;
- (void)setNightModeDetectionEnabled:(bool)arg1;
- (void)setThresholdLuxHigh:(double)arg1;
- (void)setThresholdLuxLow:(double)arg1;
- (void)setThresholdOffset:(double)arg1;
- (double)thresholdLuxHigh;
- (double)thresholdLuxLow;
- (double)thresholdOffset;
- (void)thresholdsChanged:(id)arg1;

@end
