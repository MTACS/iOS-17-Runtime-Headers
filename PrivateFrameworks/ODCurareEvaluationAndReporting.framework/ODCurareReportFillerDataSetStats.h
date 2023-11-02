
@interface ODCurareReportFillerDataSetStats : PBCodable <NSCopying> {
    NSString * _featureName;
    NSString * _featureValueMax;
    NSString * _featureValueMean;
    NSString * _featureValueMin;
    NSString * _featureValuePercentile10;
    NSString * _featureValuePercentile25;
    NSString * _featureValuePercentile50;
    NSString * _featureValuePercentile75;
    NSString * _featureValuePercentile90;
    NSString * _featureValueStd;
}

@property (nonatomic, retain) NSString *featureName;
@property (nonatomic, retain) NSString *featureValueMax;
@property (nonatomic, retain) NSString *featureValueMean;
@property (nonatomic, retain) NSString *featureValueMin;
@property (nonatomic, retain) NSString *featureValuePercentile10;
@property (nonatomic, retain) NSString *featureValuePercentile25;
@property (nonatomic, retain) NSString *featureValuePercentile50;
@property (nonatomic, retain) NSString *featureValuePercentile75;
@property (nonatomic, retain) NSString *featureValuePercentile90;
@property (nonatomic, retain) NSString *featureValueStd;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureName;
- (id)featureValueMax;
- (id)featureValueMean;
- (id)featureValueMin;
- (id)featureValuePercentile10;
- (id)featureValuePercentile25;
- (id)featureValuePercentile50;
- (id)featureValuePercentile75;
- (id)featureValuePercentile90;
- (id)featureValueStd;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeatureName:(id)arg1;
- (void)setFeatureValueMax:(id)arg1;
- (void)setFeatureValueMean:(id)arg1;
- (void)setFeatureValueMin:(id)arg1;
- (void)setFeatureValuePercentile10:(id)arg1;
- (void)setFeatureValuePercentile25:(id)arg1;
- (void)setFeatureValuePercentile50:(id)arg1;
- (void)setFeatureValuePercentile75:(id)arg1;
- (void)setFeatureValuePercentile90:(id)arg1;
- (void)setFeatureValueStd:(id)arg1;
- (void)writeTo:(id)arg1;

@end
