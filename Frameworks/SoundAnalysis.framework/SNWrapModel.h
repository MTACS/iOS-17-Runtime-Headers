
@interface SNWrapModel : NSObject

+ (id)generateFeatureMappingsFromOuterFeatureNames:(id)arg1 toInnerFeatureNames:(id)arg2;
+ (id)generateFeatureMappingsFromOuterFeatureNames:(id)arg1 toInnerFeatureNames:(id)arg2 matcher:(id /* block */)arg3;
+ (id)generateInputFeatureMappingsFromOuterDescription:(id)arg1 toInnerDescription:(id)arg2;
+ (id)generateOutputFeatureMappingsFromOuterDescription:(id)arg1 toInnerDescription:(id)arg2;
+ (id)innerInputFeatureProviderFromOuter:(id)arg1 outerToInnerInputFeatureNameMappings:(id)arg2 error:(id*)arg3;
+ (id)outerOutputFeatureProviderFromInner:(id)arg1 outerToInnerOutputFeatureNameMappings:(id)arg2 error:(id*)arg3;

- (id)init;

@end
