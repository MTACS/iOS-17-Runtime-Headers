
@protocol TKTokenDriverProtocol <NSObject>

@required

- (void)acquireTokenWithInstanceID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSError *, void*
- (void)acquireTokenWithSlot:(void *)arg1 AID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSXPCListenerEndpoint *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSString *, NSError *, void*
- (void)configureWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)releaseTokenWithInstanceID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setConfigurationEndpoint:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
