
@protocol MCMCommand_Internal <MCMCommand_XPC>

@required

- (MCMCommandContext *)context;
- (<MCMReply> *)reply;
- (<MCMResultPromise> *)resultPromise;

@end
