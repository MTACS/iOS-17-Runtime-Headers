
@interface ATXHeroAppFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram * _heroAppHistogram;
}

- (void).cxx_destruct;
- (double)_confirmsForHeroAppPrediction:(id)arg1;
- (double)_engagementForHeroAppPrediction:(id)arg1;
- (double)_rejectsForHeroAppPrediction:(id)arg1;
- (void)addConfirmForHeroAppPredictionWithBundleId:(id)arg1 weight:(float)arg2;
- (void)addRejectForHeroAppPredictionWithBundleId:(id)arg1 weight:(float)arg2;
- (id)init;
- (id)initWithHistogram:(id)arg1;
- (bool)shouldShowHeroAppPrediction:(id)arg1;

@end
