
@interface ATXInternalOffloadAppsNotification : NSObject {
    _ATXInternalNotification * _note;
}

+ (void)postNotificationWithOffloadSet:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)registerForNotificationWithOffloadBlock:(id /* block */)arg1;

@end
