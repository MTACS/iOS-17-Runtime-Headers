
@interface CALNInboxNotificationMonitor : NSObject <CADModule, CALNInboxNotificationProvider> {
    bool  _active;
    _EKNotificationMonitor * _notificationMonitor;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long eventNotificationCount;
@property (nonatomic, readonly) NSArray *eventNotificationReferences;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _EKNotificationMonitor *notificationMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (void)addNotificationCountChangedObserver:(id)arg1 selector:(SEL)arg2;
- (void)addNotificationsChangedObserver:(id)arg1 selector:(SEL)arg2;
- (void)addNotificationsLoadedObserver:(id)arg1 selector:(SEL)arg2;
- (void)deactivate;
- (void)didRegisterForAlarms;
- (unsigned long long)eventNotificationCount;
- (id)eventNotificationReferences;
- (id)initWithEventStoreProvider:(id)arg1;
- (bool)isActive;
- (id)notificationMonitor;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)arg1;
- (void)receivedNotificationNamed:(id)arg1;
- (void)removeNotificationCountChangedObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeNotificationsChangedObserver:(id)arg1;
- (void)removeNotificationsLoadedObserver:(id)arg1 selector:(SEL)arg2;
- (void)setActive:(bool)arg1;

@end
