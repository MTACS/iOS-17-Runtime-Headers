
@protocol BWEspressoInferenceBinding <NSObject>

@required

- (BWInferenceVideoRequirement *)bindEspressoInput:(NSString *)arg1 fromAttachedMediaUsingKey:(NSString *)arg2 withVideoFormat:(BWInferenceVideoFormat *)arg3;
- (BWInferenceVideoRequirement *)bindEspressoInput:(NSString *)arg1 fromAttachedMediaUsingKey:(NSString *)arg2 withVideoFormat:(BWInferenceVideoFormat *)arg3 count:(unsigned long long)arg4;
- (BWInferenceMetadataRequirement *)bindEspressoInput:(NSString *)arg1 fromMetadataUsingKeys:(NSArray *)arg2;
- (BWInferenceVideoRequirement *)bindEspressoOutput:(NSString *)arg1 asAttachedMediaUsingKey:(NSString *)arg2 withVideoFormat:(BWInferenceVideoFormat *)arg3;
- (BWInferenceVideoRequirement *)bindEspressoOutput:(NSString *)arg1 asAttachedMediaUsingKey:(NSString *)arg2 withVideoFormat:(BWInferenceVideoFormat *)arg3 count:(unsigned long long)arg4;
- (BWInferenceMetadataRequirement *)bindEspressoOutput:(NSString *)arg1 asConsolidatedMetadataUsingKeys:(NSArray *)arg2;
- (BWInferenceMetadataRequirement *)bindEspressoOutput:(NSString *)arg1 asMetadataUsingKey:(NSString *)arg2;
- (BWInferenceMetadataRequirement *)bindEspressoOutput:(NSString *)arg1 asMetadataUsingKeys:(NSArray *)arg2;
- (BWInferenceCloneVideoRequirement *)bindOutputByCloningInputRequirement:(BWInferenceVideoRequirement *)arg1 toAttachedMediaUsingKey:(NSString *)arg2;

@end
