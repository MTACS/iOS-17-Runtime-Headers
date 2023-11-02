
@interface ATXPredictionContextBuilder : NSObject <ATXPredictionContextBuilderProtocol> {
    _PASLock * _lock;
    NSDate * _now;
}

@property (nonatomic, readonly) _PASLock *lock;
@property (nonatomic, retain) NSDate *now;

+ (id)loadContextOverrideFromJSONFile:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getContextForOverrideKey:(id)arg1 fromContextOverride:(id)arg2 withDefaultContext:(id)arg3 allowNilValues:(bool)arg4;
- (id)ambientLightContextForContextOverride:(id)arg1 guardedData:(id)arg2;
- (id)ambientLightContextForCurrentContext:(id)arg1;
- (id)deviceStateContextForContextOverride:(id)arg1 guardedData:(id)arg2;
- (id)deviceStateContextForCurrentContext:(id)arg1;
- (id)init;
- (id)initWithAppInfoManager:(id)arg1 locationManager:(id)arg2 motionManagerWrapper:(id)arg3 ambientLightMonitor:(id)arg4 deviceStateMonitorClass:(Class)arg5 contextSourcesInitialized:(bool)arg6;
- (id)initWithAppInfoManager:(id)arg1 locationManager:(id)arg2 motionManagerWrapper:(id)arg3 ambientLightMonitor:(id)arg4 deviceStateMonitorClass:(Class)arg5 contextSourcesInitialized:(bool)arg6 contextStream:(id)arg7 biomeStreamsInitialized:(bool)arg8;
- (id)locationMotionContextForContextOverride:(id)arg1 guardedData:(id)arg2;
- (id)locationMotionContextForCurrentContext:(id)arg1;
- (id)lock;
- (id)now;
- (id)predictionContextForContextOverride:(id)arg1;
- (id)predictionContextForCurrentContext;
- (id)predictionContextForCurrentContextAndCandidatePublisher:(id)arg1 contextOverride:(id)arg2;
- (void)setNow:(id)arg1;
- (id)timeContextForContextOverride:(id)arg1 guardedData:(id)arg2;
- (id)timeContextForCurrentContext:(id)arg1;
- (bool)tryInitBiomeStreamsAndReturnSuccess:(id)arg1;
- (bool)tryInitContextSourcesAndReturnSuccess:(id)arg1;
- (id)updateContextStreamAndReturnPredictionContextForCurrentContext;
- (id)userContextForContextOverride:(id)arg1 guardedData:(id)arg2;
- (id)userContextForCurrentContext:(id)arg1;

@end
