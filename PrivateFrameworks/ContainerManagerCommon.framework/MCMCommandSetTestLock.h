
@interface MCMCommandSetTestLock : MCMCommand <MCMParametersSetTestLock> {
    bool  _enable;
    <MCMXPCMessage> * _message;
    unsigned long long  _requestedLocks;
}

@property (nonatomic, readonly) bool enable;
@property (nonatomic, readonly) <MCMXPCMessage> *message;
@property (nonatomic, readonly) unsigned long long requestedLocks;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (bool)enable;
- (void)execute;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (id)message;
- (bool)preflightClientAllowed;
- (unsigned long long)requestedLocks;

@end
