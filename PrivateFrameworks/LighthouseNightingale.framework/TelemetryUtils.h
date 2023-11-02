
@interface TelemetryUtils : NSObject

+ (id)nightingaleTelemetryIdentifiers;
+ (void)sendPerCycleModelMetrics:(id)arg1;
+ (void)sendReachUpdateWithReachLocationString:(id)arg1 andError:(id)arg2;
+ (void)setNightingaleTelemetryIdentifiers:(id)arg1;
+ (void)setNightingaleTelemetryIdentifiers:(id)arg1 treatmentId:(id)arg2 deploymentId:(int)arg3 reachId:(id)arg4;

@end
