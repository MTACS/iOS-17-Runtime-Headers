
@protocol NCSuggestionManagerDelegate <NSObject>

@required

- (NCNotificationRequest *)suggestionManager:(NCSuggestionManager *)arg1 notificationRequestForUUID:(NSUUID *)arg2;
- (void)suggestionManager:(NCSuggestionManager *)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withPresentingView:(UIView *)arg4;
- (NCNotificationSectionSettings *)suggestionManager:(NCSuggestionManager *)arg1 requestsSectionSettingsForSectionIdentifier:(NSString *)arg2;
- (void)suggestionManager:(NCSuggestionManager *)arg1 requestsUpdatingContentForNotificationRequest:(NCNotificationRequest *)arg2;
- (void)suggestionManager:(NCSuggestionManager *)arg1 setAllowsDirectMessages:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)suggestionManager:(NCSuggestionManager *)arg1 setAllowsTimeSensitive:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)suggestionManager:(NCSuggestionManager *)arg1 setModeConfiguration:(DNDModeConfiguration *)arg2;
- (void)suggestionManager:(NCSuggestionManager *)arg1 setMuted:(bool)arg2 untilDate:(NSDate *)arg3 forSectionIdentifier:(NSString *)arg4 threadIdentifier:(NSString *)arg5;
- (void)suggestionManager:(NCSuggestionManager *)arg1 setScheduledDelivery:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (DNDModeConfiguration *)suggestionManagerRequestsCurrentModeConfiguration:(NCSuggestionManager *)arg1;

@end
