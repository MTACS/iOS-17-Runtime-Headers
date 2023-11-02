
@interface PHAPrivateFederatedLearningFiltersDecoder : NSObject {
    NSDictionary * _assetFeatureExtractorNameToClass;
    NSDictionary * _assetPhotoLibraryFeatureExtractorNameToClass;
    NSDictionary * _facesFeatureExtractorNameToClass;
    NSString * _fingerprintVersionString;
    NSDictionary * _graphFeatureExtractorNameToClass;
}

@property (nonatomic, readonly) NSDictionary *assetFeatureExtractorNameToClass;
@property (nonatomic, readonly) NSDictionary *assetPhotoLibraryFeatureExtractorNameToClass;
@property (nonatomic, readonly) NSDictionary *facesFeatureExtractorNameToClass;
@property (nonatomic, readonly) NSString *fingerprintVersionString;
@property (nonatomic, readonly) NSDictionary *graphFeatureExtractorNameToClass;

- (void).cxx_destruct;
- (bool)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;
- (id)assetFeatureExtractorNameToClass;
- (id)assetPhotoLibraryFeatureExtractorNameToClass;
- (id)facesFeatureExtractorNameToClass;
- (id)featureExtractorFromName:(id)arg1 error:(id*)arg2;
- (long long)featureExtractorTypeForFeatureExtractorName:(id)arg1;
- (id)featureValidatorForFilterConfig:(id)arg1 featureExtractor:(id)arg2 featureValidatorType:(long long)arg3 featureExtractorType:(long long)arg4 error:(id*)arg5;
- (long long)featureValidatorTypeForFeatureExtractorName:(id)arg1;
- (id)featureValidatorsForFilterConfigList:(id)arg1 featureExtractor:(id)arg2 featureValidatorType:(long long)arg3 featureExtractorType:(long long)arg4 error:(id*)arg5;
- (id)filtersByDatasetNameFromDictionary:(id)arg1 error:(id*)arg2;
- (id)filtersFromDictionary:(id)arg1 error:(id*)arg2;
- (id)fingerprintVersionString;
- (id)graphFeatureExtractorNameToClass;
- (id)initWithFingeprintVersionString:(id)arg1;
- (bool)validateFiltersForDatasetName:(id)arg1 error:(id*)arg2;

@end
