
@interface MLPipeline : MLModelEngine <MLPipeline, MLSpecificationCompiler> {
    NSArray * _modelNames;
    NSArray * _models;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *modelNames;
@property (retain) NSArray *models;
@property (readonly) Class superclass;

+ (void)archiveCustomModelNames:(const void*)arg1 to:(void*)arg2;
+ (bool)archivePipelineModelDetailsFrom:(const void*)arg1 toArchive:(void*)arg2 error:(id*)arg3;
+ (void)archivePipelineUpdateParameterForModels:(const void*)arg1 to:(void*)arg2 updatable:(bool)arg3;
+ (id)classLabelsForPipelineFromSubModelArray:(id)arg1 predictedFeatureName:(id)arg2;
+ (id)compileSpecification:(void*)arg1 toArchive:(void*)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)compileWithModelsInPipeline:(const void*)arg1 toArchive:(void*)arg2 options:(id)arg3 updatable:(bool)arg4 error:(id*)arg5;
+ (id)compiledVersionForSpecification:(void*)arg1 options:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_submitPredictionRequestToSubmodel:(unsigned long long)arg1 input:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)executionSchedule;
- (id)extractModelNamesFromArchive:(void*)arg1 numModels:(unsigned long long)arg2;
- (id)initModelFromMetadataAndArchive:(void*)arg1 versionInfo:(id)arg2 description:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
- (id)initWithModels:(id)arg1 modelNames:(id)arg2 description:(id)arg3 configuration:(id)arg4;
- (id)modelNames;
- (id)models;
- (id)parameterValueForKey:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned long long)predictionTypeForKTrace;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)replaceModelAtIndex:(unsigned long long)arg1 with:(id)arg2;
- (void)setModelNames:(id)arg1;
- (void)setModels:(id)arg1;
- (void)submitPredictionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)supportsConcurrentSubmissions;
- (void)updateParameterDescriptionsByKeyBasedOnSubModel;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
