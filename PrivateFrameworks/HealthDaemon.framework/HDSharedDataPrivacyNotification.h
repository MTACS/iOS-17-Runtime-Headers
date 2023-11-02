
@interface HDSharedDataPrivacyNotification : HDNanoHealthNotification {
    NSString * _firstName;
    NSString * _lastName;
}

+ (id)category;

- (void).cxx_destruct;
- (id)body;
- (id)initWithNotificationManager:(id)arg1 guardianFirstName:(id)arg2 lastName:(id)arg3;
- (id)title;

@end
