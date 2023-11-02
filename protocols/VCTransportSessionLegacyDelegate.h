
@protocol VCTransportSessionLegacyDelegate <NSObject>

@required

- (void)transportSession:(VCTransportSessionLegacy *)arg1 cancelRelayRequest:(NSDictionary *)arg2;
- (void)transportSession:(VCTransportSessionLegacy *)arg1 connectionSetupDataDidChange:(NSData *)arg2;
- (void)transportSession:(VCTransportSessionLegacy *)arg1 initiateRelayRequest:(NSDictionary *)arg2;
- (void)transportSession:(VCTransportSessionLegacy *)arg1 sendRelayResponse:(NSDictionary *)arg2;

@end
