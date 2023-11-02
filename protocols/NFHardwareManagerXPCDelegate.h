
@protocol NFHardwareManagerXPCDelegate

@required

- (void)didInterrupt:(NSXPCConnection *)arg1;
- (void)didInvalidate;

@end
