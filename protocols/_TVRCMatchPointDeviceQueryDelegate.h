
@protocol _TVRCMatchPointDeviceQueryDelegate <NSObject>

@optional

- (void)matchpointDeviceQuery:(TVRCMatchPointDeviceQuery *)arg1 addedService:(TVRCHMServiceWrapper *)arg2;
- (void)matchpointDeviceQuery:(TVRCMatchPointDeviceQuery *)arg1 removedService:(TVRCHMServiceWrapper *)arg2;

@end
