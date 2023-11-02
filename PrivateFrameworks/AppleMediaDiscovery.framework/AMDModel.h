
@interface AMDModel : NSManagedObject

@property (nonatomic, copy) NSString *compiledModelDir;
@property (nonatomic) long long creationTimeSeconds;
@property (nonatomic, copy) NSString *modelId;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *version;

+ (id)deleteAllModelUrls:(id*)arg1;
+ (void)deleteModels:(id)arg1 error:(id*)arg2;
+ (id)deleteWithPredicate:(id)arg1 error:(id*)arg2;
+ (id)fetchAll:(id*)arg1;
+ (id)fetchRequest;
+ (id)getCurrentModelInfoByModelId;
+ (id)getModelInfo:(id)arg1 error:(id*)arg2;
+ (id)getModelPath:(id)arg1 error:(id*)arg2;
+ (id)getModelPathForUsecase:(id)arg1 inDomain:(id)arg2 forModelId:(id)arg3 withTreatmentId:(id)arg4 error:(id*)arg5;
+ (void)saveModels:(id)arg1 error:(id*)arg2;

@end
