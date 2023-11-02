
@interface FCNewsPersonalizationConfiguration : NSObject {
    FCNewsArticleEmbeddingsConfiguration * _articleEmbeddingsConfiguration;
    FCNewsPersonalizationFeatureConfiguration * _featureConfiguration;
    FCStatelessPersonalizationConfiguration * _statelessPersonalizationConfiguration;
    FCUserEventHistoryTrackingConfiguration * _trackingConfiguration;
    FCNewsPersonalizationTrainingConfiguration * _trainingConfiguration;
}

@property (nonatomic, retain) FCNewsArticleEmbeddingsConfiguration *articleEmbeddingsConfiguration;
@property (nonatomic, retain) FCNewsPersonalizationFeatureConfiguration *featureConfiguration;
@property (nonatomic, retain) FCStatelessPersonalizationConfiguration *statelessPersonalizationConfiguration;
@property (nonatomic, retain) FCUserEventHistoryTrackingConfiguration *trackingConfiguration;
@property (nonatomic, retain) FCNewsPersonalizationTrainingConfiguration *trainingConfiguration;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)articleEmbeddingsConfiguration;
- (id)description;
- (id)featureConfiguration;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)setArticleEmbeddingsConfiguration:(id)arg1;
- (void)setFeatureConfiguration:(id)arg1;
- (void)setStatelessPersonalizationConfiguration:(id)arg1;
- (void)setTrackingConfiguration:(id)arg1;
- (void)setTrainingConfiguration:(id)arg1;
- (id)statelessPersonalizationConfiguration;
- (id)trackingConfiguration;
- (id)trainingConfiguration;

@end
