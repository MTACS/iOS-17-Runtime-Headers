
@protocol CWFXPCRequestProxyDelegate <NSObject>

@required

- (void)XPCRequestProxy:(CWFXPCRequestProxy *)arg1 XPCConnection:(CWFXPCConnection *)arg2 canceledXPCRequestsWithUUID:(NSUUID *)arg3;
- (void)XPCRequestProxy:(CWFXPCRequestProxy *)arg1 XPCConnection:(CWFXPCConnection *)arg2 receivedXPCRequest:(CWFXPCRequest *)arg3;
- (void)XPCRequestProxy:(CWFXPCRequestProxy *)arg1 invalidatedXPCConnection:(CWFXPCConnection *)arg2;
- (void)XPCRequestProxy:(void *)arg1 sendXPCEvent:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 7: CWFXPCRequestProxy *, CWFXPCEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
