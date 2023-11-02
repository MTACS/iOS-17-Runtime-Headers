
@interface engageModel : NSObject {
    MLModel * _model;
}

@property (nonatomic, readonly) MLModel *model;

+ (id)URLOfModelInThisBundle;
+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithMLModel:(id)arg1;
- (id)model;
- (void)predictionFromFeatures:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionFromPlugin_battery_level:(double)arg1 time_from_plugin:(double)arg2 med_dur_1:(double)arg3 med_dur_2:(double)arg4 med_dur_4:(double)arg5 med_dur_8:(double)arg6 med_dur_16:(double)arg7 med_dur_24:(double)arg8 cnt_dur_1:(double)arg9 cnt_dur_2:(double)arg10 cnt_dur_4:(double)arg11 cnt_dur_8:(double)arg12 cnt_dur_16:(double)arg13 cnt_dur_24:(double)arg14 std_dur_1:(double)arg15 std_dur_2:(double)arg16 std_dur_4:(double)arg17 std_dur_8:(double)arg18 std_dur_16:(double)arg19 std_dur_24:(double)arg20 weekday_med_dur_1:(double)arg21 weekday_med_dur_2:(double)arg22 weekday_med_dur_4:(double)arg23 weekday_med_dur_8:(double)arg24 weekday_med_dur_24:(double)arg25 weekday_std_dur_4:(double)arg26 error:(id*)arg27;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
