
@interface ATXInternalAppsInstallStartNotification : NSObject {
    _ATXInternalNotification * _note;
}

+ (void)postNotificationWithInstallStartDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)registerForNotificationsWithInstallStartBlock:(id /* block */)arg1;

@end
