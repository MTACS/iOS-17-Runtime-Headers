
@interface AABRear : CBModule {
    CBGrimaldiModule * _Grimaldi;
    float  _activationFLux;
    float  _frontALSThreshold;
    float  _lastFrequency;
    float  _luxRatioThreshold;
    float  _nitsRatioThreshold;
    float  _rearALSThreshold;
    bool  _sensorEnabled;
    bool  _started;
}

- (bool)checkSensorEnablementConditions:(float)arg1;
- (id)copyParam:(id)arg1;
- (void)dealloc;
- (void)evaluateSamplingFrequencyWithLux:(float)arg1 andCap:(float)arg2;
- (id)initWithGrimaldi:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (float)nitsRatio;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (bool)shouldUseRLux:(float)arg1 rLux:(float)arg2;
- (bool)shouldUseRearLuxFrontLux:(float)arg1 rearLux:(float)arg2 andCap:(float)arg3;
- (void)start;
- (void)stop;
- (void)unregisterNotificationBlock;

@end
