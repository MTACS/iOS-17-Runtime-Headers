
@interface NTPersonalizationFeatureCTRLookupRequest : NSObject <NSCopying> {
    double  _clickPrior;
    double  _impressionPrior;
    FCPersonalizationFeature * _personalizationFeature;
}

@property (nonatomic) double clickPrior;
@property (nonatomic) double impressionPrior;
@property (nonatomic, copy) FCPersonalizationFeature *personalizationFeature;

- (void).cxx_destruct;
- (double)clickPrior;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)impressionPrior;
- (id)init;
- (id)personalizationFeature;
- (void)setClickPrior:(double)arg1;
- (void)setImpressionPrior:(double)arg1;
- (void)setPersonalizationFeature:(id)arg1;

@end
