
@protocol MCMCommand_XPC <MCMCommand>

@required

- (id)initWithMessage:(id <MCMXPCMessage>)arg1 context:(id <MCMCommandContext>)arg2 reply:(id <MCMReply>)arg3;
- (bool)preflightClientAllowed;

@end
