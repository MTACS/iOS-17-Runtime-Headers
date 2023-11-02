
@interface REMetadataPredictor : REPredictor {
    NSMutableDictionary * _interactionFeatureValueCache;
    NSMutableDictionary * _sectionFeatureValueCache;
}

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)_init;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)update;

@end
