
@interface REDeviceMotionPredictor : REPredictor <REDeviceMotionPredictorProperties> {
    CMMotionActivityManager * _activityManager;
    CMMotionActivity * _lastActivity;
    unsigned long long  _motionType;
    REUpNextScheduler * _scheduler;
    bool  _stationary;
}

@property (nonatomic, readonly) CMMotionActivityManager *activityManager;
@property unsigned long long motionType;
@property (getter=isStationary) bool stationary;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)_init;
- (void)_updateWithActivity:(id)arg1;
- (id)activityManager;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (bool)isStationary;
- (unsigned long long)motionType;
- (void)pause;
- (void)resume;
- (void)setMotionType:(unsigned long long)arg1;
- (void)setStationary:(bool)arg1;

@end
