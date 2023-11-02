
@protocol DEDNotificationDelivering <NSObject>

@required

+ (void)forceRemoveNotificationWithIdentifier:(NSString *)arg1 hostIdentifier:(NSString *)arg2;

- (id)initWithConfiguration:(DEDBugSessionConfiguration *)arg1 session:(DEDBugSession *)arg2;

@end
