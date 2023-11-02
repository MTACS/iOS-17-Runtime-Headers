
@interface PHAPrivateFederatedLearningTransformersDecoder : NSObject {
    NSDictionary * _transformerNameToClass;
}

@property (nonatomic, readonly) NSDictionary *transformerNameToClass;

- (void).cxx_destruct;
- (bool)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;
- (id)init;
- (id)instanceForTransformerConfig:(id)arg1 error:(id*)arg2;
- (id)instancesForTransformerConfigList:(id)arg1 error:(id*)arg2;
- (id)transformerNameToClass;
- (id)transformersForFeatureExtractorsFromDictionary:(id)arg1 error:(id*)arg2;

@end
