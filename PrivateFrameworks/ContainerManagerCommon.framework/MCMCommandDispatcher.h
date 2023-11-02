
@interface MCMCommandDispatcher : NSObject {
    NSMutableDictionary * _messageToCommandClassMap;
}

@property (nonatomic, readonly) NSMutableDictionary *messageToCommandClassMap;

- (void).cxx_destruct;
- (Class)_commandClassFromXPCMessage:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)_commandFromCommandClass:(Class)arg1 message:(id)arg2 context:(id)arg3 reply:(id)arg4 error:(id*)arg5;
- (id)_ifNeededRelayMessage:(id)arg1 context:(id)arg2;
- (id)_messageFromCommandClass:(Class)arg1 xpcMessage:(id)arg2 context:(id)arg3 error:(id*)arg4;
- (void)dispatchMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (id)init;
- (id)messageToCommandClassMap;
- (void)registerCommandClass:(Class)arg1;

@end
