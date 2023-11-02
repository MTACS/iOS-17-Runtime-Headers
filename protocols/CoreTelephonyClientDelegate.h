
@protocol CoreTelephonyClientDelegate <NSObject>

@optional

- (void)activeSubscriptionsDidChange;
- (void)dualSimCapabilityDidChange;
- (void)simLessSubscriptionsDidChange;
- (void)subscriptionInfoDidChange;

@end
