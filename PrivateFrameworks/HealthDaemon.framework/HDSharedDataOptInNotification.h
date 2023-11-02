
@interface HDSharedDataOptInNotification : HDNanoHealthNotification {
    NSString * _guardianDisplayName;
}

+ (id)category;

- (void).cxx_destruct;
- (id)body;
- (unsigned long long)destinations;
- (id)initWithNotificationManager:(id)arg1 guardianDisplayName:(id)arg2;
- (id)title;

@end
