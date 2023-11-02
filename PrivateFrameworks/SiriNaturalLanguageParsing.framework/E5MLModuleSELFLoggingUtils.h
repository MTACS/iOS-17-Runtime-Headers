
@interface E5MLModuleSELFLoggingUtils : NSObject

+ (id)_buildMetadataWithNlId:(id)arg1;
+ (id)_buildMetadataWithNlId:(id)arg1 andWithTrpId:(id)arg2 andWithResultCandidateId:(id)arg3;
+ (id)_generateRandomUUID;
+ (void)emitEvent:(id /* block */)arg1;
+ (void)emitEventMilAssetAcquisition:(id)arg1 milAssetAcquisitionContextBuilder:(id /* block */)arg2;
+ (void)emitEventMilAssetAcquisitionWithMetadata:(id)arg1 milAssetAcquisitionContextBuilder:(id /* block */)arg2;
+ (void)logMilCompilationEnded:(id)arg1 acquisitionType:(int)arg2;
+ (void)logMilCompilationEndedWithMetadata:(id)arg1 contextId:(id)arg2 acquisitionType:(int)arg3;
+ (void)logMilCompilationFailed:(id)arg1 acquisitionType:(int)arg2 errorCode:(int)arg3 errorMessage:(id)arg4;
+ (void)logMilCompilationFailedWithMetadata:(id)arg1 contextId:(id)arg2 acquisitionType:(int)arg3 errorCode:(int)arg4 errorMessage:(id)arg5;
+ (id)logMilCompilationStarted;
+ (id)logMilCompilationStartedWithMetadata:(id)arg1;

@end
