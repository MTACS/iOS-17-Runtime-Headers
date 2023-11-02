
@interface ATXDigestGlobalNotificationFeedbackPipeline : NSObject {
    ATXNotificationDigestRankingConstants * _c;
    <ATXNotificationDigestFeedbackProtocol> * _feedbackStore;
    NSString * _lastRunTimestampUserDefaultsKey;
    <ATXNotificationQuantityProviderProtocol> * _notificationQuantityProvider;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithFeedbackStore:(id)arg1 notificationQuantityProvider:(id)arg2 lastRunTimestampKey:(id)arg3 constants:(id)arg4;
- (void)logGlobalNotificationStatisticsToDigestFeedbackWithXPCActivity:(id)arg1;

@end
