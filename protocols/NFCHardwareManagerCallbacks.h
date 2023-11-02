
@protocol NFCHardwareManagerCallbacks <NSObject>

@required

- (void)hwStateDidChange:(unsigned int)arg1;

@end
