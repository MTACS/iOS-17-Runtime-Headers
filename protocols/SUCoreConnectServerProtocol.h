
@protocol SUCoreConnectServerProtocol

@required

- (void)connectProtocolFromClientSendServerMessage:(SUCoreConnectMessage *)arg1;
- (void)connectProtocolFromClientSendServerMessage:(void *)arg1 proxyObject:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 9: SUCoreConnectMessage *, SUCoreConnectClientProxy *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SUCoreConnectMessage *, NSError *, void*

@end
