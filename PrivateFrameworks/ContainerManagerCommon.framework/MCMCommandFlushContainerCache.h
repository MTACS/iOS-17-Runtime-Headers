
@interface MCMCommandFlushContainerCache : MCMCommand <MCMParametersFlushContainerCache> {
    unsigned long long  _containerClass;
    <MCMXPCMessage> * _message;
    bool  _transient;
}

@property (nonatomic, readonly) unsigned long long containerClass;
@property (nonatomic, readonly) <MCMXPCMessage> *message;
@property (nonatomic, readonly) bool transient;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (unsigned long long)containerClass;
- (void)execute;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (id)message;
- (bool)preflightClientAllowed;
- (bool)transient;

@end
