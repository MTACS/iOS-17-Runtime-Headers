
@interface AMDJSConfigProcessor : NSObject

+ (id)getBinariesToFetch:(id)arg1 withCurrentColdstartInfo:(id)arg2 andAMDColdstartBinariesToDelete:(id)arg3 andSummaryContainer:(id)arg4;
+ (id)getModelsToFetch:(id)arg1 withCurrentModelInfo:(id)arg2 andAMDModlsToDelete:(id)arg3 andSummaryContainer:(id)arg4;
+ (id)getUrlsWithVersion:(id)arg1;
+ (id)processConfig:(id)arg1 withCallUUID:(id)arg2 error:(id*)arg3;
+ (id)refreshDescriptors:(id)arg1 forDomain:(id)arg2;
+ (id)saveInAppSegmentsWorkflow:(id)arg1 inDomain:(id)arg2 withCallUUID:(id)arg3 andSummaryContainer:(id)arg4;
+ (id)saveInFlightWorkflows:(id)arg1 forModels:(id)arg2 inDomain:(id)arg3 withCallUUID:(id)arg4 error:(id*)arg5;
+ (id)validateConfig:(id)arg1 forDomain:(id)arg2;

@end
