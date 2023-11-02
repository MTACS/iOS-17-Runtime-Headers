
@protocol SidecarCore_Interface

@required

- (void)relayPresenterServiceExtensionReady:(NSUUID *)arg1;
- (void)relayPresenterStartServiceExtension:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)relaySession:(long long)arg1 closedWithError:(NSError *)arg2;
- (void)relaySession:(NSUUID *)arg1 openedByDevice:(SidecarDevice *)arg2 dataLink:(long long)arg3 service:(NSString *)arg4;
- (void)relaySession:(long long)arg1 receivedOPACKData:(NSData *)arg2 dataLink:(long long)arg3;
- (void)relaySession:(long long)arg1 stream:(NSString *)arg2 status:(unsigned long long)arg3;
- (void)relayTerminateService;

@end
