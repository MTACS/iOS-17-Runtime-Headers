
@interface ATXInternalAppRegistrationNotification : NSObject {
    _ATXInternalNotification * _note;
}

+ (void)postNotificationWithInstallDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)registerForNotificationsWithRegisterBlock:(id /* block */)arg1;

@end
