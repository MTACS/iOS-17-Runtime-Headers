
@interface ATXNotificationDigestHistogramFeedbackTracker : NSObject <ATXNotificationDigestFeedbackProtocol> {
    _ATXAppLaunchCategoricalHistogram * _alltimeMarqueeAppearanceHistogram;
    _ATXAppLaunchCategoricalHistogram * _digestFeedbackHistogram;
}

@property (nonatomic, readonly) _ATXAppLaunchCategoricalHistogram *alltimeMarqueeAppearanceHistogram;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _ATXAppLaunchCategoricalHistogram *digestFeedbackHistogram;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alltimeMarqueeAppearanceHistogram;
- (double)alltimeMarqueeAppearancesForBundleId:(id)arg1;
- (double)basicNotificationsSentForBundleId:(id)arg1;
- (void)decayFeedbackByFactor:(double)arg1;
- (id)digestFeedbackHistogram;
- (id)feedbackDictionaryForBundleId:(id)arg1;
- (id)init;
- (id)initWithDigestFeedbackHistogram:(id)arg1 alltimeMarqueeAppearanceHistogram:(id)arg2;
- (void)logBasicNotificationsSentForBundleId:(id)arg1 numNotifications:(unsigned long long)arg2;
- (void)logMarqueeAppearanceForBundleId:(id)arg1;
- (void)logMarqueeEngagementForBundleId:(id)arg1;
- (void)logNonMarqueeAppearanceForBundleId:(id)arg1;
- (void)logNonMarqueeEngagementForBundleId:(id)arg1;
- (void)logTimeSensitiveNotificationsSentForBundleId:(id)arg1 numNotifications:(unsigned long long)arg2;
- (double)marqueeAppearancesForBundleId:(id)arg1;
- (double)marqueeEngagementsForBundleId:(id)arg1;
- (double)nonMarqueeAppearancesForBundleId:(id)arg1;
- (double)nonMarqueeEngagementsForBundleId:(id)arg1;
- (double)timeSensitiveNotificationsSentForBundleId:(id)arg1;

@end
