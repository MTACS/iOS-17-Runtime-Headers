
@interface STDeviceDowntimeUserNotificationContext : STUserNotificationContext {
    NSString * _localizedUserNotificationBodyKey;
}

@property (nonatomic, copy) NSString *localizedUserNotificationBodyKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)destinations;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedUserNotificationBodyKey;
- (id)notificationBundleIdentifier;
- (void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2;
- (void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2 locale:(id)arg3;
- (void)setLocalizedUserNotificationBodyKey:(id)arg1;

@end
