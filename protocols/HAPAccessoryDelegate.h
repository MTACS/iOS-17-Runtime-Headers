
@protocol HAPAccessoryDelegate <NSObject>

@optional

- (void)accessory:(HAPAccessory *)arg1 didUpdateReachabilityState:(bool)arg2;
- (void)accessoryDidBecomeReachable:(HAPAccessory *)arg1;
- (void)accessoryDidBecomeUnreachable:(HAPAccessory *)arg1;

@end
