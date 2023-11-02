
@interface CKVSpeechItemRanker_Contact : CKVSpeechItemRanker {
    NSObject<CKVPriorRetriever> * _priorRetriever;
    NSString * _trialExperimentBoostingStrategy;
    bool  _trialTreatmentActive;
}

- (void).cxx_destruct;
- (void)_activateEnrolledTrialExperiments;
- (bool)addDataset:(id)arg1;
- (bool)enumerateRankedItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)getActiveTrialExperimentIds;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 priorRetriever:(id)arg2;
- (bool)trialTreatmentApplied;

@end
