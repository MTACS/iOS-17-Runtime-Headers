
@interface CALNSuggestedEventNotificationEKDataSource : NSObject <CALNSuggestedEventNotificationDataSource> {
    <EKEventStoreProvider> * _eventStoreProvider;
    <CALNInboxNotificationProvider> * _inboxNotificationProvider;
    <CALNEKCalendarNotificationReferenceProvider> * _notificationReferenceProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <EKEventStoreProvider> *eventStoreProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CALNInboxNotificationProvider> *inboxNotificationProvider;
@property (nonatomic, readonly) <CALNEKCalendarNotificationReferenceProvider> *notificationReferenceProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acknowledgeSuggestedEventWithSourceClientIdentifier:(id)arg1 accept:(bool)arg2;
- (void)_clearSuggestedEventNotificationWithObjectID:(id)arg1;
- (id)_eventForSourceClientIdentifier:(id)arg1 eventStore:(id)arg2;
- (id)_notificationInfoFromNotification:(id)arg1 inEventStore:(id)arg2;
- (void)clearSuggestedEventNotificationWithSourceClientIdentifier:(id)arg1;
- (void)confirmSuggestedEventWithSourceClientIdentifier:(id)arg1;
- (void)deleteCanceledSuggestedEventWithSourceClientIdentifier:(id)arg1;
- (id)eventStoreProvider;
- (id)fetchSuggestedEventNotificationObjectIDs;
- (id)fetchSuggestedEventNotificationWithObjectID:(id)arg1;
- (id)fetchSuggestedEventNotifications;
- (id)fetchSuggestedEventNotificationsWithSourceClientIdentifier:(id)arg1;
- (void)ignoreSuggestedEventWithSourceClientIdentifier:(id)arg1;
- (id)inboxNotificationProvider;
- (id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3;
- (id)notificationReferenceProvider;

@end
