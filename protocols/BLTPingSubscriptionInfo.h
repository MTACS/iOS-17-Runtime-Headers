
@protocol BLTPingSubscriptionInfo <NSObject>

@required

- (bool)canAck;
- (bool)canAckOnLocalConnection;
- (bool)forBulletin;
- (NSString *)sectionID;

@end
