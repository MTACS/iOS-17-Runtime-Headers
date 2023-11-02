
@protocol WPAdvertisingDelegate <NSObject>

@required

- (void)advertiserDidRegisterService;
- (void)advertiserDidUpdateState:(WPAdvertising *)arg1;
- (void)advertiserFailedToRegisterService;
- (void)advertiserPendingServiceOfType:(NSString *)arg1;

@end
