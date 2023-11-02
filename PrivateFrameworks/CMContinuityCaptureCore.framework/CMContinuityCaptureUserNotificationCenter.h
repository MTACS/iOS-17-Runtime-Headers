
@interface CMContinuityCaptureUserNotificationCenter : NSObject

+ (void)invalidate;
+ (id)sharedInstance;

- (id)description;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (void)scheduleNotification:(long long)arg1 data:(id)arg2;
- (void)unscheduleNotification:(long long)arg1;
- (void)unscheduleNotificationForDeviceIdentifier:(id)arg1 type:(long long)arg2 clearHistory:(bool)arg3;

@end
