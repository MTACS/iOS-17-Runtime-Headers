
@interface CALNTriggeredEventNotificationFeedbackHelper : NSObject

+ (void)recordDisplayOfInitialTimeToLeaveAlertForSourceClientIdentifier:(id)arg1 event:(id)arg2 hypothesis:(id)arg3 travelAdvisoryTimelinessPeriod:(unsigned long long)arg4 foundInAppsEventTracker:(id)arg5 suggestionsServiceLogger:(id)arg6 ttlEventTracker:(id)arg7;
+ (void)sendFeedbackForPostingNotificationWithTravelAdvisoryTimelinessPeriod:(unsigned long long)arg1 sourceClientIdentifier:(id)arg2 travelEngine:(id)arg3;

@end
