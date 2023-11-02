
@interface HDHRAFibBurdenNotificationAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    HKFeatureStatus * _featureStatus;
    <HDHRAFibBurdenNotificationAnalyticsEventFocusModeDeterminer> * _focusModeDeterminer;
    HKHRAFibBurdenNotificationMode * _notificationMode;
    <HDHRAFibBurdenAnalyticsEventHealthAppNotificationsAuthorizedProvider> * _notificationsAuthorizedProvider;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (void).cxx_destruct;
- (id)_notificationTypeStringForType:(long long)arg1;
- (id)eventName;
- (id)initWithNotificationMode:(id)arg1 featureStatus:(id)arg2 focusModeDeterminer:(id)arg3 notificationsAuthorizedProvider:(id)arg4;
- (id)initWithNotificationMode:(id)arg1 featureStatus:(id)arg2 profile:(id)arg3;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end
