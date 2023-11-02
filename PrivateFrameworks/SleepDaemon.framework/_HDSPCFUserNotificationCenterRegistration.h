
@interface _HDSPCFUserNotificationCenterRegistration : NSObject {
    HDSPCFUserNotification * _notification;
    HDSPCFUserNotificationCenter * _notificationCenter;
}

@property (nonatomic, retain) HDSPCFUserNotification *notification;
@property (nonatomic, retain) HDSPCFUserNotificationCenter *notificationCenter;

- (void).cxx_destruct;
- (id)notification;
- (id)notificationCenter;
- (void)setNotification:(id)arg1;
- (void)setNotificationCenter:(id)arg1;

@end
