
@interface MCMCommandDeleteContainerContent : MCMCommand <MCMParametersWithContainer> {
    MCMContainerIdentity * _containerIdentity;
}

@property (nonatomic, readonly) MCMContainerIdentity *containerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (id)containerIdentity;
- (void)execute;
- (id)initWithContainerIdentity:(id)arg1 context:(id)arg2 resultPromise:(id)arg3;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)preflightClientAllowed;

@end
