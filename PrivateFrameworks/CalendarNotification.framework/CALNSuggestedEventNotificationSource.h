
@interface CALNSuggestedEventNotificationSource : NSObject <CALNNotificationSource> {
    <CALNSuggestedEventNotificationDataSource> * _dataSource;
    <CALNCalendarIconIdentifierProvider> * _iconIdentifierProvider;
    <CALNNotificationManager> * _notificationManager;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) <CALNSuggestedEventNotificationDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CALNCalendarIconIdentifierProvider> *iconIdentifierProvider;
@property (nonatomic, readonly) <CALNNotificationManager> *notificationManager;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (readonly) Class superclass;

+ (id)_bundle;
+ (id)coalescedSuggestedEventCategoryIdentifier;
+ (id)confirmActionIdentifier;
+ (id)defaultSuggestedEventCategoryIdentifier;
+ (id)deleteActionIdentifier;
+ (id)ignoreActionIdentifier;
+ (id)suggestedEventCanceledCategoryIdentifier;

- (void).cxx_destruct;
- (id)_sourceClientIdentifiersForObjectIDs:(id)arg1;
- (id)categories;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (id)dataSource;
- (void)didReceiveResponse:(id)arg1;
- (id)iconIdentifierProvider;
- (id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3;
- (id)notificationManager;
- (void)refreshNotifications:(id)arg1;
- (id)sourceIdentifier;

@end
