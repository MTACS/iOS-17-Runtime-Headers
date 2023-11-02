
@interface STUserNotificationContext : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSArray * _localizedUserNotificationBodyArguments;
    UNNotificationTrigger * _trigger;
}

@property (readonly) NSNumber *destinations;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *localizedUserNotificationBodyArguments;
@property (readonly, copy) NSString *notificationBundleIdentifier;
@property (nonatomic, copy) UNNotificationTrigger *trigger;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)destinations;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)localizedUserNotificationBodyArguments;
- (id)notificationBundleIdentifier;
- (void)notificationContentWithCompletionBlock:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedUserNotificationBodyArguments:(id)arg1;
- (void)setTrigger:(id)arg1;
- (id)trigger;

@end
