
@interface PGCLIPTrendsConfiguration : PGConfiguration <PGTrendsConfigurationProtocol> {
    NSDictionary * _cosineSimilarityThresholdByVersion;
    NSString * _featureLabel;
    NSArray * _negativeScenes;
    NSArray * _positiveQueries;
    NSArray * _positiveScenes;
    NSNumber * _useAveragedEmbeddingAsNumber;
    NSArray * _validTrendTypes;
}

@property (nonatomic, readonly) NSDictionary *cosineSimilarityThresholdByVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *negativeScenes;
@property (nonatomic, readonly) NSArray *positiveQueries;
@property (nonatomic, readonly) NSArray *positiveScenes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *useAveragedEmbeddingAsNumber;
@property (nonatomic, readonly) NSArray *validTrendTypes;

- (void).cxx_destruct;
- (id)cosineSimilarityThresholdByVersion;
- (id)featureLabel;
- (id)negativeScenes;
- (id)positiveQueries;
- (id)positiveScenes;
- (id)useAveragedEmbeddingAsNumber;
- (id)validTrendTypes;

@end
