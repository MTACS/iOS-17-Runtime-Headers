
@protocol AVAirTransportDelegate <NSObject>

@required

- (void)airTransport:(AVAirTransport *)arg1 didReceiveObject:(id <AVAirTransportReverseTransformationResultProtocol>)arg2;
- (void)airTransportInputDidClose:(AVAirTransport *)arg1;

@optional

- (void)airTransportOutputDidOpen:(AVAirTransport *)arg1;

@end
