
@interface PPSocialHighlightFeaturizer : NSObject {
    NSDictionary * _featureValues;
}

@property (nonatomic, readonly) NSDictionary *featureValues;

+ (id)trialSpecifiedFeatures;

- (void).cxx_destruct;
- (id)featureValues;
- (id)featurizeHighlights:(id)arg1;
- (id)initWithFeatureValues:(id)arg1;
- (id)initWithFeedbackPublisher:(id)arg1 topicStore:(id)arg2 interactionStore:(id)arg3 significantContactHandles:(id)arg4 features:(id)arg5 highlights:(id)arg6;

@end
