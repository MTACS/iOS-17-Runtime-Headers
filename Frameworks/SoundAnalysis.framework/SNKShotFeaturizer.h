
@interface SNKShotFeaturizer : NSObject

+ (id)featurizeFiles:(id)arg1 hallucinatorModelURL:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)featurizeFiles:(id)arg1 hallucinatorModelURL:(id)arg2 queue:(id)arg3 resultHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
+ (id)performSegmentationRequest:(id)arg1 error:(id*)arg2;
+ (id)plistFromFeaturizationResult:(id)arg1 error:(id*)arg2;

- (id)init;

@end
