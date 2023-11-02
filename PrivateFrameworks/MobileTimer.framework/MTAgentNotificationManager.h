
@interface MTAgentNotificationManager : NSObject {
    NSMutableArray * _listeners;
    <NAScheduler> * _serializer;
}

@property (nonatomic, retain) NSMutableArray *listeners;
@property (nonatomic, retain) <NAScheduler> *serializer;

+ (double)_schedulingAssertionTimeout;
+ (double)defaultAssertionTimeOutForNotification:(id)arg1 type:(long long)arg2;

- (void).cxx_destruct;
- (void)_handleNotificationWithName:(id)arg1 type:(long long)arg2;
- (void)_registerForAlarmNotifications;
- (void)_registerForDarwinNotifications;
- (void)_registerForDistributedNotifications;
- (void)_registerForLiveDarwinNotification:(id)arg1;
- (void)_registerForXPCStream:(id)arg1 notificationType:(long long)arg2;
- (void)beginListening;
- (void)dealloc;
- (id)init;
- (id)listeners;
- (void)registerListener:(id)arg1;
- (id)serializer;
- (void)setListeners:(id)arg1;
- (void)setSerializer:(id)arg1;

@end
