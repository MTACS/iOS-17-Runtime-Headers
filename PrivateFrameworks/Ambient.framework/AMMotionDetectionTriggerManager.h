
@interface AMMotionDetectionTriggerManager : NSObject <PTSettingsKeyObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    AWAttentionAwarenessClient * _awClient;
    AWAttentionAwarenessClient * _awClientOverride;
    _AMMotionDetectionDataSample * _dataSample;
    unsigned long long  _enabledTriggers;
    _AMMotionDetectionDataSample * _filteredMotionDensity;
    _AMMotionDetectionDataSample * _motionDensityBackground;
    bool  _motionDetectionEnabled;
    NSMutableArray * _observerContexts;
    unsigned long long  _publishedTriggers;
    AMMotionDetectionSettings * _settings;
    unsigned long long  _triggerState;
    double  _watchdogTimeout;
    NSTimer * _watchdogTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMotionDetectionEnabled, nonatomic) bool motionDetectionEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long triggerState;
@property (nonatomic) double watchdogTimeout;

- (void).cxx_destruct;
- (void)_accessQueue_setPublishedTriggers:(unsigned long long)arg1;
- (void)_accessQueue_updatePublishedTriggers;
- (unsigned long long)_computeThresholdMaskFromMotionData:(id)arg1 filtered:(bool)arg2;
- (id)_firstOrderLowPassArray:(id)arg1 last:(id)arg2 dt:(float)arg3 tau:(float)arg4;
- (void)_handleMotionDataSample:(id)arg1;
- (void)_injectSyntheticMotionData:(id)arg1 timestampSeconds:(double)arg2;
- (void)_notifyObserversUpdateMotionDetectionTriggerState:(unsigned long long)arg1;
- (void)_setEnabledTriggers:(unsigned long long)arg1;
- (void)_setMotionDetectionMonitoringEnabled:(bool)arg1;
- (id)_subtractArrayX:(id)arg1 andY:(id)arg2;
- (id)_unitIntervalClipArray:(id)arg1;
- (void)_updateFilteredMotionDensity:(id)arg1;
- (void)_updateMotionDetectionTriggerMaskWithDataSample:(id)arg1 andFilteredDataSample:(id)arg2;
- (void)_updateWatchdogTimer;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (id)init;
- (id)initWithAWClientOverride:(id)arg1;
- (bool)isMotionDetectionEnabled;
- (void)removeObserver:(id)arg1;
- (void)setMotionDetectionEnabled:(bool)arg1;
- (void)setWatchdogTimeout:(double)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (unsigned long long)triggerState;
- (double)watchdogTimeout;

@end
