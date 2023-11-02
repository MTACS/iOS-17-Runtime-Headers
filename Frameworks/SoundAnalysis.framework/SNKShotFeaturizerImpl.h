
@interface SNKShotFeaturizerImpl : NSObject <SNKShotFeaturizerProtocol>

+ (id /* block */)defaultRandomNumberGenerator;
+ (bool)ensureIsValidHallucinatorV3Model:(id)arg1 error:(id*)arg2;
+ (id)featurizeFiles:(id)arg1 hallucinatorModelURL:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)featurizeFiles:(id)arg1 hallucinatorModelURL:(id)arg2 queue:(id)arg3 resultHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
+ (id)featurizeFiles:(id)arg1 randomNumberGenerator:(id /* block */)arg2 hallucinatorModelURL:(id)arg3 error:(id*)arg4;
+ (id)labelFromNumberRepresentation:(id)arg1 error:(id*)arg2;
+ (id)performSegmentationRequest:(id)arg1 error:(id*)arg2;
+ (id)plistFromFeaturizationResult:(id)arg1 error:(id*)arg2;
+ (id)plistFromFeaturizationStreamCompletion:(id)arg1 error:(id*)arg2;
+ (id)plistFromFeaturizationStreamResult:(id)arg1 error:(id*)arg2;
+ (id)plistFromFeaturizationStreamResults:(id)arg1 error:(id*)arg2;
+ (id)plistFromFeaturizationStreamResults:(id)arg1 streamCompletion:(id)arg2 error:(id*)arg3;
+ (id)plistStringFromDatasetType:(long long)arg1 error:(id*)arg2;
+ (id)plistStringFromLabel:(id)arg1 error:(id*)arg2;
+ (id /* block */)pseudoRandomNumberGeneratorWithSeed:(unsigned int)arg1;
+ (id)readNumRepetitionsPerTimeShiftFromHallucinator:(id)arg1 error:(id*)arg2;
+ (id)readNumTimeShiftsPerSegmentFromHallucinator:(id)arg1 error:(id*)arg2;
+ (int)recognizeHallucinatorModel:(id)arg1 error:(id*)arg2;
+ (id)streamCompletionFromFeaturizationResult:(id)arg1;
+ (id)streamResultWithEmbedding:(id)arg1 label:(id)arg2 dataset:(long long)arg3 error:(id*)arg4;
+ (id)streamResultsForDatasetType:(long long)arg1 embeddings:(id)arg2 labels:(id)arg3 error:(id*)arg4;
+ (id)streamResultsFromFeaturizationResult:(id)arg1 error:(id*)arg2;

@end
