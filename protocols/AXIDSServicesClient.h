
@protocol AXIDSServicesClient <NSObject>

@required

- (void)didReceiveIncomingData:(NSDictionary *)arg1;

@optional

- (void)connectedDevicesDidChange:(NSArray *)arg1;
- (void)serverConnectionWasInterrupted;

@end
