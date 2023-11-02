
@protocol CALNEventCanceledNotificationDataSource <NSObject>

@required

- (void)clearCanceledEventNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (void)deleteCanceledEventWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchEventCanceledNotificationSourceClientIdentifiers:(NSSet *)arg1;
- (CALNEventCanceledNotificationInfo *)fetchEventCanceledNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchEventCanceledNotifications;

@end
