
@interface CALNEventInvitationResponseNotificationEKDataSource : NSObject <CALNEventInvitationResponseNotificationDataSource> {
    <CALNDataSourceEventRepresentationProvider> * _dataSourceEventRepresentationProvider;
    <EKEventStoreProvider> * _eventStoreProvider;
    <CALNInboxNotificationProvider> * _inboxNotificationProvider;
    <CALNEKCalendarNotificationReferenceProvider> * _notificationReferenceProvider;
    <EKNotificationPreferences> * _preferences;
}

@property (nonatomic, readonly) <CALNDataSourceEventRepresentationProvider> *dataSourceEventRepresentationProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <EKEventStoreProvider> *eventStoreProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CALNInboxNotificationProvider> *inboxNotificationProvider;
@property (nonatomic, readonly) <CALNEKCalendarNotificationReferenceProvider> *notificationReferenceProvider;
@property (nonatomic, readonly) <EKNotificationPreferences> *preferences;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_notificationInfoFromNotification:(id)arg1 inEventStore:(id)arg2;
- (void)acceptEventInvitationResponseWithSourceClientIdentifier:(id)arg1;
- (void)clearEventInvitationResponseWithSourceClientIdentifier:(id)arg1;
- (id)dataSourceEventRepresentationProvider;
- (void)declineEventInvitationResponseWithSourceClientIdentifier:(id)arg1;
- (id)eventStoreProvider;
- (id)fetchEventInvitationResponseNotificationSourceClientIdentifiers:(id)arg1;
- (id)fetchEventInvitationResponseNotificationWithSourceClientIdentifier:(id)arg1;
- (id)fetchEventInvitationResponseNotifications;
- (id)inboxNotificationProvider;
- (id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 dataSourceEventRepresentationProvider:(id)arg4 preferences:(id)arg5;
- (id)notificationReferenceProvider;
- (id)preferences;

@end
