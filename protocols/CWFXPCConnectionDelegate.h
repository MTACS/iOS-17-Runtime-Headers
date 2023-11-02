
@protocol CWFXPCConnectionDelegate <NSObject>

@required

- (void)XPCConnection:(CWFXPCConnection *)arg1 canceledXPCRequestsWithUUID:(NSUUID *)arg2;
- (void)XPCConnection:(CWFXPCConnection *)arg1 receivedXPCRequest:(CWFXPCRequest *)arg2;
- (void)XPCConnection:(CWFXPCConnection *)arg1 updatedRegisteredEventIDs:(NSSet *)arg2;

@end
