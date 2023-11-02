
@interface SGStructuredEventCoreMLInputWrapper : NSObject <MLFeatureProvider> {
    MLMultiArray * _D;
    MLMultiArray * _I;
    MLMultiArray * _L;
    MLMultiArray * _N;
    MLMultiArray * _W;
    MLMultiArray * _bi_lstm_0_c_in;
    MLMultiArray * _bi_lstm_0_c_in_rev;
    MLMultiArray * _bi_lstm_0_h_in;
    MLMultiArray * _bi_lstm_0_h_in_rev;
}

@property (nonatomic, retain) MLMultiArray *D;
@property (nonatomic, retain) MLMultiArray *I;
@property (nonatomic, retain) MLMultiArray *L;
@property (nonatomic, retain) MLMultiArray *N;
@property (nonatomic, retain) MLMultiArray *W;
@property (nonatomic, retain) MLMultiArray *bi_lstm_0_c_in;
@property (nonatomic, retain) MLMultiArray *bi_lstm_0_c_in_rev;
@property (nonatomic, retain) MLMultiArray *bi_lstm_0_h_in;
@property (nonatomic, retain) MLMultiArray *bi_lstm_0_h_in_rev;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)D;
- (id)I;
- (id)L;
- (id)N;
- (id)W;
- (id)bi_lstm_0_c_in;
- (id)bi_lstm_0_c_in_rev;
- (id)bi_lstm_0_h_in;
- (id)bi_lstm_0_h_in_rev;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithL:(id)arg1 D:(id)arg2 I:(id)arg3 N:(id)arg4 W:(id)arg5;
- (id)initWithL:(id)arg1 D:(id)arg2 I:(id)arg3 N:(id)arg4 W:(id)arg5 bi_lstm_0_h_in:(id)arg6 bi_lstm_0_c_in:(id)arg7 bi_lstm_0_h_in_rev:(id)arg8 bi_lstm_0_c_in_rev:(id)arg9;
- (void)setBi_lstm_0_c_in:(id)arg1;
- (void)setBi_lstm_0_c_in_rev:(id)arg1;
- (void)setBi_lstm_0_h_in:(id)arg1;
- (void)setBi_lstm_0_h_in_rev:(id)arg1;
- (void)setD:(id)arg1;
- (void)setI:(id)arg1;
- (void)setL:(id)arg1;
- (void)setN:(id)arg1;
- (void)setW:(id)arg1;

@end
