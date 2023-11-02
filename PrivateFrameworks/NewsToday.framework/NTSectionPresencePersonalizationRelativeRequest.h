
@interface NTSectionPresencePersonalizationRelativeRequest : NSObject <NSCopying> {
    FCPersonalizationFeature * _competingSectionFeature;
    double  _competingSectionFeatureClickPrior;
    double  _competingSectionFeatureImpressionPrior;
    double  _scalar;
    FCPersonalizationFeature * _targetSectionFeature;
    double  _targetSectionFeatureClickPrior;
    double  _targetSectionFeatureImpressionPrior;
}

@property (nonatomic, copy) FCPersonalizationFeature *competingSectionFeature;
@property (nonatomic) double competingSectionFeatureClickPrior;
@property (nonatomic) double competingSectionFeatureImpressionPrior;
@property (nonatomic) double scalar;
@property (nonatomic, copy) FCPersonalizationFeature *targetSectionFeature;
@property (nonatomic) double targetSectionFeatureClickPrior;
@property (nonatomic) double targetSectionFeatureImpressionPrior;

- (void).cxx_destruct;
- (id)competingSectionFeature;
- (double)competingSectionFeatureClickPrior;
- (double)competingSectionFeatureImpressionPrior;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (double)scalar;
- (void)setCompetingSectionFeature:(id)arg1;
- (void)setCompetingSectionFeatureClickPrior:(double)arg1;
- (void)setCompetingSectionFeatureImpressionPrior:(double)arg1;
- (void)setScalar:(double)arg1;
- (void)setTargetSectionFeature:(id)arg1;
- (void)setTargetSectionFeatureClickPrior:(double)arg1;
- (void)setTargetSectionFeatureImpressionPrior:(double)arg1;
- (id)targetSectionFeature;
- (double)targetSectionFeatureClickPrior;
- (double)targetSectionFeatureImpressionPrior;

@end
