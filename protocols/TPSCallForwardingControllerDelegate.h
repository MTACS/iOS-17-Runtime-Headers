
@protocol TPSCallForwardingControllerDelegate <NSObject>

@optional

- (void)callForwardingController:(TPSCallForwardingController *)arg1 didChangeServiceType:(long long)arg2;
- (void)callForwardingController:(TPSCallForwardingController *)arg1 didChangeValue:(CTCallForwardingValue *)arg2 error:(NSError *)arg3;

@end
