
@protocol CATTransportDelegate <NSObject>

@optional

- (void)transport:(CATTransport *)arg1 didFailToSendMessage:(CATMessage *)arg2 error:(NSError *)arg3;
- (void)transport:(CATTransport *)arg1 didInterruptWithError:(NSError *)arg2;
- (void)transport:(CATTransport *)arg1 didReceiveMessage:(CATMessage *)arg2;
- (void)transport:(CATTransport *)arg1 didSendMessage:(CATMessage *)arg2;
- (void)transportDidConnect:(CATTransport *)arg1;
- (void)transportDidInvalidate:(CATTransport *)arg1;
- (void)transportDidResume:(CATTransport *)arg1;

@end
