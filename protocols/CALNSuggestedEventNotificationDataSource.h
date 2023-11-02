
@protocol CALNSuggestedEventNotificationDataSource <NSObject>

@required

- (void)clearSuggestedEventNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (void)confirmSuggestedEventWithSourceClientIdentifier:(NSString *)arg1;
- (void)deleteCanceledSuggestedEventWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchSuggestedEventNotificationObjectIDs;
- (CALNSuggestedEventNotificationInfo *)fetchSuggestedEventNotificationWithObjectID:(NSString *)arg1;
- (NSArray *)fetchSuggestedEventNotifications;
- (NSArray *)fetchSuggestedEventNotificationsWithSourceClientIdentifier:(NSString *)arg1;
- (void)ignoreSuggestedEventWithSourceClientIdentifier:(NSString *)arg1;

@end
