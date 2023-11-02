
@interface MLKNearestNeighborsClassifierParameters : NSObject {
    NSObject * _defaultLabel;
    long long  _indexType;
    unsigned long long  _leafSize;
    NSString * _nearestDistancesFeatureName;
    NSString * _nearestLabelsFeatureName;
    unsigned long long  _numberOfDimensions;
    long long  _weightingScheme;
}

@property (retain) NSObject *defaultLabel;
@property long long indexType;
@property unsigned long long leafSize;
@property (retain) NSString *nearestDistancesFeatureName;
@property (retain) NSString *nearestLabelsFeatureName;
@property unsigned long long numberOfDimensions;
@property long long weightingScheme;

- (void).cxx_destruct;
- (id)defaultLabel;
- (long long)indexType;
- (unsigned long long)leafSize;
- (id)nearestDistancesFeatureName;
- (id)nearestLabelsFeatureName;
- (unsigned long long)numberOfDimensions;
- (void)setDefaultLabel:(id)arg1;
- (void)setIndexType:(long long)arg1;
- (void)setLeafSize:(unsigned long long)arg1;
- (void)setNearestDistancesFeatureName:(id)arg1;
- (void)setNearestLabelsFeatureName:(id)arg1;
- (void)setNumberOfDimensions:(unsigned long long)arg1;
- (void)setWeightingScheme:(long long)arg1;
- (long long)weightingScheme;

@end
