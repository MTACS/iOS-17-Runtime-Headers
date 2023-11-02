
@interface CALNCalendarResourceChangedNotificationEKDataSource : NSObject <CALNCalendarResourceChangedNotificationDataSource> {
    <EKEventStoreProvider> * _eventStoreProvider;
    <CALNInboxNotificationProvider> * _inboxNotificationProvider;
    <CALNEKCalendarNotificationReferenceProvider> * _notificationReferenceProvider;
    <EKNotificationPreferences> * _preferences;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <EKEventStoreProvider> *eventStoreProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CALNInboxNotificationProvider> *inboxNotificationProvider;
@property (nonatomic, readonly) <CALNEKCalendarNotificationReferenceProvider> *notificationReferenceProvider;
@property (nonatomic, readonly) <EKNotificationPreferences> *preferences;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_notificationInfoFromNotification:(id)arg1;
- (id)_notificationInfoFromNotificationReference:(id)arg1;
- (void)clearCalendarResourceChangedNotificationWithSourceClientIdentifier:(id)arg1;
- (id)eventStoreProvider;
- (id)fetchCalendarResourceChangedNotificationSourceClientIdentifiers:(id)arg1;
- (id)fetchCalendarResourceChangedNotificationWithSourceClientIdentifier:(id)arg1;
- (id)fetchCalendarResourceChangedNotifications;
- (id)inboxNotificationProvider;
- (id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 preferences:(id)arg4;
- (id)notificationReferenceProvider;
- (id)preferences;

@end
