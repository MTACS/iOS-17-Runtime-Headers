
@interface FCNewsPersonalizationArticleEmbeddingsFittingConfiguration : NSObject {
    FCNewsPersonalizationArticleEmbeddingsFittingRequirements * _articleReadRequirements;
    FCNewsPersonalizationArticleEmbeddingsFittingRequirements * _articleSeenRequirements;
    double  _earliestAllowedEmbeddingEventTimestamp;
    long long  _embeddingType;
    bool  _haltEmbeddingProcessingAfterEncounteringNonMatchingEmbeddingsInSession;
    FCNewsPersonalizationLogisticRegressionClassifierConfiguration * _logisticRegressionClassifierConfiguration;
    NSNumber * _maximumRatioOfArticleSeenEmbeddingsToArticleReadEmbeddings;
}

@property (nonatomic, retain) FCNewsPersonalizationArticleEmbeddingsFittingRequirements *articleReadRequirements;
@property (nonatomic, retain) FCNewsPersonalizationArticleEmbeddingsFittingRequirements *articleSeenRequirements;
@property (nonatomic) double earliestAllowedEmbeddingEventTimestamp;
@property (nonatomic) long long embeddingType;
@property (nonatomic) bool haltEmbeddingProcessingAfterEncounteringNonMatchingEmbeddingsInSession;
@property (nonatomic, retain) FCNewsPersonalizationLogisticRegressionClassifierConfiguration *logisticRegressionClassifierConfiguration;
@property (nonatomic, readonly) NSNumber *maximumRatioOfArticleSeenEmbeddingsToArticleReadEmbeddings;

- (void).cxx_destruct;
- (id)articleReadRequirements;
- (id)articleSeenRequirements;
- (id)description;
- (double)earliestAllowedEmbeddingEventTimestamp;
- (long long)embeddingType;
- (bool)haltEmbeddingProcessingAfterEncounteringNonMatchingEmbeddingsInSession;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)logisticRegressionClassifierConfiguration;
- (id)maximumRatioOfArticleSeenEmbeddingsToArticleReadEmbeddings;
- (void)setArticleReadRequirements:(id)arg1;
- (void)setArticleSeenRequirements:(id)arg1;
- (void)setEarliestAllowedEmbeddingEventTimestamp:(double)arg1;
- (void)setEmbeddingType:(long long)arg1;
- (void)setHaltEmbeddingProcessingAfterEncounteringNonMatchingEmbeddingsInSession:(bool)arg1;
- (void)setLogisticRegressionClassifierConfiguration:(id)arg1;

@end
