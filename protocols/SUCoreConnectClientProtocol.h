
@protocol SUCoreConnectClientProtocol

@required

- (void)connectProtocolFromServerRequestClientID:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)connectProtocolFromServerSendClientMessage:(SUCoreConnectMessage *)arg1;
- (void)connectProtocolFromServerSendClientMessage:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: SUCoreConnectMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SUCoreConnectMessage *, NSError *, void*

@end
