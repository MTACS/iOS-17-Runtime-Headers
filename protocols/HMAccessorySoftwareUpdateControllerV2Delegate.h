
@protocol HMAccessorySoftwareUpdateControllerV2Delegate <NSObject>

@required

- (void)softwareUpdateController:(HMAccessorySoftwareUpdateControllerV2 *)arg1 accessory:(NSUUID *)arg2 didFailUpdate:(HMSoftwareUpdateV2 *)arg3 withError:(NSError *)arg4 timestamp:(NSDate *)arg5;
- (void)softwareUpdateController:(HMAccessorySoftwareUpdateControllerV2 *)arg1 accessory:(NSUUID *)arg2 didReceiveUpdate:(HMSoftwareUpdateV2 *)arg3;

@optional

- (void)softwareUpdateController:(HMAccessorySoftwareUpdateControllerV2 *)arg1 accessory:(NSUUID *)arg2 didUpdateProgress:(HMSoftwareUpdateProgressV2 *)arg3;

@end
