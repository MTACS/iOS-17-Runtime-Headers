
@interface HKMCProjectionAccuracyAnalytics : NSObject

+ (id)_closestProjectionToLoggedDayIndex:(long long)arg1 analysis:(id)arg2;
+ (bool)_isAllowed;
+ (bool)_isMetricEnabled;
+ (id)_isSleepConfiguredForWristTemperatureMeasurementsWithError:(id*)arg1;
+ (bool)shouldSubmit;
+ (void)submitMetricWithDayIndex:(long long)arg1 oldMenstrualFlow:(long long)arg2 newMenstrualFlow:(long long)arg3 analysis:(id)arg4 isLoggingMultipleDays:(bool)arg5 periodPredictionEnabled:(bool)arg6 heartRateBasedPredictionEnabled:(bool)arg7 wristTemperatureBasedPredictionEnabled:(bool)arg8 isWristTemperatureInputDelivered:(bool)arg9 internalLiveOnCycleFactorOverrideEnabled:(bool)arg10 cycles:(id)arg11;

@end
