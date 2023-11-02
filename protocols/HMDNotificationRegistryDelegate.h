
@protocol HMDNotificationRegistryDelegate <NSObject>

@optional

- (void)mediaPropertyRegistrationsDidChangeForMediaProfiles:(NSArray *)arg1;
- (void)notificationRegistryDidUpdate;

@end
