
@protocol HMFMessageTransportDelegate <NSObject>

@required

- (void)messageTransport:(HMFMessageTransport *)arg1 didReceiveMessage:(HMFMessage *)arg2;

@end
