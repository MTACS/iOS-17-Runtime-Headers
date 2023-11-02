
@interface CALNEventInvitationResponseNotificationSource : NSObject <CALNNotificationSource> {
    <CALNEventInvitationResponseNotificationDataSource> * _dataSource;
    <CalDateProvider> * _dateProvider;
    <CALNCalendarIconIdentifierProvider> * _iconIdentifierProvider;
    <CALNNotificationManager> * _notificationManager;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) <CALNEventInvitationResponseNotificationDataSource> *dataSource;
@property (nonatomic, readonly) <CalDateProvider> *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CALNCalendarIconIdentifierProvider> *iconIdentifierProvider;
@property (nonatomic, readonly) <CALNNotificationManager> *notificationManager;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_notificationBodyForNotificationInfo:(id)arg1 contactIdentifier:(id*)arg2 summaryArgument:(id*)arg3;
- (id)categories;
- (id)contentForNotificationWithInfo:(id)arg1;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (id)dataSource;
- (id)dateProvider;
- (void)didReceiveResponse:(id)arg1;
- (id)iconIdentifierProvider;
- (id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 dateProvider:(id)arg4;
- (id)notificationManager;
- (void)refreshNotifications:(id)arg1;
- (id)sourceIdentifier;

@end
