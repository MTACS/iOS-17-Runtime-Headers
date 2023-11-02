
@interface CALNNotificationIconUpdater : NSObject {
    <CALNIconCache> * _iconCache;
    <CALNCalendarIconIdentifierProvider> * _iconIdentifierProvider;
    <CALNIconIdentifierVersionProvider> * _identifierVersionProvider;
    <CALNNotificationManager> * _notificationManager;
    <CALNNotificationStorage> * _protectedStorage;
}

@property (nonatomic, readonly) <CALNIconCache> *iconCache;
@property (nonatomic, readonly) <CALNCalendarIconIdentifierProvider> *iconIdentifierProvider;
@property (nonatomic, readonly) <CALNIconIdentifierVersionProvider> *identifierVersionProvider;
@property (nonatomic, readonly) <CALNNotificationManager> *notificationManager;
@property (nonatomic, readonly) <CALNNotificationStorage> *protectedStorage;

- (void).cxx_destruct;
- (void)_updateAllIconIdentifiersInStorage:(id)arg1;
- (id)iconCache;
- (id)iconIdentifierProvider;
- (id)identifierVersionProvider;
- (id)initWithIconIdentifierVersionProvider:(id)arg1 protectedNotificationStorage:(id)arg2 iconCache:(id)arg3 iconIdentifierProvider:(id)arg4 notificationManager:(id)arg5;
- (id)notificationManager;
- (id)protectedStorage;
- (void)updateIconsToNewVersionIfNeeded;

@end
