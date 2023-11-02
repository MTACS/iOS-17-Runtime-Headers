
@interface CALNFakeNotificationSource : NSObject <CALNNotificationSource> {
    <CALNCalendarIconIdentifierProvider> * _iconIdentifierProvider;
    <CALNNotificationManager> * _notificationManager;
    NSString * _sourceIdentifier;
}

@property (nonatomic, readonly) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CALNCalendarIconIdentifierProvider> *iconIdentifierProvider;
@property (nonatomic, readonly) <CALNNotificationManager> *notificationManager;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (readonly) Class superclass;

+ (id)_activeSources;
+ (id)_activeSourcesQueue;

- (void).cxx_destruct;
- (id)categories;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (void)didReceiveResponse:(id)arg1;
- (id)iconIdentifierProvider;
- (id)initWithNotificationManager:(id)arg1 iconIdentifierProvider:(id)arg2 sourceIdentifierSuffix:(id)arg3;
- (id)notificationManager;
- (void)postFakeNotification;
- (void)refreshNotifications:(id)arg1;
- (id)sourceIdentifier;

@end
