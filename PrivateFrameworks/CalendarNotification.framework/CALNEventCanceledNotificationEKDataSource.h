
@interface CALNEventCanceledNotificationEKDataSource : NSObject <CALNEventCanceledNotificationDataSource> {
    <CALNDataSourceEventRepresentationProvider> * _dataSourceEventRepresentationProvider;
    <EKEventStoreProvider> * _eventStoreProvider;
    <CALNInboxNotificationProvider> * _inboxNotificationProvider;
    <CALNEKCalendarNotificationReferenceProvider> * _notificationReferenceProvider;
    <EKNotificationPreferences> * _preferences;
    <CALNRemoteMutator> * _remoteMutator;
}

@property (nonatomic, readonly) <CALNDataSourceEventRepresentationProvider> *dataSourceEventRepresentationProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <EKEventStoreProvider> *eventStoreProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CALNInboxNotificationProvider> *inboxNotificationProvider;
@property (nonatomic, readonly) <CALNEKCalendarNotificationReferenceProvider> *notificationReferenceProvider;
@property (nonatomic, readonly) <EKNotificationPreferences> *preferences;
@property (nonatomic, readonly) <CALNRemoteMutator> *remoteMutator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_notificationInfoFromNotification:(id)arg1 inEventStore:(id)arg2;
- (void)clearCanceledEventNotificationWithSourceClientIdentifier:(id)arg1;
- (id)dataSourceEventRepresentationProvider;
- (void)deleteCanceledEventWithSourceClientIdentifier:(id)arg1;
- (id)eventStoreProvider;
- (id)fetchEventCanceledNotificationSourceClientIdentifiers:(id)arg1;
- (id)fetchEventCanceledNotificationWithSourceClientIdentifier:(id)arg1;
- (id)fetchEventCanceledNotifications;
- (id)inboxNotificationProvider;
- (id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 remoteMutator:(id)arg4 dataSourceEventRepresentationProvider:(id)arg5 preferences:(id)arg6;
- (id)notificationReferenceProvider;
- (id)preferences;
- (id)remoteMutator;

@end
