
@interface HDNanoHealthNotification : NSObject {
    HDNotificationManager * _notificationManager;
}

+ (id)category;

- (void).cxx_destruct;
- (id)body;
- (unsigned long long)destinations;
- (id)initWithNotificationManager:(id)arg1;
- (id)title;
- (void)triggerNotification;

@end
