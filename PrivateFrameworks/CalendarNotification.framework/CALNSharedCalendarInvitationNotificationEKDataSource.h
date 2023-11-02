
@interface CALNSharedCalendarInvitationNotificationEKDataSource : NSObject <CALNSharedCalendarInvitationNotificationDataSource> {
    <CALNDataAccessExpressConnection> * _dataAccessExpressConnection;
    <EKEventStoreProvider> * _eventStoreProvider;
    <CALNInboxNotificationProvider> * _inboxNotificationProvider;
    <CALNEKCalendarNotificationReferenceProvider> * _notificationReferenceProvider;
    <EKNotificationPreferences> * _preferences;
}

@property (nonatomic, readonly) <CALNDataAccessExpressConnection> *dataAccessExpressConnection;
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
- (void)clearSharedCalendarInvitationWithSourceClientIdentifier:(id)arg1;
- (id)dataAccessExpressConnection;
- (void)declineSharedCalendarWithSourceClientIdentifier:(id)arg1;
- (id)eventStoreProvider;
- (id)fetchSharedCalendarInvitationNotificationSourceClientIdentifiers:(id)arg1;
- (id)fetchSharedCalendarInvitationNotificationWithSourceClientIdentifier:(id)arg1;
- (id)fetchSharedCalendarInvitationNotifications;
- (id)inboxNotificationProvider;
- (id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 dataAccessExpressConnection:(id)arg4 preferences:(id)arg5;
- (void)joinSharedCalendarWithSourceClientIdentifier:(id)arg1;
- (id)notificationReferenceProvider;
- (id)preferences;
- (void)reportSharedCalendarAsJunkWithSourceClientIdentifier:(id)arg1;

@end
