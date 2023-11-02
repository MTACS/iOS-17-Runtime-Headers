
@interface CRTextSequenceRecognizerModelCoreMLOutput : NSObject <CRTextRecognizerModelOutput, MLFeatureProvider> {
    unsigned long long  _batchSize;
    MLMultiArray * _output_label_prob_map;
    NSArray * _textFeatureInfo;
}

@property unsigned long long batchSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *featureNames;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MLMultiArray *output_label_prob_map;
@property (readonly) Class superclass;
@property (retain) NSArray *textFeatureInfo;

- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithOutput_label_prob_map:(id)arg1;
- (id)output_label_prob_map;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setOutput_label_prob_map:(id)arg1;
- (void)setTextFeatureInfo:(id)arg1;
- (id)textFeatureInfo;

@end
