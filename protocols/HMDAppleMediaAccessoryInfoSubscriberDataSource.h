
@protocol HMDAppleMediaAccessoryInfoSubscriberDataSource <NSObject>

@required

- (NSString *)accessoryInfoControllerTopicForWifiInfo;
- (<HMESubscriptionProviding> *)subscriptionProvider;

@end
