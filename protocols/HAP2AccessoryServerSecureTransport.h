
@protocol HAP2AccessoryServerSecureTransport <HAP2AccessoryServerTransportCommon>

@required

- (<HAP2AccessoryServerSecureTransportDelegate> *)delegate;
- (void)setDelegate:(id <HAP2AccessoryServerSecureTransportDelegate>)arg1;

@end
