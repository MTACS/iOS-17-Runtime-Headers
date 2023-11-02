
@interface ATXAppClipsFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram * _appClipsAndHeroAppHistogram;
    _ATXAppLaunchCategoricalHistogram * _appClipsAndHeroAppHistogramNoDecay;
}

- (void).cxx_destruct;
- (double)_confirmsForAppClipWithHeroAppPrediction:(id)arg1;
- (double)_confirmsForAppClipWithHeroAppPredictionNoDecay:(id)arg1;
- (double)_engagementForAppClipWithHeroAppPrediction:(id)arg1;
- (double)_engagementForAppClipWithHeroAppPredictionNoDecay:(id)arg1;
- (double)_overallAppClipsengagement;
- (double)_overallConfirms;
- (double)_overallConfirmsNoDecay;
- (double)_overallRejects;
- (double)_overallRejectsNoDecay;
- (double)_rejectsForAppClipWithHeroAppPrediction:(id)arg1;
- (double)_rejectsForAppClipWithHeroAppPredictionNoDecay:(id)arg1;
- (bool)_shouldHideAppClipForLowEngagementNoDecay:(id)arg1;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)arg1 weight:(float)arg2;
- (void)addRejectForAppClipWithHeroAppPrediction:(id)arg1 weight:(float)arg2;
- (double)feedbackScoreForAppClipWithHeroAppPrediction:(id)arg1;
- (id)init;
- (id)initWithAppClipsHistogram:(id)arg1 appClipsHistogramNoDecay:(id)arg2;
- (bool)shouldShowAppClipWithHeroAppPrediction:(id)arg1;
- (bool)shouldShowAppClips;

@end
