
@protocol DMFTransportProvider <NSObject>

@required

- (CATTransport *)makeNewTransport;

@end
