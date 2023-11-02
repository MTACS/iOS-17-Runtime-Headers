
@interface U2HeadInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _input_mask;
    MLMultiArray * _sequence_output;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *input_mask;
@property (nonatomic, retain) MLMultiArray *sequence_output;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithInput_mask:(id)arg1 sequence_output:(id)arg2;
- (id)input_mask;
- (id)sequence_output;
- (void)setInput_mask:(id)arg1;
- (void)setSequence_output:(id)arg1;

@end
