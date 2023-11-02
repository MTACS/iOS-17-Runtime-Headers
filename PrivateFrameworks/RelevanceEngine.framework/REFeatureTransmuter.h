
@interface REFeatureTransmuter : NSObject {
    NSMutableOrderedSet * _featureValuesCache;
    NSLock * _featureValuesCacheLock;
    REFeatureSet * _inputSet;
    REFeatureMapGenerator * _orderedFeatureMapGenerator;
    NSArray * _orderedFeatures;
    REFeatureMapGenerator * _outputFeatureMapGenerator;
    REFeatureSet * _outputSet;
    unsigned long long * _scratchTaggedValues;
    REFeatureMap * _scratchValues;
}

@property (nonatomic, readonly) REFeatureSet *inputFeatures;
@property (nonatomic, readonly) REFeatureSet *outputFeatures;

- (void).cxx_destruct;
- (id)_buildGraph;
- (bool)_supportedFeature:(id)arg1;
- (void)dealloc;
- (id)initWithInputFeatures:(id)arg1 outputFeatures:(id)arg2 outputFeatureMapGenerator:(id)arg3;
- (id)inputFeatures;
- (id)outputFeatures;
- (id)transformFeatureMaps:(id)arg1;

@end
