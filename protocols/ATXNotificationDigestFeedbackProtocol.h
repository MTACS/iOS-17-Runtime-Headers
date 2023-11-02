
@protocol ATXNotificationDigestFeedbackProtocol <NSObject>

@required

- (double)alltimeMarqueeAppearancesForBundleId:(NSString *)arg1;
- (double)basicNotificationsSentForBundleId:(NSString *)arg1;
- (void)decayFeedbackByFactor:(double)arg1;
- (void)logBasicNotificationsSentForBundleId:(NSString *)arg1 numNotifications:(unsigned long long)arg2;
- (void)logMarqueeAppearanceForBundleId:(NSString *)arg1;
- (void)logMarqueeEngagementForBundleId:(NSString *)arg1;
- (void)logNonMarqueeAppearanceForBundleId:(NSString *)arg1;
- (void)logNonMarqueeEngagementForBundleId:(NSString *)arg1;
- (void)logTimeSensitiveNotificationsSentForBundleId:(NSString *)arg1 numNotifications:(unsigned long long)arg2;
- (double)marqueeAppearancesForBundleId:(NSString *)arg1;
- (double)marqueeEngagementsForBundleId:(NSString *)arg1;
- (double)nonMarqueeAppearancesForBundleId:(NSString *)arg1;
- (double)nonMarqueeEngagementsForBundleId:(NSString *)arg1;
- (double)timeSensitiveNotificationsSentForBundleId:(NSString *)arg1;

@end
