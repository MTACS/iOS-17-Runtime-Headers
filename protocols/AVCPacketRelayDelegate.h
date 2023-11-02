
@protocol AVCPacketRelayDelegate <NSObject>

@required

- (void)packetRelay:(AVCPacketRelay *)arg1 didStart:(bool)arg2 error:(NSError *)arg3;

@optional

- (void)packetRelay:(AVCPacketRelay *)arg1 didStop:(bool)arg2 error:(NSError *)arg3;

@end
