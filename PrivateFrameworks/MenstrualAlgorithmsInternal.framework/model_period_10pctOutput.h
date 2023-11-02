
@interface model_period_10pctOutput : NSObject <MLFeatureProvider> {
    MLMultiArray * _lstm_1_c_out;
    MLMultiArray * _lstm_1_h_out;
    MLMultiArray * _out_;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *lstm_1_c_out;
@property (nonatomic, retain) MLMultiArray *lstm_1_h_out;
@property (nonatomic, retain) MLMultiArray *out_;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithOut:(id)arg1 lstm_1_h_out:(id)arg2 lstm_1_c_out:(id)arg3;
- (id)lstm_1_c_out;
- (id)lstm_1_h_out;
- (id)out_;
- (void)setLstm_1_c_out:(id)arg1;
- (void)setLstm_1_h_out:(id)arg1;
- (void)setOut_:(id)arg1;

@end
