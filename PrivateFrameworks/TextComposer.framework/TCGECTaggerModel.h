
@interface TCGECTaggerModel : NSObject <TCGECModel> {
    NSDictionary * _autocorrectionThresholds;
    NSDictionary * _detailedIssueTypes;
    void * _embeddings;
    struct MontrealNeuralNetwork { } * _gecClassifier;
    NSArray * _gecClassifierLabels;
    NSDictionary * _indicationThresholds;
    unsigned long long  _keepLabelIndex;
    NSDictionary * _labelsToIssueType;
    NSString * _modelPath;
    struct MontrealNeuralNetwork { } * _vscClassifier;
}

@property (nonatomic, readonly) unsigned long long embeddingDimension;
@property (nonatomic, readonly) unsigned long long numCategories;

- (void).cxx_destruct;
- (id)classifierPrediction:(struct MontrealNeuralNetwork { }*)arg1 labelCount:(unsigned long long)arg2 input:(id)arg3 tokenCount:(unsigned long long)arg4;
- (id)classifierPredictions:(id)arg1 tokenCount:(unsigned long long)arg2;
- (id)correctionForPredictedClass:(unsigned long long)arg1 withProbability:(float)arg2;
- (void)dealloc;
- (unsigned long long)embeddingDimension;
- (id)embeddingsForTokenizedSentence:(id)arg1;
- (void)enumerateIssuesForSentence:(id)arg1 checkTermination:(bool)arg2 withBlock:(id /* block */)arg3;
- (id)initWithModelPath:(id)arg1 OTABundlePath:(id)arg2 options:(id)arg3;
- (bool)isTerminatedSentence:(id)arg1 embeddings:(id)arg2;
- (bool)loadAutocorrectionThresholdsFromURL:(id)arg1;
- (bool)loadDetailedIssueTypesFromURL:(id)arg1;
- (bool)loadErrorClassesFromURL:(id)arg1;
- (bool)loadIndicationThresholdsFromURL:(id)arg1;
- (unsigned long long)numCategories;
- (bool)useANEWithOptions:(id)arg1;

@end
