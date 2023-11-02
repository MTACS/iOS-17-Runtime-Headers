
@interface PGTrendsConfiguration : PGConfiguration <PGTrendsConfigurationProtocol> {
    NSString * _featureLabel;
    NSArray * _negativeScenes;
    NSArray * _positiveDominantScenes;
    NSArray * _positiveScenes;
    NSArray * _positiveSemDevScenes;
    NSArray * _secondaryPositiveScenes;
    NSArray * _validTrendTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *negativeScenes;
@property (nonatomic, readonly) NSArray *positiveDominantScenes;
@property (nonatomic, readonly) NSArray *positiveScenes;
@property (nonatomic, readonly) NSArray *positiveSemDevScenes;
@property (nonatomic, readonly) NSArray *secondaryPositiveScenes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *validTrendTypes;

- (void).cxx_destruct;
- (id)featureLabel;
- (id)negativeScenes;
- (id)positiveDominantScenes;
- (id)positiveScenes;
- (id)positiveSemDevScenes;
- (id)secondaryPositiveScenes;
- (id)validTrendTypes;

@end
