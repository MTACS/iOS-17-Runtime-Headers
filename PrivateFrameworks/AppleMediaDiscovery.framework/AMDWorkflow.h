
@interface AMDWorkflow : NSManagedObject

@property (nonatomic, copy) NSString *callUUID;
@property (nonatomic) short domain;
@property (nonatomic) long long endTime;
@property (nonatomic, copy) NSString *modelId;
@property (nonatomic, copy) NSString *secondaryModelId;
@property (nonatomic) long long startTime;
@property (nonatomic, copy) NSString *treatmentId;
@property (nonatomic, copy) NSString *useCaseId;
@property (nonatomic, retain) NSData *workflow;

+ (void)addWorkflowsFromInflightTable:(id)arg1 error:(id*)arg2;
+ (id)deleteAllWorkflows:(id*)arg1;
+ (id)deleteWithPredicate:(id)arg1 error:(id*)arg2;
+ (id)deleteWorkflowForDomain:(long long)arg1 withModelId:(id)arg2 withSecondaryModelId:(id)arg3 andUsecaseId:(id)arg4 andTreatmentId:(id)arg5 error:(id*)arg6;
+ (id)deleteWorkflowsForDomain:(long long)arg1 andTreatmentId:(id)arg2 andUseCaseId:(id)arg3 error:(id*)arg4;
+ (id)deleteWorkflowsForDomain:(long long)arg1 error:(id*)arg2;
+ (id)deleteWorkflowsForModelId:(id)arg1 error:(id*)arg2;
+ (id)fetchAllWorkflows:(id*)arg1;
+ (id)fetchRequest;
+ (id)fetchWithPredicates:(id)arg1 error:(id*)arg2;
+ (id)getAllActiveWorkflowsForDomain:(long long)arg1 andUseCaseId:(id)arg2 error:(id*)arg3;
+ (id)getAllWorkflowsForDomain:(long long)arg1 withUseCaseId:(id)arg2 error:(id*)arg3;
+ (id)getCurrentWorkflowForDomain:(long long)arg1 andTreatmentId:(id)arg2 andUseCaseId:(id)arg3 error:(id*)arg4;
+ (id)getWorkflowsForDomain:(long long)arg1 andTreatmentId:(id)arg2 andUseCaseId:(id)arg3 error:(id*)arg4;
+ (id)getWorkflowsForDomain:(long long)arg1 error:(id*)arg2;
+ (id)getWorkflowsForModelId:(id)arg1 error:(id*)arg2;
+ (id)performWorkflowCleanupForDomain:(long long)arg1 error:(id*)arg2;
+ (void)saveWorkflow:(id)arg1 forDomain:(long long)arg2 withCallUUID:(id)arg3 error:(id*)arg4;

@end
