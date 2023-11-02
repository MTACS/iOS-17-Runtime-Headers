
@interface TCModelTrainerBackendGraphsWithSplitLoss : TCModelTrainerBackendGraphs {
    MLCTrainingGraph * _lossGraph;
    NSDictionary * _lossGraphInputs;
    NSDictionary * _lossGraphOutputs;
}

@property (nonatomic, retain) MLCTrainingGraph *lossGraph;
@property (nonatomic, retain) NSDictionary *lossGraphInputs;
@property (nonatomic, retain) NSDictionary *lossGraphOutputs;

- (void).cxx_destruct;
- (id)lossGraph;
- (id)lossGraphInputs;
- (id)lossGraphOutputs;
- (void)setLossGraph:(id)arg1;
- (void)setLossGraphInputs:(id)arg1;
- (void)setLossGraphOutputs:(id)arg1;

@end
