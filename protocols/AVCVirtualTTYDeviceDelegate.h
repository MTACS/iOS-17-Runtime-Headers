
@protocol AVCVirtualTTYDeviceDelegate <NSObject>

@required

- (void)device:(AVCVirtualTTYDevice *)arg1 didReceiveCharacter:(unsigned short)arg2;
- (void)device:(AVCVirtualTTYDevice *)arg1 didReceiveText:(NSString *)arg2;
- (void)device:(AVCVirtualTTYDevice *)arg1 didStart:(bool)arg2 error:(NSError *)arg3;
- (void)deviceDidStop:(AVCVirtualTTYDevice *)arg1;

@end
