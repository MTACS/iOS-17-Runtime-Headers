
@interface PPFeedbackUtils : NSObject

+ (void)addBoilerplateToFeedbackLog:(id)arg1;
+ (id)featuresForScoreDict:(id)arg1;
+ (id)feedbackItemForPPFeedbackItem:(id)arg1;
+ (id)feedbackItemsByItemString:(id)arg1;
+ (id)feedbackMetadataForBaseFeedback:(id)arg1;
+ (void)recordUniversalSearchSpotlightStatsFromFeedback:(id)arg1 clientBundleId:(id)arg2 clientIdentifier:(id)arg3;
+ (void)recordUserEventsFromFeedback:(id)arg1 matchingFeedbackItems:(id)arg2 clientBundleId:(id)arg3 clientIdentifier:(id)arg4 domain:(unsigned char)arg5;
+ (id)scoredItemWithFeaturesForFeatureDictionary:(id)arg1 score:(float)arg2;
+ (bool)shouldSample:(id)arg1;
+ (bool)shouldSampleExtraction:(id)arg1;

@end
