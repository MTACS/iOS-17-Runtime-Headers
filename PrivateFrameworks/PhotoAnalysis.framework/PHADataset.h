
@interface PHADataset : NSObject <ETDataProvider> {
    NSString * _inputName;
    NSString * _labelName;
    NSArray * _labeledDataSamples;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *inputName;
@property (nonatomic, readonly) NSString *labelName;
@property (nonatomic, readonly) NSArray *labeledDataSamples;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithLabeledFeatureVectors:(id)arg1 inputName:(id)arg2 labelName:(id)arg3;
- (id)inputName;
- (id)labelName;
- (id)labeledDataSamples;
- (unsigned long long)numberOfDataPoints;

@end
