
@interface ADUserNotifier : NSObject {
    struct __CFUserNotification { } * _notification;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    struct __CFRunLoopSource { } * _source;
}

+ (id)defaultUserNotifier;

- (void).cxx_destruct;
- (id)buildTapToRadarURLWithRadarTitle:(id)arg1 radarComponent:(unsigned long long)arg2;
- (bool)createNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 responseBlock:(id /* block */)arg5;
- (void)dealloc;
- (void)dismissNotification;
- (id)init;
- (void)setComponentID:(id)arg1 componentName:(id)arg2 forQuery:(id)arg3;
- (void)showUserNotificationWithTitle:(id)arg1 message:(id)arg2;
- (void)triggerApplicationWithNotificationTitle:(id)arg1 notificationMessage:(id)arg2 acceptButtonText:(id)arg3 rejectButtonText:(id)arg4 applicationURL:(id)arg5;
- (void)triggerTapToRadarWithNotificationTitle:(id)arg1 notificationMessage:(id)arg2 radarTitle:(id)arg3 radarComponent:(unsigned long long)arg4;

@end
