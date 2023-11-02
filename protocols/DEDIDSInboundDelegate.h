
@protocol DEDIDSInboundDelegate <NSObject>

@required

- (void)idsInbound_devicesChanged:(NSArray *)arg1;
- (void)idsInbound_didAbortSessionWithID:(NSString *)arg1;
- (void)idsInbound_didStartBugSessionWithInfo:(NSDictionary *)arg1;
- (DEDBugSession *)idsInbound_sessionForIdentifier:(NSString *)arg1;
- (void)idsInbound_startBugSessionWithIdentifier:(NSString *)arg1 configuration:(DEDBugSessionConfiguration *)arg2 caller:(DEDDevice *)arg3 target:(DEDDevice *)arg4;

@end
