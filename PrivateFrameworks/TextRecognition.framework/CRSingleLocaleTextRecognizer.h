
@interface CRSingleLocaleTextRecognizer : CRMultiModelTextRecognizer {
    CRNeuralTextRecognizer * _neuralRecognizer;
}

@property (retain) CRNeuralTextRecognizer *neuralRecognizer;

- (void).cxx_destruct;
- (void)cancel;
- (id)decodingStats;
- (id)identifierForTextRegion:(id)arg1;
- (id)inferenceStats;
- (id)initWithImageReaderOptions:(id)arg1 error:(id*)arg2;
- (id)neuralRecognizer;
- (id)recognizerForIdentifier:(id)arg1;
- (void)setNeuralRecognizer:(id)arg1;

@end
