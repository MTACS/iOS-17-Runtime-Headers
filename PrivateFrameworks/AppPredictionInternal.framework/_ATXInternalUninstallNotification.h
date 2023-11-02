
@interface _ATXInternalUninstallNotification : NSObject {
    _ATXInternalNotification * _note;
}

+ (void)postNotificationWithUninstallSet:(id)arg1 histogramBundleIdTable:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (void)registerForNotificationsWithUninstallBlock:(id /* block */)arg1;

@end
