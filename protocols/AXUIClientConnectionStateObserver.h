
@protocol AXUIClientConnectionStateObserver <NSObject>

@required

- (void)clientConnection:(AXUIClientConnection *)arg1 didChangeConnectedState:(bool)arg2;

@end
