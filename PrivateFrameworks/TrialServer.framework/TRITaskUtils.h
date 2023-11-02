
@interface TRITaskUtils : NSObject

+ (id)_bmltStateForAnalyticsFromStatusType:(unsigned char)arg1;
+ (id)_experimentStateForAnalyticsFromInternalState:(unsigned char)arg1;
+ (id)_rolloutStateForAnalyticsFromInternalState:(unsigned char)arg1;
+ (void)addAttribution:(id)arg1 toTaskTags:(id)arg2;
+ (void)updateBMLTHistoryDatabaseWithAllocationStatus:(unsigned char)arg1 forBMLT:(id)arg2 deployment:(int)arg3 fps:(id)arg4 bmltRecord:(id)arg5 context:(id)arg6;
+ (bool)updateExperimentHistoryDatabaseWithAllocationStatus:(unsigned char)arg1 forExperiment:(id)arg2 treatment:(id)arg3 deployment:(int)arg4 experimentRecord:(id)arg5 isBecomingObsolete:(bool)arg6 context:(id)arg7;
+ (void)updateRolloutHistoryDatabaseWithAllocationStatus:(unsigned char)arg1 forRollout:(id)arg2 ramp:(id)arg3 deployment:(int)arg4 fps:(id)arg5 namespaces:(id)arg6 telemetryMetric:(id)arg7 rolloutRecord:(id)arg8 isBecomingObsolete:(bool)arg9 context:(id)arg10;

@end
