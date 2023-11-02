
@interface SGStructuredEventCoreMLOutputWrapper : NSObject <MLFeatureProvider> {
    MLMultiArray * _bi_lstm_0_c_out;
    MLMultiArray * _bi_lstm_0_c_out_rev;
    MLMultiArray * _bi_lstm_0_h_out;
    MLMultiArray * _bi_lstm_0_h_out_rev;
    MLMultiArray * _core;
    MLMultiArray * _location;
    MLMultiArray * _time;
    MLMultiArray * _title;
}

@property (nonatomic, retain) MLMultiArray *bi_lstm_0_c_out;
@property (nonatomic, retain) MLMultiArray *bi_lstm_0_c_out_rev;
@property (nonatomic, retain) MLMultiArray *bi_lstm_0_h_out;
@property (nonatomic, retain) MLMultiArray *bi_lstm_0_h_out_rev;
@property (nonatomic, retain) MLMultiArray *core;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *location;
@property (nonatomic, retain) MLMultiArray *time;
@property (nonatomic, retain) MLMultiArray *title;

- (void).cxx_destruct;
- (id)bi_lstm_0_c_out;
- (id)bi_lstm_0_c_out_rev;
- (id)bi_lstm_0_h_out;
- (id)bi_lstm_0_h_out_rev;
- (id)core;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithLocation:(id)arg1 time:(id)arg2 title:(id)arg3 core:(id)arg4 bi_lstm_0_h_out:(id)arg5 bi_lstm_0_c_out:(id)arg6 bi_lstm_0_h_out_rev:(id)arg7 bi_lstm_0_c_out_rev:(id)arg8;
- (id)location;
- (void)setBi_lstm_0_c_out:(id)arg1;
- (void)setBi_lstm_0_c_out_rev:(id)arg1;
- (void)setBi_lstm_0_h_out:(id)arg1;
- (void)setBi_lstm_0_h_out_rev:(id)arg1;
- (void)setCore:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)time;
- (id)title;

@end
