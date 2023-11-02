
@protocol TPSTelephonyControllerDelegate <TPSControllerDelegate>

@optional

- (void)telephonyController:(TPSTelephonyController *)arg1 didChangeActiveSubscriptions:(NSOrderedSet *)arg2;
- (void)telephonyController:(TPSTelephonyController *)arg1 didChangeSubscriptions:(NSOrderedSet *)arg2;

@end
