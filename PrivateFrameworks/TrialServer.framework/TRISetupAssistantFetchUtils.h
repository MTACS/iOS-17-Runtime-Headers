
@interface TRISetupAssistantFetchUtils : NSObject

+ (id)getIncompatibleNamespaceNamesForTriClientRollout:(id)arg1 namespaceDescriptorProvider:(id)arg2;
+ (id)getNamespaceNamesWithFetchDuringSetupAssistantEnabledWithTRIPaths:(id)arg1;
+ (id)getValueInKeyValueStore:(id)arg1 key:(id)arg2 error:(id*)arg3;
+ (id)registerFinalizeBlockForDownloadLatencyTelemetryWithServerContext:(id)arg1;
+ (bool)removeNamespaceNamesWithRolloutForServerContext:(id)arg1 namespaceNames:(id)arg2;
+ (bool)setValueInKeyValueStore:(id)arg1 key:(id)arg2 value:(id)arg3 error:(id*)arg4;
+ (bool)stopSetupAssistantFetchWithServerContext:(id)arg1 namespaceNames:(id)arg2 error:(id*)arg3;

@end
