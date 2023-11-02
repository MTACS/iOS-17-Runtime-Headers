
@interface CALNSharedCalendarInvitationNotificationSource : NSObject <CALNNotificationSource> {
    <CALNSharedCalendarInvitationNotificationDataSource> * _dataSource;
    <CALNCalendarIconIdentifierProvider> * _iconIdentifierProvider;
    <CALNNotificationManager> * _notificationManager;
    <CALNSourceEventRepresentationProvider> * _sourceEventRepresentationProvider;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) <CALNSharedCalendarInvitationNotificationDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CALNCalendarIconIdentifierProvider> *iconIdentifierProvider;
@property (nonatomic, readonly) <CALNNotificationManager> *notificationManager;
@property (nonatomic, readonly) <CALNSourceEventRepresentationProvider> *sourceEventRepresentationProvider;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (readonly) Class superclass;

+ (id)categoryIdentifierWithReportJunk;
+ (id)categoryIdentifierWithoutReportJunk;
+ (id)declineActionIdentifier;
+ (id)joinActionIdentifier;
+ (id)reportJunkActionIdentifier;

- (void).cxx_destruct;
- (id)categories;
- (id)contentForNotificationWithInfo:(id)arg1;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (id)dataSource;
- (void)didReceiveResponse:(id)arg1;
- (id)iconIdentifierProvider;
- (id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 sourceEventRepresentationProvider:(id)arg4;
- (id)notificationManager;
- (void)refreshNotifications:(id)arg1;
- (id)sourceEventRepresentationProvider;
- (id)sourceIdentifier;

@end
