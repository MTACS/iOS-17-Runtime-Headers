
@interface CDMSELFLogUtil : NSObject

+ (bool)cdmAllServicesSetupEnded:(id)arg1 logMessage:(id)arg2 dataDispatcherContext:(id)arg3;
+ (bool)cdmAllServicesSetupFailed:(id)arg1 logMessage:(id)arg2 dataDispatcherContext:(id)arg3;
+ (bool)cdmAllServicesSetupStarted:(id)arg1 logMessage:(id)arg2 dataDispatcherContext:(id)arg3;
+ (bool)cdmAssetSetupEnded:(id)arg1 contextId:(id)arg2 logMessage:(id)arg3 dataDispatcherContext:(id)arg4;
+ (bool)cdmAssetSetupFailed:(id)arg1 contextId:(id)arg2 errorDomain:(int)arg3 errorCode:(unsigned int)arg4 logMessage:(id)arg5 dataDispatcherContext:(id)arg6;
+ (bool)cdmAssetSetupStarted:(id)arg1 contextId:(id)arg2 serviceNames:(id)arg3 logMessage:(id)arg4 dataDispatcherContext:(id)arg5;
+ (bool)cdmAssetsReported:(id)arg1 metadata:(id)arg2 dataDispatcherContext:(id)arg3;
+ (bool)cdmClientSetupEnded:(id)arg1 logMessage:(id)arg2 dataDispatcherContext:(id)arg3;
+ (bool)cdmClientSetupFailed:(id)arg1 errorDomain:(int)arg2 errorCode:(unsigned int)arg3 logMessage:(id)arg4;
+ (bool)cdmClientSetupFailed:(id)arg1 errorDomain:(int)arg2 errorCode:(unsigned int)arg3 logMessage:(id)arg4 dataDispatcherContext:(id)arg5;
+ (bool)cdmClientSetupStarted:(id)arg1 logMessage:(id)arg2 currentServiceGraph:(int)arg3 dataDispatcherContext:(id)arg4;
+ (bool)cdmEnded:(id)arg1 metadata:(id)arg2 logMessage:(id)arg3 machAbsoluteTime:(unsigned long long)arg4 dataDispatcherContext:(id)arg5;
+ (bool)cdmFailed:(int)arg1 errorDomainString:(id)arg2 errorCode:(int)arg3 metadata:(id)arg4 logMessage:(id)arg5 dataDispatcherContext:(id)arg6;
+ (bool)cdmFailed:(int)arg1 metadata:(id)arg2 logMessage:(id)arg3 dataDispatcherContext:(id)arg4;
+ (bool)cdmSetupMissingAssetsDetected:(id)arg1 contextId:(id)arg2 serviceNames:(id)arg3 logMessage:(id)arg4 dataDispatcherContext:(id)arg5;
+ (bool)cdmStarted:(id)arg1 metadata:(id)arg2 logMessage:(id)arg3 machAbsoluteTime:(unsigned long long)arg4 currentServiceGraph:(int)arg5 dataDispatcherContext:(id)arg6;
+ (bool)cdmXpcProcessingEnded:(id)arg1 metadata:(id)arg2 logMessage:(id)arg3 dataDispatcherContext:(id)arg4;
+ (bool)cdmXpcProcessingFailed:(id)arg1 reason:(int)arg2 errorCode:(unsigned int)arg3 metadata:(id)arg4 logMessage:(id)arg5 dataDispatcherContext:(id)arg6;
+ (bool)cdmXpcProcessingStarted:(id)arg1 xpcType:(int)arg2 xpcSystemEventType:(int)arg3 serviceName:(int)arg4 metadata:(id)arg5 logMessage:(id)arg6 dataDispatcherContext:(id)arg7;
+ (bool)contextUpdateEnded:(id)arg1 metadata:(id)arg2 logMessage:(id)arg3 dataDispatcherContext:(id)arg4;
+ (id)convertNLAssetToSISchemaAsset:(id)arg1 nlAsset:(id)arg2;
+ (id)createSELFMetadataWithNlId:(id)arg1 andWithTrpId:(id)arg2 andWithResultCandidateId:(id)arg3 andWithConnectionId:(id)arg4;
+ (id)createSELFMetadataWithRequestId:(id)arg1;
+ (bool)curareRequestLink:(id)arg1 nlId:(id)arg2 metadata:(id)arg3 logMessage:(id)arg4 dataDispatcherContext:(id)arg5;
+ (bool)emitCurareContext:(id)arg1 metadata:(id)arg2 dataDispatcherContext:(id)arg3;
+ (bool)emitEventsFromContainer:(id)arg1 mainEventLogMessage:(id)arg2;
+ (bool)emitEventsFromContainer:(id)arg1 mainEventLogMessage:(id)arg2 dataDispatcherContext:(id)arg3;
+ (bool)emitEventsFromContainer:(id)arg1 mainEventLogMessage:(id)arg2 machAbsoluteTime:(unsigned long long)arg3 dataDispatcherContext:(id)arg4;
+ (bool)emitEventsFromContainer:(id)arg1 mainEventLogMessage:(id)arg2 machAbsoluteTime:(unsigned long long)arg3 logLevel:(id)arg4;
+ (bool)emitEventsFromContainer:(id)arg1 mainEventLogMessage:(id)arg2 machAbsoluteTime:(unsigned long long)arg3 logLevel:(id)arg4 dataDispatcherContext:(id)arg5;
+ (bool)emitNLXRequestLink:(id)arg1 logMessage:(id)arg2 dataDispatcherContext:(id)arg3;
+ (bool)emitRequestLink:(id)arg1 metadata:(id)arg2 dataDispatcherContext:(id)arg3;
+ (id)getAssetNameWithLocaleSuffix:(id)arg1 locale:(id)arg2;
+ (int)getLocaleForAsset:(id)arg1;
+ (unsigned char)getSampleRateForEvent:(id)arg1;
+ (id)getVersionForAsset:(id)arg1;
+ (bool)isEventSampledForEmission:(id)arg1;
+ (bool)matchingSpanEnded:(id)arg1 metadata:(id)arg2 logMessage:(id)arg3 dataDispatcherContext:(id)arg4;
+ (id)mintRequestIdAndCreateSELFMetadataWithRequestId;
+ (bool)orchestratorRequestLink:(id)arg1 nlId:(id)arg2 metadata:(id)arg3 logMessage:(id)arg4 dataDispatcherContext:(id)arg5;
+ (int)stringNodeNameToEnum:(id)arg1;
+ (int)stringServiceTypeToEnum:(id)arg1;
+ (int)stringXPCSystemEventTypeToEnum:(id)arg1;
+ (bool)tokenizationEnded:(id)arg1 inputType:(int)arg2 metadata:(id)arg3 logMessage:(id)arg4 dataDispatcherContext:(id)arg5;
+ (bool)tokenizationEndedWithMultiResponses:(id)arg1 inputType:(int)arg2 metadata:(id)arg3 logMessage:(id)arg4 dataDispatcherContext:(id)arg5;

@end
