
@protocol SNKShotFeaturizerProtocol

@required

+ (id /* block */)defaultRandomNumberGenerator:(void *)arg1; // needs 1 arg types, found 5: id /* block */, unsigned int, void*, id, SEL
+ (bool)ensureIsValidHallucinatorV3Model:(MLModel *)arg1 error:(id*)arg2;
+ (<SNKShotCancellable> *)featurizeFiles:(void *)arg1 hallucinatorModelURL:(void *)arg2 queue:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSURL *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
+ (<SNKShotCancellable> *)featurizeFiles:(void *)arg1 hallucinatorModelURL:(void *)arg2 queue:(void *)arg3 resultHandler:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 16: NSArray *, NSURL *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, id /* block */, void*, void, id /* block */, id, NSError *, void*
+ (id)featurizeFiles:(void *)arg1 randomNumberGenerator:(void *)arg2 hallucinatorModelURL:(void *)arg3 error:(void *)arg4; // needs 4 arg types, found 9: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, unsigned int, id /* block */, unsigned int, void*, NSURL *, id*
+ (id)labelFromNumberRepresentation:(NSNumber *)arg1 error:(id*)arg2;
+ (id)performSegmentationRequest:(id)arg1 error:(id*)arg2;
+ (NSDictionary *)plistFromFeaturizationResult:(id)arg1 error:(id*)arg2;
+ (NSDictionary *)plistFromFeaturizationStreamCompletion:(id)arg1 error:(id*)arg2;
+ (NSDictionary *)plistFromFeaturizationStreamResult:(id)arg1 error:(id*)arg2;
+ (NSDictionary *)plistFromFeaturizationStreamResults:(NSArray *)arg1 error:(id*)arg2;
+ (NSDictionary *)plistFromFeaturizationStreamResults:(NSArray *)arg1 streamCompletion:(id)arg2 error:(id*)arg3;
+ (NSString *)plistStringFromDatasetType:(long long)arg1 error:(id*)arg2;
+ (NSString *)plistStringFromLabel:(id)arg1 error:(id*)arg2;
+ (id /* block */)pseudoRandomNumberGeneratorWithSeed:(void *)arg1; // needs 1 arg types, found 6: id /* block */, unsigned int, void*, id, SEL, unsigned int
+ (NSNumber *)readNumRepetitionsPerTimeShiftFromHallucinator:(MLModel *)arg1 error:(id*)arg2;
+ (NSNumber *)readNumTimeShiftsPerSegmentFromHallucinator:(MLModel *)arg1 error:(id*)arg2;
+ (int)recognizeHallucinatorModel:(MLModel *)arg1 error:(id*)arg2;
+ (id)streamCompletionFromFeaturizationResult:(id)arg1;
+ (id)streamResultWithEmbedding:(MLMultiArray *)arg1 label:(NSNumber *)arg2 dataset:(long long)arg3 error:(id*)arg4;
+ (NSArray *)streamResultsForDatasetType:(long long)arg1 embeddings:(NSArray *)arg2 labels:(NSArray *)arg3 error:(id*)arg4;
+ (NSArray *)streamResultsFromFeaturizationResult:(id)arg1 error:(id*)arg2;

@end
