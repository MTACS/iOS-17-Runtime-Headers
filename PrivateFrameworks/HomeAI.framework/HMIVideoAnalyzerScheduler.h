
@interface HMIVideoAnalyzerScheduler : HMFObject <HMFLogging, HMFTimerDelegate, HMISystemResourceUsageMonitorDelegate> {
    bool  _ignoreThermalAndSystemResourceUsageLevel;
    NSPointerArray * _internalAnalyzers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _logStateCount;
    unsigned long long  _maxH264VideoDecoders;
    unsigned long long  _maxH264VideoEncoders;
    unsigned long long  _maxH265VideoEncoders;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _registerLock;
    HMFTimer * _tick;
    long long  _usageLevel;
    HMISystemResourceUsageMonitor * _usageMonitor;
}

@property (readonly) NSArray *analyzerConfigurations;
@property (readonly) NSArray *analyzerStates;
@property (readonly) NSArray *analyzers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool ignoreThermalAndSystemResourceUsageLevel;
@property (readonly) NSPointerArray *internalAnalyzers;
@property long long logStateCount;
@property unsigned long long maxH264VideoDecoders;
@property unsigned long long maxH264VideoEncoders;
@property unsigned long long maxH265VideoEncoders;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_compactInternalAnalyzers;
- (long long)_getPeakPowerPressureLevel;
- (void)_logState;
- (bool)_shouldSkipLogState;
- (void)_updateAnalyzer:(id)arg1 withIndex:(unsigned long long)arg2;
- (id)analyzerConfigurations;
- (id)analyzerStates;
- (id)analyzerWithConfiguration:(id)arg1 block:(id /* block */)arg2;
- (id)analyzers;
- (bool)ignoreThermalAndSystemResourceUsageLevel;
- (id)init;
- (id)internalAnalyzers;
- (long long)logStateCount;
- (unsigned long long)maxH264VideoDecoders;
- (unsigned long long)maxH264VideoEncoders;
- (unsigned long long)maxH265VideoEncoders;
- (id)reducedConfiguration:(id)arg1;
- (id)reducedConfiguration:(id)arg1 configurations:(id)arg2;
- (id)reducedConfiguration:(id)arg1 states:(id)arg2;
- (void)registerAnalyzer:(id)arg1;
- (void)setIgnoreThermalAndSystemResourceUsageLevel:(bool)arg1;
- (void)setLogStateCount:(long long)arg1;
- (void)setMaxH264VideoDecoders:(unsigned long long)arg1;
- (void)setMaxH264VideoEncoders:(unsigned long long)arg1;
- (void)setMaxH265VideoEncoders:(unsigned long long)arg1;
- (void)systemResourceUsageDidChangeTo:(long long)arg1;
- (void)timerDidFire:(id)arg1;

@end
