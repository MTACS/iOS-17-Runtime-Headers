
@interface MTCFUserNotificationPoster : NSObject {
    NSMutableDictionary * _notifications;
}

@property (nonatomic, retain) NSMutableDictionary *notifications;

+ (void)cancelNotificationsWithIdentifiers:(id)arg1;
+ (void)postNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 bypassDND:(bool)arg6 handler:(id /* block */)arg7;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)notifications;
- (void)setNotifications:(id)arg1;

@end
