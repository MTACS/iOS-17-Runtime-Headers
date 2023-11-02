
@interface ISONotificationPendingResponse : NSObject

- (id)error;
- (bool)isNotificationPending;
- (id)maxDelayTimestampMillis;

@end
