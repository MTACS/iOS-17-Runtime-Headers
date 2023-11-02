
@interface TRICKOperationGroupFactory : NSObject

+ (id)groupForBMLTId:(id)arg1;
+ (id)groupForDownloadOptions:(id)arg1;
+ (id)groupForExperimentId:(id)arg1;
+ (id)groupForRolloutId:(id)arg1;
+ (id)groupForScheduledFetch;
+ (id)groupForUserInitiatedFetch;

@end
