
@interface AMDWorkflowInFlight : NSManagedObject

@property (nonatomic, copy) NSString *callUUID;
@property (nonatomic) long long creationTime;
@property (nonatomic) short domain;
@property (nonatomic) long long endTime;
@property (nonatomic, copy) NSString *modelId;
@property (nonatomic, copy) NSString *secondaryModelId;
@property (nonatomic) long long startTime;
@property (nonatomic, copy) NSString *treatmentId;
@property (nonatomic, copy) NSString *useCaseId;
@property (nonatomic, retain) NSData *workflow;

+ (id)deleteAllInflightWorkflows:(id*)arg1;
+ (id)deleteWithPredicates:(id)arg1 error:(id*)arg2;
+ (id)deleteWorkflowForDomain:(long long)arg1 withModelId:(id)arg2 withSecondaryModelId:(id)arg3 andUsecaseId:(id)arg4 andTreatmentId:(id)arg5 error:(id*)arg6;
+ (id)fetchAllModelIds:(id*)arg1;
+ (id)fetchAllWorkflowEntries:(id*)arg1;
+ (id)fetchAllWorkflows:(id*)arg1;
+ (id)fetchRequest;
+ (id)getAllWorkflowsForDomain:(long long)arg1 withModelId:(id)arg2 error:(id*)arg3;
+ (id)getAllWorkflowsWithModelId:(id)arg1 error:(id*)arg2;
+ (id)moveInflightWorkflowsToWorkflows:(id)arg1 withDomain:(long long)arg2 error:(id*)arg3;
+ (void)saveWorkflow:(id)arg1 forDomain:(long long)arg2 withCallUUID:(id)arg3 error:(id*)arg4;

@end
