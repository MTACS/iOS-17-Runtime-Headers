
@interface period_lstmInput : NSObject <MLFeatureProvider> {
    MLMultiArray * _in_;
    MLMultiArray * _lstm_1_c_in;
    MLMultiArray * _lstm_1_h_in;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *in_;
@property (nonatomic, retain) MLMultiArray *lstm_1_c_in;
@property (nonatomic, retain) MLMultiArray *lstm_1_h_in;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)in_;
- (id)initWithIn:(id)arg1;
- (id)initWithIn:(id)arg1 lstm_1_h_in:(id)arg2 lstm_1_c_in:(id)arg3;
- (id)lstm_1_c_in;
- (id)lstm_1_h_in;
- (void)setIn_:(id)arg1;
- (void)setLstm_1_c_in:(id)arg1;
- (void)setLstm_1_h_in:(id)arg1;

@end
