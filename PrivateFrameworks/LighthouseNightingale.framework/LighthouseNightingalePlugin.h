
@interface LighthouseNightingalePlugin : NSObject

+ (bool)checkIfPluginShouldRunOnJulianDay:(long long)arg1 andWithDeploymentId:(long long)arg2 andCadence:(long long)arg3;
+ (bool)doWorkWithRecipe:(id)arg1 telemetryIds:(id)arg2 outError:(id*)arg3;
+ (id)getPseudoDeviceID;
+ (void)initialize;
+ (void)performHistoricalEvaluationWithHKHealthStore:(id)arg1 andDayStreamProcessorConfig:(id)arg2 useHeartRate:(bool)arg3 useWristTemperature:(bool)arg4 runWithDropOut:(bool)arg5 additionalDayCount:(long long)arg6 minCycleLength:(long long)arg7 maxCycleLength:(long long)arg8 simulateCrashOnTimeout:(bool)arg9 error:(id*)arg10;
+ (void)updateUserDefaultsThatPluginRanOnJulianDay:(long long)arg1 withDeploymentId:(long long)arg2;
+ (bool)userHasDataFromDayStreamProcessorConfig:(id)arg1;

- (void)stop;

@end
