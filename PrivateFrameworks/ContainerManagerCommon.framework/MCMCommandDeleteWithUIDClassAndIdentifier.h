
@interface MCMCommandDeleteWithUIDClassAndIdentifier : MCMCommand <MCMParametersWithContainer> {
    MCMContainerIdentity * _containerIdentity;
    MCMCommandOperationDelete * _deleteCommand;
}

@property (nonatomic, readonly) MCMContainerIdentity *containerIdentity;
@property (nonatomic, readonly) MCMCommandOperationDelete *deleteCommand;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (id)containerIdentity;
- (id)deleteCommand;
- (void)execute;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)preflightClientAllowed;

@end
