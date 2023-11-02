
@protocol _TVRCRMSDeviceQueryDelegate <NSObject>

@optional

- (void)rmsDeviceQuery:(_TVRCRMSDeviceQuery *)arg1 addedDevice:(_TVRCRMSDeviceWrapper *)arg2;
- (void)rmsDeviceQuery:(_TVRCRMSDeviceQuery *)arg1 removedDevice:(_TVRCRMSDeviceWrapper *)arg2;

@end
