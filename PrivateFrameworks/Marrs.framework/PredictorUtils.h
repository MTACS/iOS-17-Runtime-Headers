
@interface PredictorUtils : NSObject

+ (id)getInitStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3;
+ (id)getPredictStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3;
+ (long long)handleInitException:(struct exception_ptr { void *x1; })arg1;
+ (long long)handlePredictException:(struct exception_ptr { void *x1; })arg1;
+ (void)reportInitStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3 locale:(id)arg4;
+ (void)reportPredictStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3 locale:(id)arg4;

@end
