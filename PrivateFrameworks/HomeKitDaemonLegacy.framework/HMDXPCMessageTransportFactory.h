
@interface HMDXPCMessageTransportFactory : NSObject <HMDXPCMessageTransportFactory>

@property (readonly) HMDXPCMessageTransport *defaultTransport;

- (id)defaultTransport;

@end
