
@protocol SimplePingDelegate <NSObject>

@optional

- (void)simplePing:(SimplePing *)arg1 didFailToSendPacket:(NSData *)arg2 sequenceNumber:(unsigned short)arg3 error:(NSError *)arg4;
- (void)simplePing:(SimplePing *)arg1 didFailWithError:(NSError *)arg2;
- (void)simplePing:(SimplePing *)arg1 didReceivePingResponsePacket:(NSData *)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(SimplePing *)arg1 didReceiveUnexpectedPacket:(NSData *)arg2;
- (void)simplePing:(SimplePing *)arg1 didSendPacket:(NSData *)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(SimplePing *)arg1 didStartWithAddress:(NSData *)arg2;
- (void)simplePing:(SimplePing *)arg1 didTimeOut:(NSData *)arg2 sequenceNumber:(unsigned short)arg3 error:(NSError *)arg4;

@end
