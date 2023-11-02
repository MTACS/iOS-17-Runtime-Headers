
@protocol HMBCloudPushObserver <NSObject>

@optional

- (void)handler:(HMBCloudPushHandler *)arg1 didReceiveCKNotification:(CKNotification *)arg2;
- (void)handler:(HMBCloudPushHandler *)arg1 didReceiveMessageWithUserInfo:(NSDictionary *)arg2;
- (void)handler:(HMBCloudPushHandler *)arg1 didReceivePushForTopic:(NSString *)arg2;

@end
