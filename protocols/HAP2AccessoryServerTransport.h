
@protocol HAP2AccessoryServerTransport <HAP2AccessoryServerTransportCommon>

@required

- (<HAP2AccessoryServerTransportDelegate> *)delegate;
- (void)setDelegate:(id <HAP2AccessoryServerTransportDelegate>)arg1;

@end
