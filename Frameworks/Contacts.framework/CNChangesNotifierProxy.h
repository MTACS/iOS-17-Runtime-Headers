
@interface CNChangesNotifierProxy : NSObject <CNChangeNotificationReceiver> {
    NSString * _coalescingNotificationName;
    CNCoalescingTimer * _coalescingTimer;
    double  _externalNotificationCoalescingDelay;
    <CNContactsLoggerProvider> * _loggerProvider;
    NSMutableDictionary * _notificationForwardingMapping;
    NSMutableDictionary * _notificationsToBeSentOnceAllowed;
    NSObject<OS_dispatch_queue> * _notifierQueue;
    NSMapTable * _notifyingBlocks;
    NSMapTable * _removalBlocks;
    <CNSchedulerProvider> * _schedulerProvider;
    NSCountedSet * _supressedNotificationNames;
    bool  forwardsSelfGeneratedDistributedSaveNotifications;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double externalNotificationCoalescingDelay;
@property (nonatomic) bool forwardsSelfGeneratedDistributedSaveNotifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)externalNotificationCoalescingDelay;
- (bool)forwardsSelfGeneratedDistributedSaveNotifications;
- (void)receiveExternalNotificationName:(id)arg1;
- (void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 isFromExternalProcess:(bool)arg5;
- (void)setExternalNotificationCoalescingDelay:(double)arg1;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(bool)arg1;
- (void)waitForCurrentTasksToFinish;

@end
