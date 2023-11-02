
@interface PPEventFeatureScore : NSObject <NSCopying> {
    NSArray * _featureValues;
    unsigned long long  _ocnt_precomputedHash;
    unsigned long long  _prominentFeature;
    double  _weightedScore;
}

@property (nonatomic, readonly) NSArray *featureValues;
@property (nonatomic, readonly) unsigned long long prominentFeature;
@property (nonatomic, readonly) double weightedScore;

+ (id)eventFeatureScoreWithFeatureValues:(id)arg1 weightedScore:(double)arg2 prominentFeature:(unsigned long long)arg3;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithReplacementFeatureValues:(id)arg1;
- (id)copyWithReplacementProminentFeature:(unsigned long long)arg1;
- (id)copyWithReplacementWeightedScore:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)featureValues;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFeatureValues:(id)arg1 weightedScore:(double)arg2 prominentFeature:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEventFeatureScore:(id)arg1;
- (unsigned long long)prominentFeature;
- (double)weightedScore;

@end
