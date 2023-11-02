
@interface PFLFileStorage : NSObject

+ (id)_compiledModelFileName:(id)arg1;
+ (id)_fileManager;
+ (id)_listFilesAtPath:(id)arg1;
+ (id)_localCacheModelsPath;
+ (id)_localCacheSavedStatesPath;
+ (id)_localCacheUploadResultsPath;
+ (id)_modelFileName:(id)arg1;
+ (id)_modelsFolder;
+ (id)_savedStateFileName:(id)arg1;
+ (id)_savedStatesFolder;
+ (id)_uploadResultsFileName:(id)arg1;
+ (id)_uploadResultsFolder;
+ (void)cleanUnusedResourcesExceptActiveModels:(id)arg1 activeTasks:(id)arg2;
+ (bool)compiledModelExistsForModelId:(id)arg1;
+ (id)compiledModelMoveToLocalCache:(id)arg1 from:(id)arg2;
+ (bool)compiledModelRemoveForModelId:(id)arg1;
+ (id)compiledModelRetrieveForModelId:(id)arg1;
+ (bool)fileExistsAtPath:(id)arg1;
+ (void)initialize;
+ (bool)modelExistsForModelId:(id)arg1;
+ (id)modelMoveToLocalCache:(id)arg1 from:(id)arg2;
+ (id)modelRetrieveForModelId:(id)arg1;
+ (bool)removeFileAtPath:(id)arg1;
+ (bool)savedStateExistsForTaskId:(id)arg1;
+ (bool)savedStateRemoveForTaskId:(id)arg1;
+ (id)savedStateRetrieveForTaskId:(id)arg1;
+ (id)savedStateSave:(id)arg1 forTaskId:(id)arg2;
+ (bool)uploadResultsExistsForTaskId:(id)arg1;
+ (bool)uploadResultsRemoveForTaskId:(id)arg1;
+ (id)uploadResultsRetrieveForTaskId:(id)arg1;
+ (id)uploadResultsSave:(id)arg1 forTaskId:(id)arg2;

@end
