
@protocol AVBonjourServiceClientDelegate <NSObject>

@required

- (void)didConnectToBonjourService:(NSNetService *)arg1 channel:(AVAirTransport *)arg2;

@end
