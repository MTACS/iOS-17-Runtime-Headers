
@protocol HAP2AccessoryServerTransportDelegate <NSObject>

@required

- (void)transport:(id <HAP2AccessoryServerTransportCommon>)arg1 didChangeState:(unsigned long long)arg2 error:(NSError *)arg3;
- (void)transport:(id <HAP2AccessoryServerTransportCommon>)arg1 didReceiveEvent:(NSData *)arg2;

@end
