
@interface NTSectionPresencePersonalizationAbsoluteRequest : NSObject <NSCopying> {
    NSObject<NTAbsolutePersonalizedSectionPresenceConfig> * _absolutePresenceConfig;
    FCPersonalizationFeature * _feature;
    double  _featureClickPrior;
    double  _featureImpressionPrior;
}

@property (nonatomic, copy) NSObject<NTAbsolutePersonalizedSectionPresenceConfig> *absolutePresenceConfig;
@property (nonatomic, copy) FCPersonalizationFeature *feature;
@property (nonatomic) double featureClickPrior;
@property (nonatomic) double featureImpressionPrior;

- (void).cxx_destruct;
- (id)absolutePresenceConfig;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feature;
- (double)featureClickPrior;
- (double)featureImpressionPrior;
- (id)init;
- (void)setAbsolutePresenceConfig:(id)arg1;
- (void)setFeature:(id)arg1;
- (void)setFeatureClickPrior:(double)arg1;
- (void)setFeatureImpressionPrior:(double)arg1;

@end
