
@interface CLSSimilarStacker : NSObject {
    double  _distanceThresholdForIdenticalSimilarity;
    double  _distanceThresholdForIdenticalSimilarityWithPeople;
    double  _distanceThresholdForSemanticalSimilarity;
    double  _distanceThresholdForSemanticalSimilarityWithPeople;
    double  _distanceThresholdForSemanticalSimilarityWithPersons;
    id /* block */  _sceneprintGetterBlock;
    NSMutableDictionary * _similarityModelByVersion;
    Class  _similarityModelClass;
}

@property (nonatomic, copy) id /* block */ sceneprintGetterBlock;

+ (id /* block */)distanceBlockWithMetric:(unsigned long long)arg1 sceneprintGetterBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_similarityModelForVersion:(unsigned long long)arg1;
- (id)adaptiveStackSimilarItems:(id)arg1 progressBlock:(id /* block */)arg2;
- (double)distanceBetweenItem:(id)arg1 andItem:(id)arg2;
- (double)distanceThresholdForSimilarity:(long long)arg1 similarityModel:(id)arg2;
- (double)distanceThresholdForSimilarity:(long long)arg1 withSimilarityModelVersion:(unsigned long long)arg2;
- (id)initWithSimilarityModelClass:(Class)arg1;
- (void)overrideDistanceThreshold:(double)arg1 forSimilarity:(long long)arg2;
- (id /* block */)sceneprintGetterBlock;
- (void)setSceneprintGetterBlock:(id /* block */)arg1;
- (id /* block */)similarGroupComparator;
- (id)stackSimilarItems:(id)arg1 withSimilarity:(long long)arg2 timestampSupport:(bool)arg3 progressBlock:(id /* block */)arg4;

@end
