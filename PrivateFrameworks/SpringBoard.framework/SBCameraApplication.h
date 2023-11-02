
@interface SBCameraApplication : SBApplication {
    bool  _hasPreHeatInFlight;
}

@property (nonatomic) bool hasPreHeatInFlight;

- (void)_cancelPreheatForUserLaunchIfNecessary;
- (bool)hasPreHeatInFlight;
- (bool)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (void)preHeatForUserLaunchIfNecessaryWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2;
- (void)setHasPreHeatInFlight:(bool)arg1;

@end
