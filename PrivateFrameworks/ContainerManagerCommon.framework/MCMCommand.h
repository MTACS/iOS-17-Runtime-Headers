
@interface MCMCommand : NSObject <MCMCommand, MCMCommand_Internal, MCMCommand_XPC> {
    MCMCommandContext * _context;
    <MCMReply> * _reply;
    <MCMResultPromise> * _resultPromise;
}

@property (nonatomic, readonly) MCMCommandContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MCMReply> *reply;
@property (nonatomic, readonly) <MCMResultPromise> *resultPromise;
@property (readonly) Class superclass;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;
+ (id)relayToPrivilegedDaemonMessage:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)context;
- (void)execute;
- (id)initWithContext:(id)arg1 resultPromise:(id)arg2;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)preflightClientAllowed;
- (id)reply;
- (id)resultPromise;

@end
