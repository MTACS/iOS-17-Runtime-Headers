
@interface _TtC20GameCenterFoundationP33_173B6767D14D11986D9117AA9CB52FFC35InstrumentedTransportClientDelegate : _TtCs12_SwiftObject <GKTransportClientDelegate> {
    void reporter;
    void transportContext;
    void wrapped;
}

- (void)connectionDidChangeWithState:(int)arg1 playerID:(id)arg2;
- (void)connectionDidFailWithError:(id)arg1;
- (void)relayDidReceivePushData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)transportDidFailWithError:(id)arg1;
- (void)transportDidReceivePacket:(id)arg1 fromPlayerID:(id)arg2 remoteRecipientID:(id)arg3;
- (void)transportDidUpdateWithInfo:(id)arg1;

@end
