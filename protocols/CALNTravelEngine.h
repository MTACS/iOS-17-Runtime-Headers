
@protocol CALNTravelEngine <NSObject>

@required

- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(NSString *)arg1;
- (void)ceaseMonitoringForEventWithExternalURL:(NSString *)arg1;
- (<CALNTravelEngineDelegate> *)delegate;
- (void)requestHypothesisRefreshAtDate:(NSDate *)arg1 forEventWithExternalURL:(NSString *)arg2;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(NSString *)arg1;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(NSString *)arg1;
- (void)setDelegate:(id <CALNTravelEngineDelegate>)arg1;

@end
