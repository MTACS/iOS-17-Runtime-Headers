
@interface MCMCommandOperationReclaimDiskSpace : MCMCommand {
    bool  _asynchronously;
    <MCMReply> * _handoffReply;
    <MCMXPCMessage> * _message;
}

@property (nonatomic, readonly) bool asynchronously;
@property (nonatomic, readonly) <MCMReply> *handoffReply;
@property (nonatomic, readonly) <MCMXPCMessage> *message;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)_deleteContainersAtDeathRowURL:(id)arg1 error:(id*)arg2;
- (void)_deleteContainersOnDeathRowWithCompletion:(id /* block */)arg1;
- (bool)_removeItemOrMoveToTempAtURL:(id)arg1 error:(id*)arg2;
- (bool)asynchronously;
- (void)execute;
- (id)handoffReply;
- (id)initWithAsynchronously:(bool)arg1 context:(id)arg2 resultPromise:(id)arg3;
- (id)initWithAsynchronously:(bool)arg1 context:(id)arg2 resultPromise:(id)arg3 handoffForReply:(id)arg4;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3 asyncResultPromise:(id)arg4;
- (id)message;
- (bool)preflightClientAllowed;

@end
