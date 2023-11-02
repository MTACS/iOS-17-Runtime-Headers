
@interface AMDOutputBuilder : NSObject {
    NSMutableDictionary * _outputDefinitions;
    NSString * _useCaseId;
}

@property (nonatomic, retain) NSMutableDictionary *outputDefinitions;
@property (nonatomic, retain) NSString *useCaseId;

- (void).cxx_destruct;
- (id)convertMultiArray:(id)arg1 withShape:(id)arg2 atDepth:(unsigned int)arg3 withKey:(id)arg4 withScoreThreshold:(double)arg5 error:(id*)arg6;
- (id)createHeapOfType:(long long)arg1 withCapacity:(unsigned long long)arg2;
- (id)generateMappingDictionary:(id)arg1;
- (id)getAllFeatureIds;
- (id)getOutputfor:(id)arg1 FromMLProvider:(id)arg2 andModelAssets:(id)arg3 withColdstartModelId:(id)arg4 topN:(unsigned long long)arg5 error:(id*)arg6;
- (id)getPredictions:(unsigned long long)arg1 fromMLProvider:(id)arg2 andModelAssets:(id)arg3 withColdstartModelId:(id)arg4 error:(id*)arg5;
- (id)getRemapDictFor:(id)arg1 withModelAssets:(id)arg2;
- (id)getTopN:(unsigned long long)arg1 idsAndScoresFrom:(id)arg2 withMappingDictionary:(id)arg3 withType:(long long)arg4;
- (id)initWithDictionary:(id)arg1 forUseCase:(id)arg2;
- (bool)isValid;
- (id)outputDefinitions;
- (id)process2DMultiArray:(id)arg1 shapeLength:(unsigned int)arg2 withDataType:(long long)arg3 withOutputDefinition:(id)arg4 andModelAssets:(id)arg5 withColdstartModelId:(id)arg6 idsOnly:(bool)arg7 inferenceMode:(id)arg8 error:(id*)arg9;
- (id)processArrayOutput:(id)arg1 withDataType:(long long)arg2 withOutputDefinition:(id)arg3 andModelAssets:(id)arg4 withColdstartModelId:(id)arg5 idsOnly:(bool)arg6 error:(id*)arg7;
- (id)processMultiArrayModelOutput:(id)arg1 withOutputDefinition:(id)arg2 FromMLProvider:(id)arg3 andModelAssets:(id)arg4 withColdstartModelId:(id)arg5 withTopN:(unsigned long long)arg6 error:(id*)arg7;
- (void)setOutputDefinitions:(id)arg1;
- (void)setUseCaseId:(id)arg1;
- (id)useCaseId;

@end
