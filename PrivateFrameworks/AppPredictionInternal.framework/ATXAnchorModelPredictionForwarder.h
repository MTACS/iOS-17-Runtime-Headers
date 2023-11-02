
@interface ATXAnchorModelPredictionForwarder : NSObject <ATXAnchorModelPredictionForwarderProtocol> {
    ATXProactiveSuggestionClientModel * _anchorModelClientModel;
    ATXAnchorModelHyperParameters * _hyperParameters;
    ATXModeAnchorModelSuggestionClient * _modeSuggestionClient;
    <ATXAnchorModelDataStoreWrapperProtocol> * _storeWrapper;
}

@property (nonatomic, retain) ATXProactiveSuggestionClientModel *anchorModelClientModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionAnchorModelPredictionTuplesForBlendingLayerFromPredictions:(id)arg1;
- (id)anchorModelClientModel;
- (id)appAnchorModelPredictionTuplesForBlendingLayerFromPredictions:(id)arg1;
- (id)clientModelId;
- (id)clientModelSpec;
- (void)forwardModePredictions:(id)arg1;
- (void)forwardNonModePredictions:(id)arg1;
- (void)forwardPredictionTuplesToBlendingLayer:(id)arg1 feedbackMetadata:(id)arg2;
- (void)forwardPredictions:(id)arg1;
- (id)init;
- (id)initWithAnchorModelDataStoreWrapper:(id)arg1 anchorModelHyperParameters:(id)arg2;
- (id)linkActionAnchorModelPredictionTuplesForBlendingLayerFromPredictions:(id)arg1;
- (id)modeAnchorModelSuggestionsFromPredictions:(id)arg1;
- (void)setAnchorModelClientModel:(id)arg1;

@end
