
@protocol CWFXPCListenerDelegate <NSObject>

@required

- (void)XPCListener:(CWFXPCListener *)arg1 XPCConnection:(CWFXPCConnection *)arg2 canceledXPCRequestsWithUUID:(NSUUID *)arg3;
- (void)XPCListener:(CWFXPCListener *)arg1 XPCConnection:(CWFXPCConnection *)arg2 receivedXPCRequest:(CWFXPCRequest *)arg3;
- (void)XPCListener:(CWFXPCListener *)arg1 XPCConnection:(CWFXPCConnection *)arg2 updatedRegisteredEventIDs:(NSSet *)arg3;
- (void)XPCListener:(CWFXPCListener *)arg1 addedXPCConnection:(CWFXPCConnection *)arg2;
- (void)XPCListener:(CWFXPCListener *)arg1 invalidatedXPCConnection:(CWFXPCConnection *)arg2;

@end
