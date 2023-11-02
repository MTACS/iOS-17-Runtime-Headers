
@interface ATXStressTestDataGenerator : NSObject

- (id)_startCallIntentWithRecipientName:(id)arg1;
- (void)_updateActionFeedbackWithConfirmsAndRejects;
- (void)_updateDonationPipelineWithIntentsAndNSUAs;
- (id)_visitWebpageNSUAForURLString:(id)arg1;
- (void)clearAllDataForStressCycler;
- (void)clearAllDataForStressCyclerWithCompletion:(id /* block */)arg1;
- (void)clearDataForBehavioralActionPredictions;
- (void)enumerateSampleIntentAndUserActivityATXActionsWithBlock:(id /* block */)arg1;
- (void)enumerateSampleIntentAndUserActivityEventsWithBlock:(id /* block */)arg1;
- (void)generateDataForBehavioralActionPredictions;
- (void)seedAllDataForStressCycler;
- (void)setupForStressCyclerWithCompletion:(id /* block */)arg1;

@end
