
@protocol CLSSimilarityModel <NSObject>

@required

- (double)identicalSimilarityDistanceThreshold;
- (double)identicalSimilarityWithPeopleDistanceThreshold;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (unsigned long long)metric;
- (double)semanticalSimilarityDistanceThreshold;
- (double)semanticalSimilarityWithPeopleDistanceThreshold;
- (double)semanticalSimilarityWithPersonDistanceThreshold;
- (unsigned long long)version;

@end
