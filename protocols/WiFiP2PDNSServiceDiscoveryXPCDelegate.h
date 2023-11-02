
@protocol WiFiP2PDNSServiceDiscoveryXPCDelegate <NSObject>

@required

- (void)handleEventType:(unsigned long long)arg1 keyData:(NSData *)arg2 valueData:(NSData *)arg3;

@end
