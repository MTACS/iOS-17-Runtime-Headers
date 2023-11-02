
@interface DSPGMLInputProvider : NSObject <MLFeatureProvider> {
    NSArray * _allInputFeatureNames;
    NSMutableDictionary * _featureCache;
    MLFeatureDescription * _featureDescription;
    MLMultiArray * _input;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
