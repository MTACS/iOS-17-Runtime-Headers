
@interface MLFeatureProviderConformer : NSObject {
    NSDictionary * _defaultValues;
    NSArray * _featureDescriptions;
    NSDictionary * _optionalInputTypes;
    bool  _usingRank5Mapping;
}

@property (nonatomic, readonly, copy) NSDictionary *defaultValues;
@property (nonatomic, readonly, copy) NSArray *featureDescriptions;
@property (nonatomic, readonly, copy) NSDictionary *optionalInputTypes;
@property (nonatomic, readonly) bool usingRank5Mapping;

- (void).cxx_destruct;
- (id)_fabricateFeatureForDescription:(id)arg1 error:(id*)arg2;
- (bool)_sequenceConcatConsumesOptionalInputNamed:(id)arg1;
- (id)conformFeatures:(id)arg1 error:(id*)arg2;
- (id)defaultValues;
- (id)featureDescriptions;
- (id)initWithFeatureDescriptions:(id)arg1 defaultValues:(id)arg2 usingRank5Mapping:(bool)arg3 optionalInputTypes:(id)arg4;
- (id)optionalInputTypes;
- (bool)usingRank5Mapping;

@end
