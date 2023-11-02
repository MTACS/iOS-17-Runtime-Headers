
@interface _PSRuleOverlapFeedback : NSObject {
    BMBehaviorRetriever * _behaviorRetriever;
    _PSConfidenceModelForSharing * _confidenceModelForSharing;
    CNContactStore * _contactStore;
    _CDInteractionStore * _interactionStore;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    NSUserDefaults * _ruleOverlapFeedbackDefaults;
    _PSRuleRankingMLModel * _ruleRankingModel;
}

@property (nonatomic, readonly) BMBehaviorRetriever *behaviorRetriever;
@property (nonatomic, retain) _PSConfidenceModelForSharing *confidenceModelForSharing;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) _CDInteractionStore *interactionStore;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *knowledgeStore;
@property (nonatomic, retain) NSUserDefaults *ruleOverlapFeedbackDefaults;
@property (retain) _PSRuleRankingMLModel *ruleRankingModel;

- (void).cxx_destruct;
- (id)behaviorRetriever;
- (int)bucketedValue:(int)arg1;
- (id)confidenceModelForSharing;
- (id)constantFeaturesFromContextItems:(id)arg1;
- (id)constantPETFeaturesFromContextItems:(id)arg1;
- (id)contactStore;
- (id)contextItemsFromEvent:(id)arg1;
- (id)feedbackPETPayloadForRule:(id)arg1 ForInteraction:(id)arg2 ForContextItems:(id)arg3 WithConstantFeatures:(id)arg4;
- (id)feedbackPayloadForRule:(id)arg1 ForInteraction:(id)arg2 ForContextItems:(id)arg3 WithConstantFeatures:(id)arg4;
- (id)getSessionID;
- (id)init;
- (id)interactionStore;
- (id)interactionStoreEventsSinceDate:(id)arg1;
- (id)knowledgeStore;
- (void)loggingForKnowledgeStoreEvent:(id)arg1 WithMatchingInteraction:(id)arg2;
- (id)loggingTrainDataForContactFillerModel:(id)arg1 withMatchingInteraction:(id)arg2 interactionRecipients:(id)arg3 ruleRankingModel:(id)arg4 contactPropertyCache:(id)arg5 interactionCache:(id)arg6;
- (id)matchFeedbackEvent:(id)arg1 WithInteractions:(id)arg2;
- (void)modelAccuracyLogging:(id)arg1 WithMatchingInteraction:(id)arg2;
- (void)reviewLastDayOfShares;
- (id)ruleOverlapFeedbackDefaults;
- (id)ruleRankingModel;
- (void)scoreRanking:(long long)arg1 forModelKey:(id)arg2;
- (void)setConfidenceModelForSharing:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setInteractionStore:(id)arg1;
- (void)setKnowledgeStore:(id)arg1;
- (void)setRuleOverlapFeedbackDefaults:(id)arg1;
- (void)setRuleRankingModel:(id)arg1;
- (id)sharesheetFeedbackEventsSinceDate:(id)arg1;
- (bool)targetAppPredictedCorrectlyByRule:(id)arg1 bundleId:(id)arg2;
- (bool)wasInteractionAmongSuggestLess:(id)arg1;
- (void)writeRecordObjcWithData:(id)arg1;

@end
