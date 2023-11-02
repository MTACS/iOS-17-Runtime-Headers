
@interface TRILighthouseBitacoraHandler : NSObject

+ (bool)donateTrialIdentifiers:(id)arg1 eventType:(unsigned char)arg2 succeeded:(bool)arg3 error:(id*)arg4;
+ (bool)emitBMLTEventWithBMLTId:(id)arg1 deploymentId:(int)arg2 eventType:(unsigned char)arg3 succeeded:(bool)arg4;
+ (bool)emitShadowEvaluationEventWithExperimentId:(id)arg1 deploymentId:(int)arg2 treatmentId:(id)arg3 eventType:(unsigned char)arg4 succeeded:(bool)arg5;

@end
