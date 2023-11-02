
@interface PowerUIMLPhonePredictor : PowerUIMLTwoStageModelPredictor

- (void)classifierModelUpdateComplete:(id)arg1 withModelURL:(id)arg2;
- (id)getClassifierFeatureProviderForHistoricEvents:(id)arg1;
- (id)getEngagementStreamEvents:(id)arg1 forDataVersion:(unsigned long long)arg2;
- (id)getInputFeatures:(double)arg1 events:(id)arg2 pluginBatteryLevel:(unsigned long long)arg3 timeFromPlugin:(double)arg4 pluginDate:(id)arg5 withLog:(id)arg6;
- (id)getMultiArrayForFeatureDict:(id)arg1;
- (id)getRegressorFeatureProviderForHistoricEvents:(id)arg1;
- (int)modelDataVersion;
- (void)regressorModelUpdateComplete:(id)arg1 withModelURL:(id)arg2;
- (void)updateClassifierModelWithNewData:(id)arg1 forDataVersion:(unsigned long long)arg2 withModelURL:(id)arg3;
- (void)updateRegressorModelWithNewData:(id)arg1 forDataVersion:(unsigned long long)arg2 withModelURL:(id)arg3;

@end
