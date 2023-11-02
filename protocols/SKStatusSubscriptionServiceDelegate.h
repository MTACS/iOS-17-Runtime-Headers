
@protocol SKStatusSubscriptionServiceDelegate <NSObject>

@optional

- (void)subscriptionInvitationReceived:(SKStatusSubscription *)arg1;
- (void)subscriptionReceivedStatusUpdate:(SKStatusSubscription *)arg1;
- (void)subscriptionServiceDaemonDisconnected:(SKStatusSubscriptionService *)arg1;
- (void)subscriptionStateChanged:(SKStatusSubscription *)arg1;

@end
