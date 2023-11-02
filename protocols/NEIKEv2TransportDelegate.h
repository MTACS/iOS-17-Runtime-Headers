
@protocol NEIKEv2TransportDelegate <NSObject>

@required

- (void)receivePacket:(NEIKEv2Packet *)arg1;
- (void)reportError:(int)arg1;

@end
