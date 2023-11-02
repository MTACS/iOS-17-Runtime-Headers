
@interface CLSCuratedLibrarySimilarityModel : NSObject <CLSSimilarityModel> {
    double  _identicalSimilarityDistanceThreshold;
    double  _identicalSimilarityWithPeopleDistanceThreshold;
    unsigned long long  _metric;
    double  _semanticalSimilarityDistanceThreshold;
    double  _semanticalSimilarityWithPeopleDistanceThreshold;
    double  _semanticalSimilarityWithPersonDistanceThreshold;
    unsigned long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double identicalSimilarityDistanceThreshold;
@property (readonly) double identicalSimilarityWithPeopleDistanceThreshold;
@property (readonly) unsigned long long metric;
@property (readonly) double semanticalSimilarityDistanceThreshold;
@property (readonly) double semanticalSimilarityWithPeopleDistanceThreshold;
@property (readonly) double semanticalSimilarityWithPersonDistanceThreshold;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version;

+ (unsigned long long)latestVersion;
+ (id)name;

- (double)identicalSimilarityDistanceThreshold;
- (double)identicalSimilarityWithPeopleDistanceThreshold;
- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (unsigned long long)metric;
- (double)semanticalSimilarityDistanceThreshold;
- (double)semanticalSimilarityWithPeopleDistanceThreshold;
- (double)semanticalSimilarityWithPersonDistanceThreshold;
- (void)setupVersion33;
- (void)setupVersion80;
- (void)setupVersion84;
- (unsigned long long)version;

@end
