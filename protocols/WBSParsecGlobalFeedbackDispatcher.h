
@protocol WBSParsecGlobalFeedbackDispatcher <NSObject>

@required

- (void)sendCrowdsourcedAutoFillFeedback:(NSDictionary *)arg1 forQueryID:(long long)arg2;

@optional

- (void)sendMapsPlaceCardEngagementFeedbackOfType:(int)arg1 forQueryID:(long long)arg2;
- (void)sendNewTabFeedback:(bool)arg1;

@end
