
@protocol DEDSharingInboundDelegate <NSObject>

@required

- (void)sharingInbound_didAbortSessionWithID:(NSString *)arg1;
- (void)sharingInbound_didStartBugSessionWithInfo:(NSDictionary *)arg1;
- (void)sharingInbound_promptPINForDevice:(DEDDevice *)arg1 fromInbound:(DEDXPCInbound *)arg2;
- (DEDBugSession *)sharingInbound_sessionForIdentifier:(NSString *)arg1;
- (void)sharingInbound_startBugSessionWithIdentifier:(NSString *)arg1 configuration:(DEDBugSessionConfiguration *)arg2 caller:(DEDDevice *)arg3 target:(DEDDevice *)arg4;
- (void)sharingInbound_successPINForDevice:(DEDDevice *)arg1 fromInbound:(DEDXPCInbound *)arg2;

@end
