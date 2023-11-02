
@protocol _TVRCRMSDeviceWrapperDelegate <NSObject>

@required

- (void)connectedToDevice:(_TVRCRMSDeviceWrapper *)arg1;
- (void)deviceEncounteredAuthenticationChallenge:(TVRXDeviceAuthenticationChallenge *)arg1;
- (void)deviceUpdatedSupportedButtons:(_TVRCRMSDeviceWrapper *)arg1;
- (void)disconnectedFromDevice:(_TVRCRMSDeviceWrapper *)arg1 error:(NSError *)arg2;

@end
